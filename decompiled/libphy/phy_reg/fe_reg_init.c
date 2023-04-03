/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_reg.o -> fe_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x0001052a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fe_reg_init(void)

{
  int iVar1;
  undefined1 auStack_58 [24];
  undefined2 auStack_40 [12];
  ushort auStack_28 [14];
  
  _DAT_600a0468 = _DAT_600a0468 & 0xfffffeff;
  _DAT_600a045c = _DAT_600a045c & 0xff00ffff;
  _DAT_600a0410 = _DAT_600a0410 & 0xffffff | 0x50000000;
  _DAT_600a0450 = _DAT_600a0450 | 0xe0000000;
  memcpy(auStack_58,&_LANCHOR0,0x16);
  memcpy(auStack_40,&DAT_00011818,0x16);
  iVar1 = 0;
  do {
    *(undefined2 *)((int)auStack_28 + iVar1) = *(undefined2 *)((int)auStack_40 + iVar1);
    iVar1 = iVar1 + 2;
  } while (iVar1 != 0x16);
  _DAT_600a0c18 =
       (uint)auStack_28[10] << 0x17 | (uint)auStack_28[9] << 0xe | (uint)auStack_28[6] |
       (uint)auStack_28[8] << 6;
  _DAT_600a0c1c =
       (uint)auStack_28[7] << 0x19 | (uint)auStack_28[5] << 0x14 | (uint)auStack_28[4] << 0x10 |
       (uint)auStack_28[3] << 0xc | (uint)auStack_28[2] << 9 | (uint)auStack_28[1] << 7 |
       (uint)auStack_28[0] << 6;
  _DAT_600a044c = _DAT_600a044c & 0xffc00000 | 0xcda02;
  return;
}

