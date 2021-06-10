/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> set_channel_rfpll_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint set_channel_rfpll_freq(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  short sVar4;
  undefined4 uStack_14;
  
  if ((_chip7_sleep_params & 0x10) != 0) {
    if ((param_1 == 0) || (0xe < param_1)) {
      uStack_14 = param_2;
      ets_printf("set_chan error! %d\n",param_1);
      uVar1 = 0x96c;
      param_2 = uStack_14;
    }
    else if (param_1 == 0xe) {
      uVar1 = 0x9b4;
    }
    else {
      uVar1 = (param_1 + -1) * 5 + 0x96cU & 0xffff;
    }
    set_chan_freq_sw_start(uVar1 - 0x60 & 0xff,param_3,param_2);
    return uVar1;
  }
  i2c_writeReg_Mask(0x62,1,0,7,7,0);
  i2c_writeReg_Mask(0x62,1,2,7,7,0);
  uVar1 = param_1 - 1U & 0xff;
  if (uVar1 < 0xd) {
    uVar1 = (uint)*(ushort *)(CSWTCH_103 + uVar1 * 2);
  }
  else {
    uVar1 = 0x9b4;
  }
  if ((param_3 != 0) || (1 < param_2)) {
    rfpll_set_freq(uVar1,param_2,param_3,&uStack_14);
    goto _L110;
  }
  uVar2 = param_1 - 1U & 0xff;
  if (param_2 == 1) {
    switch(uVar2) {
    case 0:
      uStack_14 = CONCAT22(uStack_14._2_2_,0xb15b);
      uVar3 = 0x3b;
      break;
    case 1:
      uStack_14 = CONCAT22(uStack_14._2_2_,0xf25b);
      uVar3 = 0xdf;
      break;
    case 2:
      uStack_14 = CONCAT22(uStack_14._2_2_,0x345c);
      uVar3 = 0x83;
      break;
    case 3:
      uStack_14 = CONCAT22(uStack_14._2_2_,0x765c);
      uVar3 = 0x27;
      break;
    case 4:
      uStack_14 = CONCAT22(uStack_14._2_2_,0xb75c);
      uVar3 = 0xcb;
      break;
    case 5:
      uStack_14 = CONCAT22(uStack_14._2_2_,0xf95c);
      uVar3 = 0x6f;
      break;
    case 6:
      uStack_14 = CONCAT22(uStack_14._2_2_,0x3b5d);
      uVar3 = 0x13;
      break;
    case 7:
      uStack_14 = CONCAT22(uStack_14._2_2_,0x7c5d);
      uVar3 = 0xb7;
      break;
    case 8:
      uStack_14 = CONCAT22(uStack_14._2_2_,0xbe5d);
      uVar3 = 0x5b;
      break;
    case 9:
      uStack_14 = CONCAT13(uStack_14._3_1_,0x5e);
      goto _L110;
    case 10:
      uStack_14 = CONCAT22(uStack_14._2_2_,0x415e);
      uVar3 = 0xa4;
      break;
    case 0xb:
      uStack_14 = CONCAT22(uStack_14._2_2_,0x835e);
      uVar3 = 0x48;
      break;
    case 0xc:
      uStack_14 = CONCAT22(uStack_14._2_2_,0xc45e);
      uVar3 = 0xec;
      break;
    default:
      uStack_14 = CONCAT22(uStack_14._2_2_,0x625f);
      uVar3 = 0x76;
    }
    goto _L128;
  }
  switch(uVar2) {
  case 0:
    sVar4 = 0x6000;
    goto _L129;
  case 1:
    sVar4 = -0x6ed0;
    break;
  case 2:
    sVar4 = -0x44d0;
    goto _L133;
  case 3:
    sVar4 = -0x2000;
_L129:
    sVar4 = sVar4 + 0x630;
_L130:
    uStack_14 = CONCAT22(uStack_14._2_2_,sVar4);
    uVar3 = 0x66;
    goto _L128;
  case 4:
    sVar4 = 0x1000;
    goto _L134;
  case 5:
    sVar4 = 0x4000;
    goto _L135;
  case 6:
    sVar4 = 0x6000;
    goto _L131;
  case 7:
    sVar4 = -0x7000;
_L134:
    sVar4 = sVar4 + 0x131;
    break;
  case 8:
    sVar4 = -0x4000;
_L135:
    sVar4 = sVar4 + -0x4cf;
    goto _L133;
  case 9:
    sVar4 = -0x2000;
_L131:
    sVar4 = sVar4 + 0x631;
    goto _L130;
  case 10:
    sVar4 = 0x1132;
    break;
  case 0xb:
    sVar4 = 0x3b32;
_L133:
    uStack_14 = CONCAT22(uStack_14._2_2_,sVar4);
    uVar3 = 0xbb;
    goto _L128;
  case 0xc:
    sVar4 = 0x6632;
    goto _L130;
  default:
    uStack_14 = CONCAT22(uStack_14._2_2_,0xcc32);
    uVar3 = 0xcc;
    goto _L128;
  }
  uStack_14 = CONCAT22(uStack_14._2_2_,sVar4);
  uVar3 = 0x11;
_L128:
  uStack_14._0_3_ = CONCAT12(uVar3,(undefined2)uStack_14);
_L110:
  write_rfpll_sdm(&uStack_14);
  restart_cal();
  wait_rfpll_cal_end();
  return uVar1;
}

