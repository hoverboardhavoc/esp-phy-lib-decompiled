/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> set_pbus_mem
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
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80 [4];
  undefined4 auStack_70 [4];
  undefined4 auStack_60 [6];
  undefined4 auStack_48 [9];
  
  memcpy(local_80,&DAT_00013d10,0x10);
  local_b0 = 0x401ff;
  uStack_ac = 0x1401ff;
  memcpy(auStack_60,&DAT_00013d20,0x18);
  uStack_a0 = 0x44ffff;
  uStack_9c = 0xf30000;
  uStack_98 = 0x4401ff;
  uStack_94 = 0x5401ff;
  uStack_a8 = 0x401ff;
  uStack_a4 = 0x1401ff;
  memcpy(auStack_70,&DAT_00013d38,0x10);
  uStack_90 = 0x401ff;
  uStack_8c = 0x1401ff;
  memcpy(auStack_48,&DAT_00013d48,0x18);
  uStack_88 = 0x401ff;
  uStack_84 = 0x1401ff;
  iVar2 = 4;
  iVar5 = 0;
  puVar3 = local_80;
  puVar4 = (uint *)&DAT_600060e0;
  uVar7 = 0;
  iVar8 = 0;
_L107:
  uVar1 = iVar2 + uVar7;
  *puVar4 = ~(0xffff << iVar5) & *puVar4 | (((uVar1 - 1) * 0x100 | uVar7) & 0xffff) << iVar5;
  iVar5 = 0;
  uVar7 = (uVar7 + 0x200) * 0x100;
  do {
    puVar6 = puVar3 + iVar5;
    iVar5 = iVar5 + 1;
    _DAT_600060cc = *puVar6;
    _DAT_600060c8 = _DAT_600060c8 & 0xfffc00ff | uVar7 & 0xff00;
    uVar7 = uVar7 + 0x100;
  } while (iVar2 != iVar5);
  iVar9 = iVar8 + 1;
  if (iVar9 == 0xc) {
    return;
  }
  puVar4 = (uint *)0x600060f0;
  uVar7 = uVar1;
  switch(iVar8) {
  case 0:
    iVar2 = 2;
    iVar5 = 0x10;
    puVar3 = &local_b0;
    puVar4 = (uint *)&DAT_600060e0;
    iVar8 = iVar9;
    goto _L107;
  case 1:
    puVar3 = auStack_60;
    iVar2 = 6;
    iVar5 = 0;
    break;
  case 2:
    puVar3 = &uStack_a8;
    iVar2 = 2;
    iVar5 = 0x10;
    break;
  case 3:
    puVar3 = &uStack_a0;
    iVar5 = 0;
    goto _L128;
  case 4:
    puVar3 = &uStack_98;
    iVar5 = 0x10;
_L128:
    iVar2 = 2;
    puVar4 = (uint *)0x600060e8;
    iVar8 = iVar9;
    goto _L107;
  case 5:
    puVar3 = auStack_70;
    iVar2 = 4;
    iVar5 = 0;
    puVar4 = (uint *)0x600060ec;
    iVar8 = iVar9;
    goto _L107;
  case 6:
    puVar3 = &uStack_90;
    iVar2 = 2;
    iVar5 = 0x10;
    puVar4 = (uint *)0x600060ec;
    iVar8 = iVar9;
    goto _L107;
  case 7:
    puVar3 = auStack_48;
    iVar2 = 6;
    iVar5 = 0;
    iVar8 = iVar9;
    goto _L107;
  case 8:
    puVar3 = &uStack_88;
    iVar2 = 2;
    iVar5 = 0x10;
    iVar8 = iVar9;
    goto _L107;
  case 9:
    puVar3 = &uStack_a0;
    iVar5 = 0;
    goto _L125;
  default:
    puVar3 = &uStack_98;
    iVar5 = 0x10;
_L125:
    iVar2 = 2;
    puVar4 = (uint *)0x600060f4;
    iVar8 = iVar9;
    goto _L107;
  }
  puVar4 = (uint *)&DAT_600060e4;
  iVar8 = iVar9;
  goto _L107;
}

