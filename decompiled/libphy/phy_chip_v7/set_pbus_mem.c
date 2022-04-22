/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
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
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60 [6];
  undefined4 local_48 [9];
  
  memcpy(local_80,&DAT_000142d8,0x10);
  local_b0 = 0x401ff;
  uStack_ac = 0x1401ff;
  memcpy(local_60,&DAT_000142e8,0x18);
  uStack_a0 = 0x44ffff;
  uStack_9c = 0xf30000;
  uStack_98 = 0x4401ff;
  uStack_94 = 0x5401ff;
  uStack_70 = 0x709ff;
  uStack_68 = 0xf50000;
  uStack_64 = 0xf60000;
  uStack_a8 = 0x401ff;
  uStack_a4 = 0x1401ff;
  uStack_90 = 0x401ff;
  uStack_8c = 0x1401ff;
  iVar5 = 0;
  do {
    *(undefined4 *)((int)local_48 + iVar5) = *(undefined4 *)((int)local_60 + iVar5);
    iVar5 = iVar5 + 4;
  } while (iVar5 != 0x18);
  uStack_88 = 0x401ff;
  uStack_84 = 0x1401ff;
  uStack_6c = 0x1717ff;
  local_48[1] = 0x14fdff;
  iVar2 = 4;
  iVar5 = 0;
  puVar3 = local_80;
  puVar4 = (uint *)&DAT_600060e0;
  uVar7 = 0;
  iVar8 = 0;
_L136:
  uVar1 = uVar7 + iVar2;
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
  puVar4 = (uint *)&DAT_600060f0;
  uVar7 = uVar1;
  switch(iVar8) {
  case 0:
    iVar2 = 2;
    iVar5 = 0x10;
    puVar3 = &local_b0;
    puVar4 = (uint *)&DAT_600060e0;
    iVar8 = iVar9;
    goto _L136;
  case 1:
    puVar3 = local_60;
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
    goto _L158;
  case 4:
    puVar3 = &uStack_98;
    iVar5 = 0x10;
_L158:
    iVar2 = 2;
    puVar4 = (uint *)0x600060e8;
    iVar8 = iVar9;
    goto _L136;
  case 5:
    puVar3 = &uStack_70;
    iVar2 = 4;
    iVar5 = 0;
    puVar4 = (uint *)0x600060ec;
    iVar8 = iVar9;
    goto _L136;
  case 6:
    puVar3 = &uStack_90;
    iVar2 = 2;
    iVar5 = 0x10;
    puVar4 = (uint *)0x600060ec;
    iVar8 = iVar9;
    goto _L136;
  case 7:
    puVar3 = local_48;
    iVar2 = 6;
    iVar5 = 0;
    iVar8 = iVar9;
    goto _L136;
  case 8:
    puVar3 = &uStack_88;
    iVar2 = 2;
    iVar5 = 0x10;
    iVar8 = iVar9;
    goto _L136;
  case 9:
    puVar3 = &uStack_a0;
    iVar5 = 0;
    goto _L155;
  default:
    puVar3 = &uStack_98;
    iVar5 = 0x10;
_L155:
    iVar2 = 2;
    puVar4 = (uint *)0x600060f4;
    iVar8 = iVar9;
    goto _L136;
  }
  puVar4 = (uint *)0x600060e4;
  iVar8 = iVar9;
  goto _L136;
}

