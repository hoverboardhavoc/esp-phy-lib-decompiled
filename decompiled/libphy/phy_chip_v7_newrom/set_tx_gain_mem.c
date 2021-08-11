/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_newrom.o -> set_tx_gain_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_tx_gain_mem(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  
  uVar1 = (uint)(param_1 != 0) * 0x10 + (_DAT_60006000 >> 0x12) & 0xff;
  uVar4 = param_2 + uVar1;
  iVar6 = 0;
  for (; uVar1 != (uVar4 & 0xff); uVar1 = uVar1 + 1 & 0xff) {
    uVar2 = (uint)*(ushort *)(param_4 + iVar6);
    iVar3 = txbbgain_to_index(uVar2);
    puVar5 = (ushort *)(param_3 + iVar6);
    iVar6 = iVar6 + 2;
    write_gain_mem((uint)*(ushort *)(iVar3 * 4 + param_5) | (uVar2 & 3) << 10 | (uVar2 & 0xc0) << 2,
                   (*puVar5 >> 8 & 0x3f) << 0xb | (*puVar5 & 0x7f) << 0x11 | param_6 & 0x7ff |
                   (uint)*(ushort *)(iVar3 * 4 + param_5 + 2) << 0x18,uVar1);
  }
  return;
}

