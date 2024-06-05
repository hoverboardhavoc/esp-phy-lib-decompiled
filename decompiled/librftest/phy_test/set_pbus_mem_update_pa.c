/*
 * Last changed at upstream commit c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * https://github.com/espressif/esp-phy-lib/commit/c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * Upstream date: 2024-06-05 14:35:04 +0800
 * Upstream subject: update C6 H2 libphy for coex test ble 154 chan bug
 * Source: librftest -> phy_test.o -> set_pbus_mem_update_pa
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_pbus_mem_update_pa(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte local_9c [13];
  byte abStack_8f [3];
  undefined4 auStack_8c [15];
  undefined4 local_50;
  undefined4 uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  
  memcpy(local_9c,&_LANCHOR3,0xd);
  pbVar6 = local_9c;
  do {
    if (param_2 < *pbVar6) {
      *pbVar6 = (byte)param_2;
    }
    pbVar6 = pbVar6 + 1;
  } while (abStack_8f != pbVar6);
  uVar3 = param_1 << 4;
  local_50 = 0x340bff;
  uStack_4c = 0xf20000;
  uStack_48 = (local_9c[0] | uVar3) << 9 | 0x3801ff;
  uStack_44 = (local_9c[1] | uVar3) << 9 | 0x3801ff;
  uStack_40 = (local_9c[2] | uVar3) << 9 | 0x3801ff;
  uStack_3c = (local_9c[3] | uVar3) << 9 | 0x3801ff;
  uStack_38 = (local_9c[4] | uVar3) << 9 | 0x3801ff;
  uStack_34 = (local_9c[5] | uVar3) << 9 | 0x3801ff;
  uStack_30 = (local_9c[6] | uVar3) << 9 | 0x3801ff;
  uStack_2c = (local_9c[7] | uVar3) << 9 | 0x3801ff;
  uStack_24 = (local_9c[9] | uVar3) << 9 | 0x3801ff;
  uStack_20 = (local_9c[10] | uVar3) << 9 | 0x3801ff;
  uStack_18 = (local_9c[0xc] | uVar3) << 9 | 0x3801ff;
  uStack_28 = (local_9c[8] | uVar3) << 9 | 0x3801ff;
  uStack_1c = (local_9c[0xb] | uVar3) << 9 | 0x3801ff;
  uStack_14 = 0xf30000;
  bVar1 = false;
  puVar9 = &local_50;
  iVar4 = 0x10;
  iVar5 = 0;
  uVar3 = 0xc;
  while( true ) {
    uVar8 = uVar3 + iVar4;
    _DAT_600a08f4 =
         (((uVar8 - 1) * 0x100 | uVar3) & 0xffff) << iVar5 | ~(0xffff << iVar5) & _DAT_600a08f4;
    uVar3 = (uVar3 + 0x200) * 0x800;
    iVar5 = 0;
    do {
      puVar7 = puVar9 + iVar5;
      uVar2 = uVar3 & 0x1ff800;
      iVar5 = iVar5 + 1;
      _DAT_600a08cc = *puVar7;
      uVar3 = uVar3 + 0x800;
      _DAT_600a08c8 = _DAT_600a08c8 & 0xffe007ff | uVar2;
    } while (iVar4 != iVar5);
    iVar5 = 0x10;
    iVar4 = 0xf;
    puVar9 = auStack_8c;
    if (bVar1) break;
    bVar1 = true;
    uVar3 = uVar8;
  }
  return;
}

