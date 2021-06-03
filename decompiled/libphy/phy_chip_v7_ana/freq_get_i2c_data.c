/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_ana.o -> freq_get_i2c_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void freq_get_i2c_data(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,
                      undefined1 *param_4,undefined1 *param_5,undefined1 *param_6,
                      undefined1 *param_7,uint param_8)

{
  undefined1 uVar1;
  uint uVar2;
  int in_stack_00000000;
  
  (**(code **)(_g_phyFuns + 0x1bc))(0x62,1,0xb,6,6,1,*(code **)(_g_phyFuns + 0x1bc));
  uVar1 = (**(code **)(_g_phyFuns + 0x1ac))(0x62,1,0xb,*(code **)(_g_phyFuns + 0x1ac));
  for (uVar2 = 0; (uVar2 & 0xff) < param_8; uVar2 = uVar2 + 1) {
    *(undefined1 *)(in_stack_00000000 + uVar2) = 0;
    switch(uVar2 & 0xff) {
    case 0:
      *param_1 = 1;
      *param_2 = 99;
      *param_3 = 0;
      *param_4 = 0xf;
      *param_6 = 0xf;
      *param_5 = 0;
      *param_7 = 0;
      *(undefined1 *)(in_stack_00000000 + uVar2) = 1;
      break;
    case 1:
      param_1[1] = 1;
      param_2[1] = 0x62;
      param_3[1] = 1;
      param_4[1] = 0x10;
      param_6[1] = 0x10;
      param_5[1] = 0;
      param_7[1] = 0;
      break;
    case 2:
      param_1[2] = 1;
      param_2[2] = 0x62;
      param_3[2] = 2;
      param_4[2] = 0x11;
      param_6[2] = 0x11;
      param_5[2] = 0;
      param_7[2] = 0;
      break;
    case 3:
      param_1[3] = 1;
      param_2[3] = 99;
      param_3[3] = 0;
      param_4[3] = 0;
      param_6[3] = 0;
      param_5[3] = 7;
      param_7[3] = 7;
      break;
    case 4:
      param_1[4] = 1;
      param_2[4] = 99;
      param_3[4] = 3;
      param_4[4] = 0x16;
      param_6[4] = 0x16;
      param_5[4] = 0;
      param_7[4] = 0;
      break;
    case 5:
      param_1[5] = 1;
      param_2[5] = 99;
      param_3[5] = 5;
      param_4[5] = 0x14;
      param_6[5] = 0x14;
      param_5[5] = 0;
      param_7[5] = 0;
      break;
    case 6:
      param_1[6] = 1;
      param_2[6] = 99;
      param_3[6] = 4;
      param_4[6] = 0x15;
      param_6[6] = 0x15;
      param_5[6] = 0;
      param_7[6] = 0;
      break;
    case 7:
      param_1[7] = 1;
      param_2[7] = 99;
      param_3[7] = 0;
      param_4[7] = 1;
      param_6[7] = 1;
      param_5[7] = 0x17;
      param_7[7] = 0x17;
      break;
    case 8:
      param_1[8] = 1;
      param_2[8] = 0x62;
      param_3[8] = 0xb;
      param_4[8] = 2;
      param_6[8] = 2;
      param_5[8] = uVar1;
      param_7[8] = uVar1;
    }
  }
  return;
}

