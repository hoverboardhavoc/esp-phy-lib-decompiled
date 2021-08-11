/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> set_pbus_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_pbus_mem(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 auStack_6c [2];
  undefined4 auStack_64 [3];
  undefined4 auStack_58 [3];
  undefined4 auStack_4c [3];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_40 = 0x68fff;
  uStack_3c = 0x141bff;
  uStack_30 = 0x419ff;
  uStack_38 = 0xf40000;
  uStack_34 = 0xf50000;
  uStack_2c = 0x150dff;
  uStack_28 = 0xf00000;
  uStack_24 = 0xf10000;
  uVar2 = 6;
  puVar8 = &local_40;
  iVar1 = 4;
  iVar6 = 0;
  uVar3 = 0;
  puVar5 = (uint *)&DAT_600060ec;
_L31:
  while( true ) {
    uVar9 = iVar1 + uVar3;
    *puVar5 = ~(0xffff << iVar6) & *puVar5 | (((uVar9 - 1) * 0x100 | uVar3) & 0xffff) << iVar6;
    uVar3 = (uVar3 + 0x200) * 0x100;
    iVar6 = 0;
    do {
      puVar7 = puVar8 + iVar6;
      uVar4 = uVar3 & 0x3ff00;
      iVar6 = iVar6 + 1;
      _DAT_600060cc = *puVar7;
      uVar3 = uVar3 + 0x100;
      _DAT_600060c8 = _DAT_600060c8 & 0xfffc00ff | uVar4;
    } while (iVar1 != iVar6);
    uVar2 = uVar2 + 1;
    if (uVar2 == 0xc) {
      return;
    }
    uVar3 = uVar9;
    if (uVar2 != 8) break;
    puVar8 = &uStack_30;
    iVar1 = 4;
    iVar6 = 0;
_L43:
    puVar5 = (uint *)0x600060f0;
  }
  puVar5 = (uint *)&DAT_600060f4;
  if (uVar2 < 9) {
    if (uVar2 == 7) {
      puVar8 = auStack_58;
      iVar1 = 3;
      iVar6 = 0x10;
      puVar5 = (uint *)&DAT_600060ec;
      goto _L31;
    }
  }
  else {
    if (uVar2 == 9) {
      puVar8 = auStack_4c;
      iVar1 = 3;
      iVar6 = 0x10;
      goto _L43;
    }
    if (uVar2 == 10) {
      puVar8 = auStack_64;
      iVar1 = 3;
      iVar6 = 0;
      goto _L31;
    }
  }
  puVar8 = auStack_6c;
  iVar1 = 2;
  iVar6 = 0x10;
  goto _L31;
}

