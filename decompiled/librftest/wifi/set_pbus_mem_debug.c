/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
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
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  ushort in_stack_00000000;
  ushort in_stack_00000004;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint auStack_c0 [3];
  undefined4 uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_a0;
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
  uStack_d0 = param_3 << 9 | 0x401ff;
  local_a0 = param_1 << 9 | 0x401ff;
  uStack_9c = param_2 << 9 | 0x1401ff;
  uStack_c8 = param_7 << 9 | 0x401ff;
  uStack_cc = param_4 << 9 | 0x1401ff;
  uStack_c4 = param_8 << 9 | 0x1401ff;
  auStack_c0[0] = (uint)in_stack_00000000 << 9 | 0x4401ff;
  uStack_98 = 0xf50000;
  uStack_94 = 0xf60000;
  auStack_90[10] = 0;
  auStack_90[0xb] = 0;
  auStack_c0[1] = 0xf30000;
  auStack_c0[2] = (uint)in_stack_00000004 << 9 | 0x4401ff;
  uStack_b4 = 0x5401ff;
  auStack_90[0] = local_a0;
  auStack_90[2] = 0xf50000;
  auStack_90[3] = 0xf60000;
  iVar6 = 0;
  do {
    iVar7 = iVar6 + 0x30;
    iVar1 = iVar6 + 0x10;
    iVar6 = iVar6 + 4;
    *(undefined4 *)((int)auStack_90 + iVar7) = *(undefined4 *)((int)auStack_90 + iVar1);
  } while (iVar6 != 0x20);
  auStack_90[1] = 0x1717ff;
  auStack_90[0xd] = 0x14fdff;
  puVar8 = &local_a0;
  iVar7 = 4;
  iVar6 = 0;
  iVar1 = 0;
  uVar3 = 0;
  puVar5 = (uint *)&DAT_600060e0;
_L281:
  uVar4 = uVar3 + iVar7;
  *puVar5 = (((uVar4 - 1) * 0x100 | uVar3) & 0xffff) << iVar6 | ~(0xffff << iVar6) & *puVar5;
  iVar6 = 0;
  uVar3 = (uVar3 + 0x200) * 0x100;
  do {
    _DAT_600060cc = puVar8[iVar6];
    iVar6 = iVar6 + 1;
    _DAT_600060c8 = _DAT_600060c8 & 0xfffc00ff | uVar3 & 0xff00;
    uVar3 = uVar3 + 0x100;
  } while (iVar7 != iVar6);
  iVar2 = iVar1 + 1;
  if (iVar2 == 0xc) {
    uStack_b0 = uStack_d0;
    uStack_ac = uStack_cc;
    uStack_a8 = uStack_c8;
    uStack_a4 = uStack_c4;
    phy_printf("set_pbus_mem_debug: rx=0x%x 0x%x 0x%x 0x%x tx=0x%x 0x%x 0x%x 0x%x pa=0x%x, 0x%x\n",
               param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  uVar3 = uVar4;
  puVar5 = (uint *)0x600060f0;
  switch(iVar1) {
  case 0:
    puVar8 = &uStack_d0;
    iVar7 = 2;
    iVar6 = 0x10;
    iVar1 = iVar2;
    puVar5 = (uint *)&DAT_600060e0;
    goto _L281;
  case 1:
    puVar8 = auStack_90 + 4;
    iVar7 = 8;
    iVar6 = 0;
    break;
  case 2:
    puVar8 = &uStack_c8;
    iVar7 = 2;
    iVar6 = 0x10;
    break;
  case 3:
    puVar8 = auStack_c0;
    iVar6 = 0;
    goto _L303;
  case 4:
    puVar8 = auStack_c0 + 2;
    iVar6 = 0x10;
_L303:
    iVar7 = 2;
    iVar1 = iVar2;
    puVar5 = (uint *)&DAT_600060e8;
    goto _L281;
  case 5:
    puVar8 = auStack_90;
    iVar7 = 4;
    iVar6 = 0;
    iVar1 = iVar2;
    puVar5 = (uint *)0x600060ec;
    goto _L281;
  case 6:
    puVar8 = &uStack_b0;
    iVar7 = 2;
    iVar6 = 0x10;
    iVar1 = iVar2;
    puVar5 = (uint *)0x600060ec;
    goto _L281;
  case 7:
    puVar8 = auStack_90 + 0xc;
    iVar7 = 8;
    iVar6 = 0;
    iVar1 = iVar2;
    goto _L281;
  case 8:
    puVar8 = &uStack_a8;
    iVar7 = 2;
    iVar6 = 0x10;
    iVar1 = iVar2;
    goto _L281;
  case 9:
    puVar8 = auStack_c0;
    iVar6 = 0;
    goto _L300;
  default:
    puVar8 = auStack_c0 + 2;
    iVar6 = 0x10;
_L300:
    iVar7 = 2;
    iVar1 = iVar2;
    puVar5 = (uint *)0x600060f4;
    goto _L281;
  }
  iVar1 = iVar2;
  puVar5 = (uint *)&DAT_600060e4;
  goto _L281;
}

