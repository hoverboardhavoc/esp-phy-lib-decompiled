/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> freq_i2c_write_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void freq_i2c_write_set(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7,uint param_8)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  int in_stack_00000000;
  
  uVar2 = fpga_mem_rd(0x6000e0c4);
  fpga_mem_wr(0x6000e0c4,(param_8 & 0x1f) << 10 | uVar2 & 0xffff83ff);
  iVar6 = 0;
  for (uVar2 = 0; (uVar2 & 0xff) < param_8; uVar2 = uVar2 + 1) {
    if (*(char *)(in_stack_00000000 + uVar2) == '\x01') {
      iVar6 = iVar6 + (1 << (uVar2 & 0x1f));
    }
  }
  fpga_mem_wr(0x6000e164,iVar6);
  for (uVar2 = 0; uVar2 != param_8; uVar2 = uVar2 + 1) {
    uVar5 = (uVar2 & 0xff) >> 3;
    uVar4 = uVar2 << 2;
    pbVar8 = (byte *)(param_1 + uVar2);
    if (uVar5 == 0) {
      uVar5 = fpga_mem_rd(0x6000e100);
      uVar5 = (*pbVar8 & 0xf) << (uVar4 & 0x1f) | ~(0xf << (uVar4 & 0x1f)) & uVar5;
      uVar3 = 0x6000e100;
    }
    else {
      uVar4 = uVar4 & 0x1c;
      if (uVar5 == 1) {
        uVar5 = fpga_mem_rd(0x6000e104);
        uVar5 = (*pbVar8 & 0xf) << uVar4 | ~(0xf << uVar4) & uVar5;
        uVar3 = 0x6000e104;
      }
      else {
        uVar5 = fpga_mem_rd(0x6000e108);
        uVar5 = (*pbVar8 & 0xf) << uVar4 | ~(0xf << uVar4) & uVar5;
        uVar3 = 0x6000e108;
      }
    }
    fpga_mem_wr(uVar3,uVar5);
  }
  for (uVar2 = 0; param_8 != uVar2; uVar2 = uVar2 + 1) {
    uVar5 = uVar2 << 4;
    puVar9 = (undefined1 *)(param_3 + uVar2);
    puVar7 = (undefined1 *)(param_2 + uVar2);
    switch((uVar2 & 0xff) >> 1) {
    case 0:
      uVar4 = fpga_mem_rd(0x6000e0d8);
      uVar5 = ~(0xffff << (uVar5 & 0x1f)) & uVar4 |
              (uint)CONCAT11(*puVar9,*puVar7) << (uVar5 & 0x1f);
      uVar3 = 0x6000e0d8;
      break;
    case 1:
      uVar4 = fpga_mem_rd(0x6000e0dc);
      uVar5 = (uint)CONCAT11(*puVar9,*puVar7) << (uVar5 & 0x10) |
              ~(0xffff << (uVar5 & 0x10)) & uVar4;
      uVar3 = 0x6000e0dc;
      break;
    case 2:
      uVar4 = fpga_mem_rd(0x6000e0e0);
      uVar5 = (uint)CONCAT11(*puVar9,*puVar7) << (uVar5 & 0x10) |
              ~(0xffff << (uVar5 & 0x10)) & uVar4;
      uVar3 = 0x6000e0e0;
      break;
    case 3:
      uVar4 = fpga_mem_rd(0x6000e0e4);
      uVar5 = (uint)CONCAT11(*puVar9,*puVar7) << (uVar5 & 0x10) |
              ~(0xffff << (uVar5 & 0x10)) & uVar4;
      uVar3 = 0x6000e0e4;
      break;
    case 4:
      uVar4 = fpga_mem_rd(0x6000e0e8);
      uVar5 = (uint)CONCAT11(*puVar9,*puVar7) << (uVar5 & 0x10) |
              ~(0xffff << (uVar5 & 0x10)) & uVar4;
      uVar3 = 0x6000e0e8;
      break;
    case 5:
      uVar4 = fpga_mem_rd(0x6000e0ec);
      uVar5 = (uint)CONCAT11(*puVar9,*puVar7) << (uVar5 & 0x10) |
              ~(0xffff << (uVar5 & 0x10)) & uVar4;
      uVar3 = 0x6000e0ec;
      break;
    case 6:
      uVar4 = fpga_mem_rd(0x6000e0f0);
      uVar5 = (uint)CONCAT11(*puVar9,*puVar7) << (uVar5 & 0x10) |
              ~(0xffff << (uVar5 & 0x10)) & uVar4;
      uVar3 = 0x6000e0f0;
      break;
    case 7:
      uVar4 = fpga_mem_rd(0x6000e0f4);
      uVar5 = (uint)CONCAT11(*puVar9,*puVar7) << (uVar5 & 0x10) |
              ~(0xffff << (uVar5 & 0x10)) & uVar4;
      uVar3 = 0x6000e0f4;
      break;
    case 8:
      uVar4 = fpga_mem_rd(0x6000e10c);
      uVar5 = (uint)CONCAT11(*puVar9,*puVar7) << (uVar5 & 0x10) |
              ~(0xffff << (uVar5 & 0x10)) & uVar4;
      uVar3 = 0x6000e10c;
      break;
    default:
      uVar4 = fpga_mem_rd(0x6000e110);
      uVar5 = (uint)CONCAT11(*puVar9,*puVar7) << (uVar5 & 0x10) |
              ~(0xffff << (uVar5 & 0x10)) & uVar4;
      uVar3 = 0x6000e110;
    }
    fpga_mem_wr(uVar3,uVar5);
  }
  for (uVar2 = 0; param_8 != uVar2; uVar2 = uVar2 + 1) {
    uVar4 = fpga_mem_rd(0x6000e128);
    pbVar10 = (byte *)(param_6 + uVar2);
    uVar5 = ~(1 << (uVar2 & 0x1f));
    fpga_mem_wr(0x6000e128,uVar4 & uVar5 | (*pbVar10 >> 4 & 1) << (uVar2 & 0x1f));
    uVar4 = fpga_mem_rd(0x6000e12c);
    pbVar8 = (byte *)(param_4 + uVar2);
    fpga_mem_wr(0x6000e12c,uVar5 & uVar4 | (*pbVar8 >> 4 & 1) << (uVar2 & 0x1f));
    uVar4 = (uVar2 & 0xff) >> 3;
    iVar6 = (uVar2 & 7) * 4;
    uVar5 = ~(0xf << iVar6);
    if (uVar4 == 0) {
      uVar4 = fpga_mem_rd(0x6000e0d0);
      fpga_mem_wr(0x6000e0d0,uVar4 & uVar5 | (*pbVar10 & 0xf) << iVar6);
      uVar4 = fpga_mem_rd(0x6000e11c);
      uVar5 = uVar4 & uVar5 | (*pbVar8 & 0xf) << iVar6;
      uVar3 = 0x6000e11c;
    }
    else if (uVar4 == 1) {
      uVar4 = fpga_mem_rd(0x6000e0d4);
      fpga_mem_wr(0x6000e0d4,uVar4 & uVar5 | (*pbVar10 & 0xf) << iVar6);
      uVar4 = fpga_mem_rd(0x6000e120);
      uVar5 = uVar4 & uVar5 | (*pbVar8 & 0xf) << iVar6;
      uVar3 = 0x6000e120;
    }
    else {
      uVar4 = fpga_mem_rd(0x6000e124);
      fpga_mem_wr(0x6000e124,(*pbVar10 & 0xf) << iVar6 | uVar4 & uVar5);
      uVar5 = fpga_mem_rd(0x6000e124);
      uVar5 = ~(0xf << (iVar6 + 0x10U & 0x1f)) & uVar5 | (*pbVar8 & 0xf) << (iVar6 + 0x10U & 0x1f);
      uVar3 = 0x6000e124;
    }
    fpga_mem_wr(uVar3,uVar5);
  }
  uVar2 = 0;
  do {
    if (param_8 == uVar2) {
      return;
    }
    pbVar8 = (byte *)(param_6 + uVar2);
    bVar1 = *pbVar8 >> 2;
    if (bVar1 == 1) {
      uVar5 = fpga_mem_rd(0x6000e0cc);
      iVar6 = (*pbVar8 & 3) << 3;
      uVar5 = (uint)*(byte *)(param_7 + uVar2) << iVar6 | uVar5 & ~(0xff << iVar6);
      uVar3 = 0x6000e0cc;
_L279:
      fpga_mem_wr(uVar3,uVar5);
    }
    else {
      if (bVar1 == 0) {
        uVar5 = fpga_mem_rd(0x6000e0c8);
        iVar6 = (*pbVar8 & 3) << 3;
        uVar5 = (uint)*(byte *)(param_7 + uVar2) << iVar6 | uVar5 & ~(0xff << iVar6);
        uVar3 = 0x6000e0c8;
        goto _L279;
      }
      if (bVar1 == 2) {
        uVar5 = fpga_mem_rd(0x6000e114);
        iVar6 = (*pbVar8 & 3) << 3;
        uVar5 = (uint)*(byte *)(param_7 + uVar2) << iVar6 | uVar5 & ~(0xff << iVar6);
        uVar3 = 0x6000e114;
        goto _L279;
      }
      if (bVar1 == 3) {
        uVar5 = fpga_mem_rd(0x6000e118);
        iVar6 = (*pbVar8 & 3) << 3;
        uVar5 = (uint)*(byte *)(param_7 + uVar2) << iVar6 | uVar5 & ~(0xff << iVar6);
        uVar3 = 0x6000e118;
        goto _L279;
      }
    }
    pbVar8 = (byte *)(param_4 + uVar2);
    bVar1 = *pbVar8 >> 2;
    if (bVar1 == 1) {
      uVar5 = fpga_mem_rd(0x6000e0cc);
      iVar6 = (*pbVar8 & 3) << 3;
      uVar5 = (uint)*(byte *)(param_5 + uVar2) << iVar6 | uVar5 & ~(0xff << iVar6);
      uVar3 = 0x6000e0cc;
_L280:
      fpga_mem_wr(uVar3,uVar5);
    }
    else {
      if (bVar1 == 0) {
        uVar5 = fpga_mem_rd(0x6000e0c8);
        iVar6 = (*pbVar8 & 3) << 3;
        uVar5 = (uint)*(byte *)(param_5 + uVar2) << iVar6 | uVar5 & ~(0xff << iVar6);
        uVar3 = 0x6000e0c8;
        goto _L280;
      }
      if (bVar1 == 2) {
        uVar5 = fpga_mem_rd(0x6000e114);
        iVar6 = (*pbVar8 & 3) << 3;
        uVar5 = (uint)*(byte *)(param_5 + uVar2) << iVar6 | uVar5 & ~(0xff << iVar6);
        uVar3 = 0x6000e114;
        goto _L280;
      }
      if (bVar1 == 3) {
        uVar5 = fpga_mem_rd(0x6000e118);
        iVar6 = (*pbVar8 & 3) << 3;
        uVar5 = (uint)*(byte *)(param_5 + uVar2) << iVar6 | uVar5 & ~(0xff << iVar6);
        uVar3 = 0x6000e118;
        goto _L280;
      }
    }
    uVar2 = uVar2 + 1;
  } while( true );
}

