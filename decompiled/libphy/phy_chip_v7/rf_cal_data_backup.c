/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> rf_cal_data_backup
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 rf_cal_data_backup(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  puVar2 = (undefined1 *)(param_1 + 0xc);
  iVar3 = 0;
  do {
    iVar1 = 0;
    puVar7 = puVar2;
    while( true ) {
      uVar4 = _DAT_6000e0c0;
      _DAT_6000e0c4 = _DAT_6000e0c4 & 0xffffff00 | iVar1 + iVar3;
      uVar5 = 0;
      puVar8 = puVar7;
      do {
        *puVar8 = (char)(uVar4 >> (uVar5 & 0x1f));
        uVar5 = uVar5 + 8;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0x20);
      puVar7 = puVar7 + 4;
      if (iVar1 == 1) break;
      iVar1 = 1;
    }
    iVar3 = iVar3 + 3;
    puVar2 = puVar2 + 0xc;
  } while (iVar3 != 0xff);
  puVar6 = &phy_param;
  iVar3 = 0x2b4;
  do {
    uVar4 = 0;
    puVar2 = (undefined1 *)(param_1 + iVar3);
    do {
      *puVar2 = (char)(*(uint *)(puVar6 + 0x7a) >> (uVar4 & 0x1f));
      uVar4 = uVar4 + 8;
      puVar2 = puVar2 + 1;
    } while (uVar4 != 0x20);
    iVar3 = iVar3 + 4;
    puVar6 = puVar6 + 2;
  } while (iVar3 != 0x350);
  return 0x350;
}

