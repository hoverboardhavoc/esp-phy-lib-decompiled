/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_pbus.o -> set_pbus_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_pbus_mem(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 auStack_60 [3];
  undefined4 auStack_54 [3];
  undefined4 auStack_48 [3];
  undefined4 auStack_3c [3];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_30 = 0x68fff;
  uStack_2c = 0x141bff;
  uStack_28 = 0xf40000;
  uStack_24 = 0xf50000;
  memcpy(auStack_60,&_LANCHOR0,0xc);
  memcpy(auStack_54,&DAT_00010588,0xc);
  memcpy(auStack_48,&_LANCHOR0,0xc);
  memcpy(auStack_3c,&DAT_00010594,0xc);
  uStack_68 = 0x3401ff;
  uStack_64 = 0x3801ff;
  uVar3 = 0;
  puVar8 = &local_30;
  iVar2 = 4;
  iVar7 = 0;
  uVar4 = 0;
  puVar6 = (uint *)&DAT_600a08ec;
_L51:
  while( true ) {
    uVar1 = iVar2 + uVar4;
    *puVar6 = ~(0xffff << iVar7) & *puVar6 | (((uVar1 - 1) * 0x100 | uVar4) & 0xffff) << iVar7;
    uVar4 = (uVar4 + 0x200) * 0x800;
    iVar7 = 0;
    do {
      _DAT_600a08cc = puVar8[iVar7];
      uVar5 = uVar4 & 0x1ff800;
      iVar7 = iVar7 + 1;
      uVar4 = uVar4 + 0x800;
      _DAT_600a08c8 = _DAT_600a08c8 & 0xffe007ff | uVar5;
    } while (iVar2 != iVar7);
    uVar3 = uVar3 + 1;
    if (uVar3 == 6) {
      save_pbus_reg();
      return;
    }
    uVar4 = uVar1;
    if (uVar3 != 2) break;
    puVar8 = auStack_54;
    iVar7 = 0;
_L63:
    iVar2 = 3;
    puVar6 = (uint *)&DAT_600a08f0;
  }
  puVar6 = (uint *)&DAT_600a08f4;
  if (uVar3 < 3) {
    if (uVar3 == 1) {
      puVar8 = auStack_60;
      iVar2 = 3;
      iVar7 = 0x10;
      puVar6 = (uint *)&DAT_600a08ec;
      goto _L51;
    }
  }
  else {
    if (uVar3 == 3) {
      puVar8 = auStack_48;
      iVar7 = 0x10;
      goto _L63;
    }
    if (uVar3 == 4) {
      puVar8 = auStack_3c;
      iVar2 = 3;
      iVar7 = 0;
      goto _L51;
    }
  }
  puVar8 = &uStack_68;
  iVar2 = 2;
  iVar7 = 0x10;
  goto _L51;
}

