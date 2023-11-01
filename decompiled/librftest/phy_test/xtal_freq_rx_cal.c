/*
 * Last changed at upstream commit a8e8b9532e2874ac167d4ade7808fda70fe05820
 * https://github.com/espressif/esp-phy-lib/commit/a8e8b9532e2874ac167d4ade7808fda70fe05820
 * Upstream date: 2023-11-01 14:13:34 +0800
 * Upstream subject: h2 libphy fix ble track
 * Source: librftest -> phy_test.o -> xtal_freq_rx_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void xtal_freq_rx_cal(int param_1,short param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_s2;
  uint uVar4;
  
  if ((freq_rx_cal_en == '\0') || ((param_2 - 0x20U & 0xffdf) != 0)) {
    return;
  }
  if (param_1 == 0) {
    i2c_writeReg_Mask(0x6a,0,1,7,4,dreg_1p2_data);
    return;
  }
  phy_set_freq(param_2 + 0x962,0);
  force_rx_gain(1,0x28,1);
  dreg_1p2_data = i2c_readReg_Mask(0x6a,0,1,7,4);
  uVar2 = 0;
  start_tx_tone_step(1,0x40,0x28,0,0,0);
  uVar4 = 0;
  do {
    if (uVar4 < 8) {
      uVar1 = (uVar4 & 0xffff) + 8;
    }
    else {
      uVar1 = 0xf - (uVar4 & 0xffff);
    }
    i2c_writeReg_Mask(0x6a,0,1,7,4,uVar1 & 0xff);
    ets_delay_us(10);
    uVar3 = get_rxiq_pwr();
    if ((uVar4 == 0) || (uVar3 < unaff_s2)) {
      uVar2 = uVar1 & 0xff;
      unaff_s2 = uVar3;
    }
    if (param_3 == 0) {
      if ((unaff_s2 < 50000) && (6 < uVar4)) break;
    }
    else {
      phy_printf("%d,%d,%d,%d,%d\n",uVar4,uVar1 & 0xffff,unaff_s2,uVar2);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0xe);
  i2c_writeReg_Mask(0x6a,0,1,7,4,uVar2);
  force_rx_gain(0,0x28,1);
  start_tx_tone_step(0,0x40,0x28,0,0,0);
  return;
}

