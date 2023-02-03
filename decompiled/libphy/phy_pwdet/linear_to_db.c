/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_pwdet.o -> linear_to_db
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int linear_to_db(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte abStack_20 [20];
  
  memcpy(abStack_20,&_LANCHOR0,0x10);
  if (param_2 < 3) {
    uVar1 = param_1 << (3 - param_2 & 0x1f);
  }
  else {
    uVar1 = param_1 >> (param_2 - 3 & 0x1f);
  }
  iVar2 = __clzsi2(uVar1);
  uVar3 = (0x1c - iVar2) * 0x1000000 >> 0x18;
  if ((int)uVar3 < 1) {
    uVar3 = 0;
  }
  else {
    uVar1 = (int)uVar1 >> (uVar3 - 1 & 0x1f);
  }
  return (int)(((uVar3 & 0xffff) * 0x30 + (uint)abStack_20[uVar1 & 0xf]) * 0x10000) >> 0x10;
}

