/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> get_sar_dout
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int get_sar_dout(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_20 [2];
  ushort uStack_1e;
  ushort uStack_1c;
  ushort uStack_1a;
  ushort uStack_18;
  ushort uStack_16;
  ushort uStack_14;
  ushort uStack_12;
  
  read_sar_dout(auStack_20);
  uVar3 = ((uint)uStack_14 + (uint)uStack_12) * 0x30000 >> 0x10;
  iVar4 = (int)((((uint)uStack_1e + (uint)uStack_1c + (uint)uStack_1a) * 2 - uVar3) * 0x10000) >>
          0x10;
  iVar1 = (int)((((uint)uStack_18 + (uint)uStack_16) * 3 - uVar3) * 0x10000) >> 0x10;
  iVar2 = 0;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  iVar2 = linear_to_db((int)(short)iVar2,3);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iVar1 = linear_to_db((int)(short)iVar1,3);
  return ((param_1 + iVar2) - iVar1) * 0x10000 >> 0x10;
}

