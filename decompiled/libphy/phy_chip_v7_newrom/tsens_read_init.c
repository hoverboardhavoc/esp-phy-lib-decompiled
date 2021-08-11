/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_newrom.o -> tsens_read_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tsens_read_init(void)

{
  uint uVar1;
  
  uVar1 = tsens_index_to_dac();
  _DAT_60040058 = _DAT_60040058 & 0xffc01fff | 0x8000;
  _DAT_6004005c = _DAT_6004005c & 0xffffc000 | 5;
  i2c_writeReg_Mask(0x69,0,6,3,0,uVar1 & 0xf);
  i2c_writeReg_Mask(0x69,0,6,5,4,2);
  _DAT_6004b024 = _DAT_6004b024 | 0x800;
  _DAT_6004b02c = _DAT_6004b02c & 0xfffff7ff;
  _DAT_6004005c = _DAT_6004005c | 0x8000;
  _DAT_60040058 = _DAT_60040058 | 0x400000;
  return;
}

