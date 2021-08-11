/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_newrom.o -> tsens_temp_read
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 tsens_temp_read(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((int)(_DAT_60040058 << 9) < 0) {
    uVar1 = _DAT_60040058 & 0xff;
  }
  else {
    uVar1 = (uint)DAT_0001206a;
  }
  uVar2 = tsens_index_to_offset(DAT_00012082);
  uVar2 = code_to_temp(uVar1,uVar2);
  tsens_dac_cal(&phy_param);
  _DAT_0001206a = (short)uVar2;
  return uVar2;
}

