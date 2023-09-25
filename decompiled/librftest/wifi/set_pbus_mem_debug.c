/*
 * Last changed at upstream commit a7a0481e34fd4368aa15a143dfbd855015380fd4
 * https://github.com/espressif/esp-phy-lib/commit/a7a0481e34fd4368aa15a143dfbd855015380fd4
 * Upstream date: 2023-09-25 15:20:47 +0800
 * Upstream subject: phy_param_track_tot and phy_wifi_enable_set for all chips
 * Source: librftest -> wifi.o -> set_pbus_mem_debug
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_pbus_mem_debug(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  ushort in_stack_00000000;
  ushort in_stack_00000004;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint auStack_c4 [3];
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint auStack_ac [4];
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint auStack_90 [23];
  
  auStack_90[4] = param_5 << 9 | 0x401ff;
  auStack_90[5] = param_6 << 9 | 0x1401ff;
  auStack_90[6] = 0xf00000;
  auStack_90[7] = 0xf10000;
  auStack_90[8] = 0xf20000;
  auStack_90[9] = 0xf40000;
  uStack_d4 = param_3 << 9 | 0x401ff;
  auStack_ac[3] = param_1 << 9 | 0x401ff;
  uStack_9c = param_2 << 9 | 0x1401ff;
  uStack_cc = param_7 << 9 | 0x401ff;
  uStack_d0 = param_4 << 9 | 0x1401ff;
  uStack_c8 = param_8 << 9 | 0x1401ff;
  auStack_ac[0] = (uint)in_stack_00000000 << 9 | 0x4401ff;
  uStack_98 = 0xf50000;
  uStack_94 = 0xf60000;
  auStack_90[10] = 0;
  auStack_90[0xb] = 0;
  auStack_ac[2] = 0;
  auStack_ac[1] = 0xf30000;
  auStack_c4[0] = (uint)in_stack_00000004 << 9 | 0x4401ff;
  auStack_c4[1] = 0x5401ff;
  auStack_90[0] = auStack_ac[3];
  auStack_90[2] = 0xf50000;
  auStack_90[3] = 0xf60000;
  iVar7 = 0;
  do {
    iVar3 = iVar7 + 0x30;
    iVar1 = iVar7 + 0x10;
    iVar7 = iVar7 + 4;
    *(undefined4 *)((int)auStack_90 + iVar3) = *(undefined4 *)((int)auStack_90 + iVar1);
  } while (iVar7 != 0x20);
  auStack_90[1] = 0x1717ff;
  auStack_90[0xd] = 0x14fdff;
  puVar8 = auStack_ac + 3;
  iVar7 = 4;
  iVar3 = 0;
  iVar1 = 0;
  uVar4 = 0;
  puVar6 = (uint *)&DAT_600060e0;
_L294:
  uVar5 = uVar4 + iVar7;
  *puVar6 = (((uVar5 - 1) * 0x100 | uVar4) & 0xffff) << iVar3 | ~(0xffff << iVar3) & *puVar6;
  iVar3 = 0;
  uVar4 = (uVar4 + 0x200) * 0x100;
  do {
    _DAT_600060cc = puVar8[iVar3];
    iVar3 = iVar3 + 1;
    _DAT_600060c8 = _DAT_600060c8 & 0xfffc00ff | uVar4 & 0xff00;
    uVar4 = uVar4 + 0x100;
  } while (iVar7 != iVar3);
  iVar2 = iVar1 + 1;
  if (iVar2 == 0xc) {
    auStack_c4[2] = uStack_d4;
    uStack_b8 = uStack_d0;
    uStack_b4 = uStack_cc;
    uStack_b0 = uStack_c8;
    phy_printf("set_pbus_mem_debug: rx=0x%x 0x%x 0x%x 0x%x tx=0x%x 0x%x 0x%x 0x%x pa=0x%x, 0x%x\n",
               param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  uVar4 = uVar5;
  puVar6 = (uint *)0x600060f4;
  switch(iVar1) {
  case 0:
    puVar8 = &uStack_d4;
    iVar7 = 2;
    iVar3 = 0x10;
    iVar1 = iVar2;
    puVar6 = (uint *)&DAT_600060e0;
    goto _L294;
  case 1:
    puVar8 = auStack_90 + 4;
    iVar7 = 8;
    iVar3 = 0;
    break;
  case 2:
    puVar8 = &uStack_cc;
    iVar7 = 2;
    iVar3 = 0x10;
    break;
  case 3:
    puVar8 = auStack_ac;
    iVar7 = 3;
    iVar3 = 0;
    goto _L316;
  case 4:
    puVar8 = auStack_c4;
    iVar7 = 2;
    iVar3 = 0x10;
_L316:
    iVar1 = iVar2;
    puVar6 = (uint *)&DAT_600060e8;
    goto _L294;
  case 5:
    puVar8 = auStack_90;
    iVar7 = 4;
    iVar3 = 0;
    iVar1 = iVar2;
    puVar6 = (uint *)0x600060ec;
    goto _L294;
  case 6:
    puVar8 = auStack_c4 + 2;
    iVar7 = 2;
    iVar3 = 0x10;
    iVar1 = iVar2;
    puVar6 = (uint *)0x600060ec;
    goto _L294;
  case 7:
    puVar8 = auStack_90 + 0xc;
    iVar7 = 8;
    iVar3 = 0;
    iVar1 = iVar2;
    puVar6 = (uint *)0x600060f0;
    goto _L294;
  case 8:
    puVar8 = &uStack_b4;
    iVar7 = 2;
    iVar3 = 0x10;
    iVar1 = iVar2;
    puVar6 = (uint *)0x600060f0;
    goto _L294;
  case 9:
    puVar8 = auStack_ac;
    iVar7 = 3;
    iVar3 = 0;
    iVar1 = iVar2;
    goto _L294;
  default:
    goto _L295;
  }
  iVar1 = iVar2;
  puVar6 = (uint *)&DAT_600060e4;
  goto _L294;
_L295:
  puVar8 = auStack_c4;
  iVar7 = 2;
  iVar3 = 0x10;
  iVar1 = iVar2;
  goto _L294;
}

