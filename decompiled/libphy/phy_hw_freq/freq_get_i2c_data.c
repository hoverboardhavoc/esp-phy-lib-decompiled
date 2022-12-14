/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_hw_freq.o -> freq_get_i2c_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void freq_get_i2c_data(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  
  (**(code **)(_g_phyFuns + 0x60))(0x62,1,0xb,6,6,1,*(code **)(_g_phyFuns + 0x60));
  uVar1 = (**(code **)(_g_phyFuns + 0x50))(0x62,1,0xb,*(code **)(_g_phyFuns + 0x50));
  uVar2 = (**(code **)(_g_phyFuns + 0x50))(99,1,0,*(code **)(_g_phyFuns + 0x50));
  uVar3 = (**(code **)(_g_phyFuns + 0x50))(0x67,1,3,*(code **)(_g_phyFuns + 0x50));
  uVar4 = (**(code **)(_g_phyFuns + 0x50))(0x6b,1,6,*(code **)(_g_phyFuns + 0x50));
  uVar9 = uVar4 & 199 | 0x28;
  cVar8 = '\x10';
  cVar7 = ' ';
  cVar5 = '\0';
  uVar6 = 0;
  do {
    if (uVar6 == param_5) {
      return;
    }
    switch(uVar6 - 1 & 0xff) {
    case 0:
      *(undefined1 *)(param_1 + 1) = 0x62;
      *(undefined1 *)(param_2 + 1) = 1;
      *(char *)(param_3 + 1) = cVar7;
      break;
    case 1:
      *(undefined1 *)(param_1 + 2) = 0x62;
      *(undefined1 *)(param_2 + 2) = 2;
      *(char *)(param_3 + 2) = cVar7;
      break;
    case 2:
      *(undefined1 *)(param_1 + 3) = 99;
      *(undefined1 *)(param_2 + 3) = 0;
      *(char *)(param_3 + 3) = cVar8;
      *(uint *)(param_4 + 0xc) = uVar2 & 0xf7;
      goto _L54;
    case 3:
      *(undefined1 *)(param_1 + 4) = 99;
      *(undefined1 *)(param_2 + 4) = 6;
      *(char *)(param_3 + 4) = cVar7;
      break;
    case 4:
      *(undefined1 *)(param_1 + 5) = 99;
      *(undefined1 *)(param_2 + 5) = 5;
      *(char *)(param_3 + 5) = cVar7;
      break;
    case 5:
      *(undefined1 *)(param_1 + 6) = 99;
      *(undefined1 *)(param_2 + 6) = 4;
      *(char *)(param_3 + 6) = cVar7;
      break;
    case 6:
      *(undefined1 *)(param_1 + 7) = 99;
      *(undefined1 *)(param_2 + 7) = 3;
      *(char *)(param_3 + 7) = cVar7;
      break;
    case 7:
      *(undefined1 *)(param_1 + 8) = 99;
      *(undefined1 *)(param_2 + 8) = 0;
      *(char *)(param_3 + 8) = cVar8;
      *(uint *)(param_4 + 0x20) = uVar2 & 0xff | 8;
      goto _L54;
    case 8:
      *(undefined1 *)(param_1 + 9) = 0x62;
      *(undefined1 *)(param_2 + 9) = 0xb;
      *(char *)(param_3 + 9) = cVar8;
      *(undefined4 *)(param_4 + 0x24) = uVar1;
_L54:
      cVar8 = cVar8 + '\x01';
      goto _L37;
    case 9:
      *(undefined1 *)(param_1 + 10) = 0x6b;
      *(undefined1 *)(param_2 + 10) = 6;
      *(char *)(param_3 + 10) = cVar5;
      *(uint *)(param_4 + 0x28) = uVar9 << 8 | uVar9 << 0x10 | uVar4;
      goto _L53;
    case 10:
      *(undefined1 *)(param_1 + 0xb) = 0x67;
      *(undefined1 *)(param_2 + 0xb) = 3;
      *(char *)(param_3 + 0xb) = cVar5;
      *(uint *)(param_4 + 0x2c) = (uVar3 & 0xfb) << 8 | uVar3 << 0x10 | uVar3;
_L53:
      cVar5 = cVar5 + '\x01';
    default:
      goto _L37;
    }
    cVar7 = cVar7 + '\x01';
_L37:
    uVar6 = uVar6 + 1 & 0xff;
  } while( true );
}

