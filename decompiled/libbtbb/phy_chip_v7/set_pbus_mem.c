/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> set_pbus_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_pbus_mem(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88 [4];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 auStack_68 [5];
  undefined4 auStack_54 [8];
  
  memcpy(local_88,&_LANCHOR0,0x10);
  uStack_b8 = 0x401ff;
  uStack_b4 = 0x1401ff;
  memcpy(auStack_68,&DAT_00015958,0x14);
  uStack_a8 = 0x44ffff;
  uStack_a4 = 0xf30000;
  uStack_a0 = 0x4401ff;
  uStack_9c = 0x5401ff;
  uStack_78 = 0x709ff;
  uStack_74 = 0x1717ff;
  uStack_70 = 0xf50000;
  uStack_b0 = 0x401ff;
  uStack_ac = 0x1401ff;
  uStack_98 = 0x401ff;
  uStack_94 = 0x1401ff;
  uStack_6c = 0xf60000;
  memcpy(auStack_54,&DAT_0001596c,0x14);
  uStack_90 = 0x401ff;
  uStack_8c = 0x1401ff;
  puVar7 = local_88;
  iVar8 = 4;
  iVar9 = 0;
  uVar1 = 0x60006030;
  uVar2 = 0;
  iVar5 = 0;
_L52:
  uVar4 = iVar8 + uVar2;
  uVar3 = fpga_mem_rd(uVar1);
  fpga_mem_wr(uVar1,(((iVar8 + uVar2 + -1) * 0x100 | uVar2) & 0xffff) << iVar9 |
                    uVar3 & ~(0xffff << iVar9));
  uVar2 = (uVar2 + 0x200) * 0x100;
  iVar9 = 0;
  do {
    fpga_mem_wr(0x60005038,puVar7[iVar9]);
    uVar3 = fpga_mem_rd(0x60005034);
    fpga_mem_wr(0x60005034,uVar3 & 0xfffc00ff | uVar2 & 0x3ff00);
    uVar3 = fpga_mem_rd(0x60005034);
    fpga_mem_wr(0x60005034,uVar3 & 0xfffcffff);
    uVar2 = uVar2 + 0x100;
    iVar9 = iVar9 + 1;
  } while (iVar8 != iVar9);
  iVar6 = iVar5 + 1;
  if (iVar6 == 0xc) {
    return;
  }
  uVar2 = uVar4;
  switch(iVar5) {
  case 0:
    puVar7 = &uStack_b8;
    iVar8 = 2;
    iVar9 = 0x10;
    uVar1 = 0x60006030;
    iVar5 = iVar6;
    goto _L52;
  case 1:
    puVar7 = auStack_68;
    iVar8 = 5;
    iVar9 = 0;
    break;
  case 2:
    puVar7 = &uStack_b0;
    iVar8 = 2;
    iVar9 = 0x10;
    break;
  case 3:
    puVar7 = &uStack_a8;
    iVar9 = 0;
    goto _L73;
  case 4:
    puVar7 = &uStack_a0;
    iVar9 = 0x10;
_L73:
    iVar8 = 2;
    uVar1 = 0x60006038;
    iVar5 = iVar6;
    goto _L52;
  case 5:
    puVar7 = &uStack_78;
    iVar8 = 4;
    iVar9 = 0;
    goto _L74;
  case 6:
    puVar7 = &uStack_98;
    iVar8 = 2;
    iVar9 = 0x10;
_L74:
    uVar1 = 0x6000603c;
    iVar5 = iVar6;
    goto _L52;
  case 7:
    puVar7 = auStack_54;
    iVar8 = 5;
    iVar9 = 0;
    goto _L72;
  case 8:
    puVar7 = &uStack_90;
    iVar8 = 2;
    iVar9 = 0x10;
_L72:
    uVar1 = 0x60006040;
    iVar5 = iVar6;
    goto _L52;
  case 9:
    puVar7 = &uStack_a8;
    iVar9 = 0;
    goto _L70;
  default:
    puVar7 = &uStack_a0;
    iVar9 = 0x10;
_L70:
    iVar8 = 2;
    uVar1 = 0x60006044;
    iVar5 = iVar6;
    goto _L52;
  }
  uVar1 = 0x60006034;
  iVar5 = iVar6;
  goto _L52;
}

