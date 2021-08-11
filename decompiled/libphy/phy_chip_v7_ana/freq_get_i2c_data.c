/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> freq_get_i2c_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void freq_get_i2c_data(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,
                      undefined1 *param_4,undefined1 *param_5,undefined1 *param_6,
                      undefined1 *param_7,uint param_8)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int in_stack_00000000;
  
  i2c_writeReg_Mask(0x62,1,0xb,6,6,1);
  uVar1 = chip_i2c_readReg(0x62,1,0xb);
  bVar2 = chip_i2c_readReg(99,1,0);
  bVar3 = chip_i2c_readReg(0x62,1,0);
  for (uVar4 = 0; (uVar4 & 0xff) < param_8; uVar4 = uVar4 + 1) {
    *(undefined1 *)(in_stack_00000000 + uVar4) = 0;
    switch(uVar4 & 0xff) {
    case 0:
      *param_1 = 1;
      *param_2 = 99;
      *param_3 = 0;
      *param_4 = 0xf;
      *param_6 = 0xf;
      *param_5 = 0;
      *param_7 = 0;
      *(undefined1 *)(in_stack_00000000 + uVar4) = 1;
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
      param_5[3] = bVar2 & 0xf7;
      param_7[3] = bVar2 & 0xf7;
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
      param_5[7] = bVar2 | 8;
      param_7[7] = bVar2 | 8;
      break;
    case 8:
      param_1[8] = 1;
      param_2[8] = 0x62;
      param_3[8] = 0xb;
      param_4[8] = 2;
      param_6[8] = 2;
      param_5[8] = uVar1;
      param_7[8] = uVar1;
      break;
    case 9:
      param_1[9] = 1;
      param_2[9] = 0x62;
      param_3[9] = 0;
      param_4[9] = 3;
      param_6[9] = 3;
      param_5[9] = bVar3 & 0xdf;
      param_7[9] = bVar3 & 0xdf;
      break;
    case 10:
      param_1[10] = 1;
      param_2[10] = 0x62;
      param_3[10] = 0;
      param_4[10] = 4;
      param_6[10] = 4;
      param_5[10] = bVar3 | 0x20;
      param_7[10] = bVar3 | 0x20;
    }
  }
  return;
}

