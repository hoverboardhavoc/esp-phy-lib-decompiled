/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_pbus.o -> write_pbus_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_pbus_mem(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                   int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  iVar1 = 0;
  iVar3 = 0;
  puVar5 = (uint *)&DAT_600a08e0;
  iVar6 = 8;
  uVar7 = 0;
_L36:
  uVar4 = iVar6 + uVar7;
  *puVar5 = (((uVar4 - 1) * 0x100 | uVar7) & 0xffff) << iVar1 | ~(0xffff << iVar1) & *puVar5;
  uVar7 = (uVar7 + 0x200) * 0x800;
  iVar1 = 0;
  do {
    iVar2 = iVar1 * 4;
    iVar1 = iVar1 + 1;
    _DAT_600a08cc = *(undefined4 *)(iVar2 + param_1);
    _DAT_600a08c8 = _DAT_600a08c8 & 0xffe007ff | uVar7 & 0x1ff800;
    uVar7 = uVar7 + 0x800;
  } while (iVar6 != iVar1);
  iVar2 = iVar3 + 1;
  if (iVar2 == 0xc) {
    return;
  }
  puVar5 = (uint *)&DAT_600a08f4;
  uVar7 = uVar4;
  switch(iVar3) {
  case 0:
    iVar1 = 0x10;
    iVar3 = iVar2;
    param_1 = param_2;
    puVar5 = (uint *)&DAT_600a08e0;
    iVar6 = 5;
    goto _L36;
  case 1:
    iVar6 = 8;
    iVar1 = 0;
    param_1 = param_3;
    break;
  case 2:
    iVar6 = 5;
    iVar1 = 0x10;
    param_1 = param_4;
    break;
  case 3:
    iVar6 = 3;
    iVar1 = 0;
    param_1 = param_5;
    goto _L57;
  case 4:
    iVar6 = 1;
    iVar1 = 0x10;
    param_1 = param_6;
_L57:
    iVar3 = iVar2;
    puVar5 = (uint *)&DAT_600a08e8;
    goto _L36;
  case 5:
    iVar6 = 8;
    iVar1 = 0;
    iVar3 = iVar2;
    param_1 = param_7;
    puVar5 = (uint *)&DAT_600a08ec;
    goto _L36;
  case 6:
    iVar6 = 5;
    iVar1 = 0x10;
    iVar3 = iVar2;
    param_1 = param_8;
    puVar5 = (uint *)&DAT_600a08ec;
    goto _L36;
  case 7:
    iVar1 = 0;
    iVar3 = iVar2;
    param_1 = in_stack_00000000;
    puVar5 = (uint *)&DAT_600a08f0;
    iVar6 = iVar2;
    goto _L36;
  case 8:
    iVar1 = 0x10;
    iVar3 = iVar2;
    param_1 = in_stack_00000004;
    puVar5 = (uint *)&DAT_600a08f0;
    iVar6 = 5;
    goto _L36;
  case 9:
    iVar1 = 0;
    iVar3 = iVar2;
    param_1 = in_stack_00000008;
    iVar6 = 3;
    goto _L36;
  default:
    goto _L37;
  }
  iVar3 = iVar2;
  puVar5 = (uint *)&DAT_600a08e4;
  goto _L36;
_L37:
  iVar1 = 0x10;
  iVar3 = iVar2;
  param_1 = in_stack_0000000c;
  iVar6 = 1;
  goto _L36;
}

