/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
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
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 auStack_c8 [2];
  undefined4 auStack_c0 [2];
  undefined4 auStack_b8 [2];
  undefined4 auStack_b0 [2];
  undefined4 auStack_a8 [3];
  undefined4 auStack_9c [3];
  undefined4 local_90 [4];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70 [8];
  undefined4 local_50 [11];
  
  memcpy(local_90,&DAT_0001426c,0x10);
  uStack_d8 = 0x401ff;
  uStack_d4 = 0x1401ff;
  memcpy(local_70,&DAT_0001427c,0x20);
  uStack_d0 = 0x401ff;
  uStack_cc = 0x1401ff;
  memcpy(auStack_a8,&DAT_0001429c,0xc);
  uStack_80 = 0x709ff;
  uStack_78 = 0xf50000;
  uStack_74 = 0xf60000;
  iVar4 = 0;
  do {
    *(undefined4 *)((int)local_50 + iVar4) = *(undefined4 *)((int)local_70 + iVar4);
    iVar4 = iVar4 + 4;
  } while (iVar4 != 0x20);
  uStack_7c = 0x1717ff;
  local_50[3] = 0x4801ff;
  puVar2 = local_90;
  iVar4 = 4;
  iVar5 = 0;
  puVar3 = (uint *)&DAT_600060e0;
  uVar7 = 0;
  iVar8 = 0;
_L136:
  uVar1 = iVar4 + uVar7;
  *puVar3 = ~(0xffff << iVar5) & *puVar3 | (((uVar1 - 1) * 0x100 | uVar7) & 0xffff) << iVar5;
  iVar5 = 0;
  uVar7 = (uVar7 + 0x200) * 0x100;
  do {
    puVar6 = puVar2 + iVar5;
    iVar5 = iVar5 + 1;
    _DAT_600060cc = *puVar6;
    _DAT_600060c8 = _DAT_600060c8 & 0xfffc00ff | uVar7 & 0xff00;
    uVar7 = uVar7 + 0x100;
  } while (iVar4 != iVar5);
  iVar9 = iVar8 + 1;
  if (iVar9 == 0xc) {
    return;
  }
  puVar3 = (uint *)0x600060f4;
  uVar7 = uVar1;
  switch(iVar8) {
  case 0:
    puVar2 = &uStack_d8;
    iVar4 = 2;
    iVar5 = 0x10;
    puVar3 = (uint *)&DAT_600060e0;
    iVar8 = iVar9;
    goto _L136;
  case 1:
    puVar2 = local_70;
    iVar4 = 8;
    iVar5 = 0;
    break;
  case 2:
    puVar2 = &uStack_d0;
    iVar4 = 2;
    iVar5 = 0x10;
    break;
  case 3:
    puVar2 = auStack_a8;
    iVar4 = 3;
    iVar5 = 0;
    goto _L158;
  case 4:
    puVar2 = auStack_c8;
    iVar4 = 2;
    iVar5 = 0x10;
_L158:
    puVar3 = (uint *)0x600060e8;
    iVar8 = iVar9;
    goto _L136;
  case 5:
    puVar2 = &uStack_80;
    iVar4 = 4;
    iVar5 = 0;
    puVar3 = (uint *)&DAT_600060ec;
    iVar8 = iVar9;
    goto _L136;
  case 6:
    puVar2 = auStack_c0;
    iVar4 = 2;
    iVar5 = 0x10;
    puVar3 = (uint *)&DAT_600060ec;
    iVar8 = iVar9;
    goto _L136;
  case 7:
    puVar2 = local_50;
    iVar4 = 8;
    iVar5 = 0;
    puVar3 = (uint *)0x600060f0;
    iVar8 = iVar9;
    goto _L136;
  case 8:
    puVar2 = auStack_b8;
    iVar4 = 2;
    iVar5 = 0x10;
    puVar3 = (uint *)0x600060f0;
    iVar8 = iVar9;
    goto _L136;
  case 9:
    puVar2 = auStack_9c;
    iVar4 = 3;
    iVar5 = 0;
    iVar8 = iVar9;
    goto _L136;
  default:
    goto _L137;
  }
  puVar3 = (uint *)0x600060e4;
  iVar8 = iVar9;
  goto _L136;
_L137:
  puVar2 = auStack_b0;
  iVar4 = 2;
  iVar5 = 0x10;
  iVar8 = iVar9;
  goto _L136;
}

