/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_hw_freq.o -> freq_get_i2c_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void freq_get_i2c_data(undefined1 *param_1,undefined1 *param_2,char *param_3,int param_4,
                      uint param_5)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  
  (**(code **)(_g_phyFuns + 0x60))(0x62,1,0xb,6,6,1,*(code **)(_g_phyFuns + 0x60));
  uVar2 = (**(code **)(_g_phyFuns + 0x50))(0x62,1,0xb,*(code **)(_g_phyFuns + 0x50));
  uVar3 = (**(code **)(_g_phyFuns + 0x50))(99,1,0,*(code **)(_g_phyFuns + 0x50));
  uVar4 = (**(code **)(_g_phyFuns + 0x50))(0x67,1,3,*(code **)(_g_phyFuns + 0x50));
  uVar5 = (**(code **)(_g_phyFuns + 0x50))(0x6b,1,6,*(code **)(_g_phyFuns + 0x50));
  uVar9 = uVar5 & 199 | 0x28;
  cVar8 = '\x10';
  cVar1 = ' ';
  cVar6 = '\0';
  uVar7 = 0;
  do {
    if (uVar7 == param_5) {
      return;
    }
    switch(uVar7) {
    case 0:
      *param_1 = 0x62;
      *param_2 = 1;
      *param_3 = cVar1;
      break;
    case 1:
      param_1[1] = 0x62;
      param_2[1] = 2;
      param_3[1] = cVar1;
      break;
    case 2:
      param_1[2] = 99;
      param_2[2] = 0;
      param_3[2] = cVar8;
      *(uint *)(param_4 + 8) = uVar3 & 0xf7;
      goto _L54;
    case 3:
      param_1[3] = 99;
      param_2[3] = 6;
      param_3[3] = cVar1;
      break;
    case 4:
      param_1[4] = 99;
      param_2[4] = 5;
      param_3[4] = cVar1;
      break;
    case 5:
      param_1[5] = 99;
      param_2[5] = 4;
      param_3[5] = cVar1;
      break;
    case 6:
      param_1[6] = 99;
      param_2[6] = 3;
      param_3[6] = cVar1;
      break;
    case 7:
      param_1[7] = 99;
      param_2[7] = 0;
      param_3[7] = cVar8;
      *(uint *)(param_4 + 0x1c) = uVar3 & 0xff | 8;
      goto _L54;
    case 8:
      param_1[8] = 0x62;
      param_2[8] = 0xb;
      param_3[8] = cVar8;
      *(undefined4 *)(param_4 + 0x20) = uVar2;
_L54:
      cVar8 = cVar8 + '\x01';
      goto _L37;
    case 9:
      param_1[9] = 0x6b;
      param_2[9] = 6;
      param_3[9] = cVar6;
      *(uint *)(param_4 + 0x24) = uVar9 << 8 | uVar9 << 0x10 | uVar5;
      goto _L53;
    case 10:
      param_1[10] = 0x67;
      param_2[10] = 3;
      param_3[10] = cVar6;
      *(uint *)(param_4 + 0x28) = uVar4 << 0x10 | uVar4 | (uVar4 & 0xfb) << 8;
_L53:
      cVar6 = cVar6 + '\x01';
    default:
      goto _L37;
    }
    cVar1 = cVar1 + '\x01';
_L37:
    uVar7 = uVar7 + 1 & 0xff;
  } while( true );
}

