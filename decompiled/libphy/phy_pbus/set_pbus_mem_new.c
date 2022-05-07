/*
 * Last changed at upstream commit 478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * https://github.com/espressif/esp-phy-lib/commit/478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * Upstream date: 2022-05-07 21:35:33 +0800
 * Upstream subject: add phy for esp32c2
 * Source: libphy -> phy_pbus.o -> set_pbus_mem_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_pbus_mem_new(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uStack_d8;
  uint auStack_d4 [3];
  uint auStack_c8 [4];
  uint auStack_b8 [4];
  uint auStack_a8 [4];
  uint auStack_98 [4];
  uint local_88 [12];
  uint local_58 [7];
  uint local_3c [7];
  
  local_88[0] = 0x481ff;
  local_88[1] = (uint)DAT_00011094 << 9 | 0x801ff;
  local_88[2] = 0x1713ff;
  local_88[3] = 0x4801ff;
  local_88[4] = 0xf50000;
  local_88[5] = 0xf60000;
  memcpy(auStack_c8,&_LANCHOR0,0x10);
  memcpy(local_58,&DAT_000102bc,0x1c);
  memcpy(auStack_b8,&DAT_000102d8,0x10);
  iVar5 = 0;
  do {
    *(undefined4 *)((int)local_88 + iVar5 + 0x18) = *(undefined4 *)((int)local_88 + iVar5);
    iVar5 = iVar5 + 4;
  } while (iVar5 != 0x18);
  iVar5 = 0;
  do {
    *(undefined4 *)((int)local_3c + iVar5) = *(undefined4 *)((int)local_58 + iVar5);
    iVar5 = iVar5 + 4;
  } while (iVar5 != 0x1c);
  local_88[9] = 0x4807ff;
  local_3c[1] = 0x14fdff;
  local_88[8] = 0x1717ff;
  local_3c[2] = (uint)DAT_000110a6 << 0xc | 0x4801ff;
  puVar3 = local_88;
  iVar5 = 6;
  iVar6 = 0;
  uVar1 = 0;
  puVar4 = (uint *)&DAT_600440e0;
  iVar7 = 0;
_L4:
  uVar9 = iVar5 + uVar1;
  *puVar4 = ~(0xffff << iVar6) & *puVar4 | (((uVar9 - 1) * 0x100 | uVar1) & 0xffff) << iVar6;
  uVar1 = (uVar1 + 0x200) * 0x200;
  iVar6 = 0;
  do {
    puVar4 = puVar3 + iVar6;
    uVar2 = uVar1 & 0x7fe00;
    iVar6 = iVar6 + 1;
    _DAT_600440cc = *puVar4;
    uVar1 = uVar1 + 0x200;
    _DAT_600440c8 = _DAT_600440c8 & 0xfff801ff | uVar2;
  } while (iVar5 != iVar6);
  iVar8 = iVar7 + 1;
  if (iVar8 == 0xc) {
    return;
  }
  uVar1 = uVar9;
  puVar4 = (uint *)0x600440f4;
  switch(iVar7) {
  case 0:
    puVar3 = auStack_c8;
    iVar5 = 4;
    iVar6 = 0x10;
    puVar4 = (uint *)&DAT_600440e0;
    iVar7 = iVar8;
    goto _L4;
  case 1:
    puVar3 = local_58;
    iVar5 = 7;
    iVar6 = 0;
    break;
  case 2:
    puVar3 = auStack_b8;
    iVar5 = 4;
    iVar6 = 0x10;
    break;
  case 3:
    puVar3 = auStack_d4;
    iVar5 = 3;
    iVar6 = 0;
    goto _L27;
  case 4:
    puVar3 = &uStack_d8;
    iVar5 = 1;
    iVar6 = 0x10;
_L27:
    puVar4 = (uint *)0x600440e8;
    iVar7 = iVar8;
    goto _L4;
  case 5:
    puVar3 = local_88 + 6;
    iVar5 = 6;
    iVar6 = 0;
    puVar4 = (uint *)0x600440ec;
    iVar7 = iVar8;
    goto _L4;
  case 6:
    puVar3 = auStack_a8;
    iVar5 = 4;
    iVar6 = 0x10;
    puVar4 = (uint *)0x600440ec;
    iVar7 = iVar8;
    goto _L4;
  case 7:
    puVar3 = local_3c;
    iVar5 = 7;
    iVar6 = 0;
    puVar4 = (uint *)&DAT_600440f0;
    iVar7 = iVar8;
    goto _L4;
  case 8:
    puVar3 = auStack_98;
    iVar5 = 4;
    iVar6 = 0x10;
    puVar4 = (uint *)&DAT_600440f0;
    iVar7 = iVar8;
    goto _L4;
  case 9:
    puVar3 = auStack_d4;
    iVar5 = 3;
    iVar6 = 0;
    iVar7 = iVar8;
    goto _L4;
  default:
    goto _L5;
  }
  puVar4 = (uint *)0x600440e4;
  iVar7 = iVar8;
  goto _L4;
_L5:
  puVar3 = &uStack_d8;
  iVar5 = 1;
  iVar6 = 0x10;
  iVar7 = iVar8;
  goto _L4;
}

