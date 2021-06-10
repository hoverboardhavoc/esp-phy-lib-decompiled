/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> freq_get_i2c_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void freq_get_i2c_data(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,
                      undefined1 *param_4,undefined1 *param_5,undefined1 *param_6,
                      undefined1 *param_7,uint param_8)

{
  byte bVar1;
  uint uVar2;
  int in_stack_00000000;
  
  i2c_writeReg_Mask(0x62,1,0,7,7,1);
  bVar1 = chip_i2c_readReg(0x62,1,0);
  bVar1 = bVar1 & 0x9f | 0x20;
  for (uVar2 = 0; (uVar2 & 0xff) < param_8; uVar2 = uVar2 + 1) {
    *(undefined1 *)(in_stack_00000000 + uVar2) = 0;
    switch(uVar2 & 0xff) {
    case 0:
      *param_1 = 1;
      *param_2 = 0x62;
      *param_3 = 1;
      *param_4 = 0x10;
      *param_6 = 0x10;
      *param_5 = 0;
      *param_7 = 0;
      break;
    case 1:
      param_1[1] = 1;
      param_2[1] = 99;
      param_3[1] = 0;
      param_4[1] = 0;
      param_6[1] = 0;
      param_5[1] = 7;
      param_7[1] = 7;
      break;
    case 2:
      param_1[2] = 1;
      param_2[2] = 99;
      param_3[2] = 3;
      param_4[2] = 0x16;
      param_6[2] = 0x16;
      param_5[2] = 0;
      param_7[2] = 0;
      break;
    case 3:
      param_1[3] = 1;
      param_2[3] = 99;
      param_3[3] = 5;
      param_4[3] = 0x14;
      param_6[3] = 0x14;
      param_5[3] = 0;
      param_7[3] = 0;
      break;
    case 4:
      param_1[4] = 1;
      param_2[4] = 99;
      param_3[4] = 4;
      param_4[4] = 0x15;
      param_6[4] = 0x15;
      param_5[4] = 0;
      param_7[4] = 0;
      break;
    case 5:
      param_1[5] = 1;
      param_2[5] = 99;
      param_3[5] = 0;
      param_4[5] = 1;
      param_6[5] = 1;
      param_5[5] = 0x17;
      param_7[5] = 0x17;
      break;
    case 6:
      param_1[6] = 1;
      param_2[6] = 0x62;
      param_3[6] = 0;
      param_4[6] = 2;
      param_6[6] = 2;
      param_5[6] = bVar1;
      param_7[6] = bVar1;
      break;
    case 7:
      param_1[7] = 1;
      param_2[7] = 0x62;
      param_3[7] = 2;
      param_4[7] = 0x11;
      param_6[7] = 0x11;
      param_5[7] = 0;
      param_7[7] = 0;
      break;
    case 8:
      param_1[8] = 1;
      param_2[8] = 100;
      param_3[8] = 4;
      param_4[8] = 0x18;
      param_6[8] = 0x18;
      param_5[8] = 0;
      param_7[8] = 0;
      break;
    case 9:
      param_1[9] = 1;
      param_2[9] = 100;
      param_3[9] = 7;
      param_4[9] = 0x19;
      param_6[9] = 0x19;
      param_5[9] = 0;
      param_7[9] = 0;
    }
  }
  return;
}

