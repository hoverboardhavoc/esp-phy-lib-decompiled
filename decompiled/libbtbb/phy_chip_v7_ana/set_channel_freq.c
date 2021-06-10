/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> set_channel_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined2 set_channel_freq(char param_1,uint param_2,int param_3)

{
  undefined2 uVar1;
  byte bVar2;
  short sStack_14;
  undefined1 uStack_12;
  
  i2c_writeReg_Mask(0x62,1,0,7,7,0);
  i2c_writeReg_Mask(0x62,1,2,7,7,0);
  bVar2 = param_1 - 1;
  if (bVar2 < 0xd) {
    uVar1 = *(undefined2 *)(CSWTCH_103 + (uint)bVar2 * 2);
  }
  else {
    uVar1 = 0x9b4;
  }
  if ((param_3 != 0) || (1 < param_2)) {
    rfpll_set_freq(uVar1,param_2,param_3,&sStack_14);
    goto _L110;
  }
  if (param_2 == 1) {
    switch(bVar2) {
    case 0:
      sStack_14 = -0x4ea5;
      uStack_12 = 0x3b;
      break;
    case 1:
      sStack_14 = -0xda5;
      uStack_12 = 0xdf;
      break;
    case 2:
      sStack_14 = 0x345c;
      uStack_12 = 0x83;
      break;
    case 3:
      sStack_14 = 0x765c;
      uStack_12 = 0x27;
      break;
    case 4:
      sStack_14 = -0x48a4;
      uStack_12 = 0xcb;
      break;
    case 5:
      sStack_14 = -0x6a4;
      uStack_12 = 0x6f;
      break;
    case 6:
      sStack_14 = 0x3b5d;
      uStack_12 = 0x13;
      break;
    case 7:
      sStack_14 = 0x7c5d;
      uStack_12 = 0xb7;
      break;
    case 8:
      sStack_14 = -0x41a3;
      uStack_12 = 0x5b;
      break;
    case 9:
      sStack_14 = 0x5e;
      uStack_12 = 0;
      break;
    case 10:
      sStack_14 = 0x415e;
      uStack_12 = 0xa4;
      break;
    case 0xb:
      sStack_14 = -0x7ca2;
      uStack_12 = 0x48;
      break;
    case 0xc:
      sStack_14 = -0x3ba2;
      uStack_12 = 0xec;
      break;
    default:
      sStack_14 = 0x625f;
      uStack_12 = 0x76;
    }
    goto _L110;
  }
  switch(bVar2) {
  case 0:
    sStack_14 = 0x6000;
    goto _L129;
  case 1:
    sStack_14 = -0x6ed0;
    break;
  case 2:
    sStack_14 = -0x44d0;
    goto _L133;
  case 3:
    sStack_14 = -0x2000;
_L129:
    sStack_14 = sStack_14 + 0x630;
_L130:
    uStack_12 = 0x66;
    goto _L110;
  case 4:
    sStack_14 = 0x1000;
    goto _L134;
  case 5:
    sStack_14 = 0x4000;
    goto _L135;
  case 6:
    sStack_14 = 0x6000;
    goto _L131;
  case 7:
    sStack_14 = -0x7000;
_L134:
    sStack_14 = sStack_14 + 0x131;
    break;
  case 8:
    sStack_14 = -0x4000;
_L135:
    sStack_14 = sStack_14 + -0x4cf;
    goto _L133;
  case 9:
    sStack_14 = -0x2000;
_L131:
    sStack_14 = sStack_14 + 0x631;
    goto _L130;
  case 10:
    sStack_14 = 0x1132;
    break;
  case 0xb:
    sStack_14 = 0x3b32;
_L133:
    uStack_12 = 0xbb;
    goto _L110;
  case 0xc:
    sStack_14 = 0x6632;
    goto _L130;
  default:
    sStack_14 = -0x33ce;
    uStack_12 = 0xcc;
    goto _L110;
  }
  uStack_12 = 0x11;
_L110:
  write_rfpll_sdm(&sStack_14);
  restart_cal();
  wait_rfpll_cal_end();
  return uVar1;
}

