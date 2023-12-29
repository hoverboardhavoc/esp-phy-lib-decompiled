/*
 * Last changed at upstream commit 98617ae683c7456706c7de6e27b7f0355c77dc9b
 * https://github.com/espressif/esp-phy-lib/commit/98617ae683c7456706c7de6e27b7f0355c77dc9b
 * Upstream date: 2023-12-29 17:32:23 +0800
 * Upstream subject: fix h2 crash at pos rssi bug
 * Source: librftest -> phy_test.o -> xtal_freq_rx_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void xtal_freq_rx_cal(int param_1,int param_2)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    _DAT_600a0804 = _DAT_600a0804 | 2;
  }
  else {
    _DAT_600a0804 = _DAT_600a0804 & 0xfffffffd;
  }
  if ((freq_rx_cal_en != '\0') && ((param_2 - 0x20U & 0xffdf) == 0)) {
    if (param_1 == 0) {
      i2c_writeReg_Mask(0x6a,0,1,7,4,dreg_1p2_data);
      return;
    }
    dreg_1p2_data = i2c_readReg_Mask(0x6a,0,1,7,4);
    uVar1 = DAT_000113a9;
    if (param_2 == 0x20) {
      uVar1 = xtal_dreg_1p2;
    }
    i2c_writeReg_Mask(0x6a,0,1,7,4,uVar1);
    ets_delay_us(10);
    return;
  }
  return;
}

