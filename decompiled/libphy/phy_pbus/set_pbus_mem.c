/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
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
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint local_120 [5];
  uint auStack_10c [4];
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint local_b0 [16];
  uint local_70 [8];
  uint local_50 [11];
  
  local_b0[0] = (uint)DAT_0001100a << 9 | 0x801ff;
  local_b0[1] = 0x4841ff;
  local_b0[3] = 0x4841ff;
  local_b0[4] = 0x4841ff;
  local_b0[5] = 0x487ff;
  local_b0[6] = 0xf50000;
  local_b0[2] = 0x1713ff;
  local_b0[7] = 0xf60000;
  memcpy(auStack_10c + 3,&DAT_00010478,0x14);
  memcpy(local_b0 + 8,&DAT_0001048c,0x20);
  memcpy(&uStack_ec,&DAT_000104ac,0x14);
  memcpy(local_120 + 2,&DAT_000104c0,0xc);
  local_120[0] = 0x5401ff;
  iVar6 = 0;
  do {
    *(undefined4 *)((int)local_70 + iVar6) = *(undefined4 *)((int)local_b0 + iVar6);
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x20);
  uStack_d8 = auStack_10c[3];
  uStack_d4 = uStack_fc;
  uStack_d0 = uStack_f8;
  uStack_cc = uStack_f4;
  uStack_c8 = uStack_f0;
  iVar6 = 0;
  do {
    *(undefined4 *)((int)local_50 + iVar6) = *(undefined4 *)((int)local_b0 + iVar6 + 0x20);
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x20);
  uStack_c4 = uStack_ec;
  uStack_c0 = uStack_e8;
  uStack_bc = uStack_e4;
  uStack_b8 = uStack_e0;
  uStack_b4 = uStack_dc;
  auStack_10c[1] = 0x5781ff;
  auStack_10c[2] = 0xf30000;
  local_120[1] = 0x5401ff;
  local_70[2] = 0x1717ff;
  auStack_10c[0] = 0x14fdff;
  puVar4 = local_b0;
  iVar6 = 8;
  local_50[2] = (uint)DAT_0001101c << 0xc | 0x4801ff;
  iVar7 = 0;
  uVar2 = 0;
  puVar5 = (uint *)&DAT_600a08e0;
  iVar8 = 0;
_L32:
  uVar1 = iVar6 + uVar2;
  *puVar5 = ~(0xffff << iVar7) & *puVar5 | (((uVar1 - 1) * 0x100 | uVar2) & 0xffff) << iVar7;
  uVar2 = (uVar2 + 0x200) * 0x800;
  iVar7 = 0;
  do {
    _DAT_600a08cc = puVar4[iVar7];
    uVar3 = uVar2 & 0x1ff800;
    iVar7 = iVar7 + 1;
    uVar2 = uVar2 + 0x800;
    _DAT_600a08c8 = _DAT_600a08c8 & 0xffe007ff | uVar3;
  } while (iVar6 != iVar7);
  iVar9 = iVar8 + 1;
  if (iVar9 == 0xc) {
    save_pbus_reg();
    return;
  }
  uVar2 = uVar1;
  puVar5 = (uint *)&DAT_600a08f4;
  switch(iVar8) {
  case 0:
    puVar4 = auStack_10c + 3;
    iVar6 = 5;
    iVar7 = 0x10;
    puVar5 = (uint *)&DAT_600a08e0;
    iVar8 = iVar9;
    goto _L32;
  case 1:
    puVar4 = local_b0 + 8;
    iVar6 = 8;
    iVar7 = 0;
    break;
  case 2:
    puVar4 = &uStack_ec;
    iVar6 = 5;
    iVar7 = 0x10;
    break;
  case 3:
    puVar4 = local_120 + 2;
    iVar6 = 3;
    iVar7 = 0;
    goto _L55;
  case 4:
    iVar6 = 1;
    iVar7 = 0x10;
    puVar4 = local_120;
_L55:
    puVar5 = (uint *)&DAT_600a08e8;
    iVar8 = iVar9;
    goto _L32;
  case 5:
    puVar4 = local_70;
    iVar6 = 8;
    iVar7 = 0;
    puVar5 = (uint *)&DAT_600a08ec;
    iVar8 = iVar9;
    goto _L32;
  case 6:
    puVar4 = &uStack_d8;
    iVar6 = 5;
    iVar7 = 0x10;
    puVar5 = (uint *)&DAT_600a08ec;
    iVar8 = iVar9;
    goto _L32;
  case 7:
    puVar4 = local_50;
    iVar6 = 8;
    iVar7 = 0;
    puVar5 = (uint *)&DAT_600a08f0;
    iVar8 = iVar9;
    goto _L32;
  case 8:
    puVar4 = &uStack_c4;
    iVar6 = 5;
    iVar7 = 0x10;
    puVar5 = (uint *)&DAT_600a08f0;
    iVar8 = iVar9;
    goto _L32;
  case 9:
    puVar4 = auStack_10c;
    iVar6 = 3;
    iVar7 = 0;
    iVar8 = iVar9;
    goto _L32;
  default:
    goto _L33;
  }
  puVar5 = (uint *)&DAT_600a08e4;
  iVar8 = iVar9;
  goto _L32;
_L33:
  puVar4 = local_120 + 1;
  iVar6 = 1;
  iVar7 = 0x10;
  iVar8 = iVar9;
  goto _L32;
}

