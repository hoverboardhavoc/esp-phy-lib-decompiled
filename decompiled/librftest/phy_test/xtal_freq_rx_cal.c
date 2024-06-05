/*
 * Last changed at upstream commit c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * https://github.com/espressif/esp-phy-lib/commit/c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * Upstream date: 2024-06-05 14:35:04 +0800
 * Upstream subject: update C6 H2 libphy for coex test ble 154 chan bug
 * Source: librftest -> phy_test.o -> xtal_freq_rx_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void xtal_freq_rx_cal(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = abs_temp(param_2 + -0x20);
  if (iVar2 < 2) {
    param_2 = 0x20;
  }
  else {
    iVar2 = abs_temp(param_2 + -0x40);
    if (iVar2 < 2) {
      param_2 = 0x40;
    }
  }
  if ((freq_rx_cal_en != '\0') && ((param_2 - 0x20U & 0xffdf) == 0)) {
    if (param_1 == 0) {
      i2c_writeReg_Mask(0x6a,0,1,7,4,dreg_1p2_data);
      return;
    }
    dreg_1p2_data = i2c_readReg_Mask(0x6a,0,1,7,4);
    uVar1 = DAT_000113d1;
    if (param_2 == 0x20) {
      uVar1 = xtal_dreg_1p2;
    }
    i2c_writeReg_Mask(0x6a,0,1,7,4,uVar1);
    ets_delay_us(10);
    return;
  }
  return;
}

