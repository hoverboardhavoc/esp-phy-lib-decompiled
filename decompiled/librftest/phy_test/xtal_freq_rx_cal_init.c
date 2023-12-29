/*
 * Last changed at upstream commit 98617ae683c7456706c7de6e27b7f0355c77dc9b
 * https://github.com/espressif/esp-phy-lib/commit/98617ae683c7456706c7de6e27b7f0355c77dc9b
 * Upstream date: 2023-12-29 17:32:23 +0800
 * Upstream subject: fix h2 crash at pos rssi bug
 * Source: librftest -> phy_test.o -> xtal_freq_rx_cal_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void xtal_freq_rx_cal_init(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint unaff_s4;
  
  uVar3 = i2c_readReg_Mask(0x6a,0,1,7,4);
  iVar6 = 0;
  uVar2 = 0;
  iVar4 = 0x20;
  while( true ) {
    phy_set_freq(iVar4 + 0x962,0);
    ets_delay_us(0x32);
    force_rx_gain(1,0x28,1);
    start_tx_tone_step(1,0x40,0x28,0,0,0);
    uVar1 = 5;
    do {
      i2c_writeReg_Mask(0x6a,0,1,7,4,uVar1 & 0xff);
      ets_delay_us(param_1);
      uVar5 = get_rxiq_pwr();
      if ((uVar1 == 5) || (uVar5 < unaff_s4)) {
        uVar2 = uVar1 & 0xff;
        unaff_s4 = uVar5;
      }
      if (param_2 != 0) {
        phy_printf("%d,%d,%d,%d,%d\n",uVar1,uVar1,unaff_s4,uVar2);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0x10);
    (&xtal_dreg_1p2)[iVar6] = (char)uVar2;
    force_rx_gain(0,0x28,1);
    start_tx_tone_step(0,0x40,0x28,0,0,0);
    if (iVar6 != 0) break;
    iVar6 = 1;
    iVar4 = 0x40;
  }
  i2c_writeReg_Mask(0x6a,0,1,7,4,uVar3);
  return;
}

