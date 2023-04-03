/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_reg.o -> adc_cal_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void adc_cal_set(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_58 [24];
  undefined1 auStack_40 [24];
  ushort local_28 [14];
  
  memcpy(local_58,&_LANCHOR0,0x16);
  memcpy(auStack_40,&DAT_00011818,0x16);
  iVar3 = 0;
  do {
    puVar1 = auStack_40;
    if (param_1 == 0) {
      puVar1 = local_58;
    }
    *(undefined2 *)((int)local_28 + iVar3) = *(undefined2 *)(puVar1 + iVar3);
    iVar3 = iVar3 + 2;
  } while (iVar3 != 0x16);
  _DAT_600a0c18 =
       (uint)local_28[10] << 0x17 | (uint)local_28[9] << 0xe | (uint)local_28[6] |
       (uint)local_28[8] << 6;
  _DAT_600a0c1c =
       (uint)local_28[7] << 0x19 | (uint)local_28[5] << 0x14 | (uint)local_28[4] << 0x10 |
       (uint)local_28[3] << 0xc | (uint)local_28[2] << 9 | (uint)local_28[1] << 7 |
       (uint)local_28[0] << 6;
  uVar2 = 0x101000;
  if (param_1 != 0) {
    uVar2 = 0xcd800;
  }
  _DAT_600a044c = _DAT_600a044c & 0xffc00000 | uVar2 | 0x202;
  return;
}

