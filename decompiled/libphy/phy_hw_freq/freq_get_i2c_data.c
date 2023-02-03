/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_hw_freq.o -> freq_get_i2c_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void freq_get_i2c_data(undefined1 *param_1,undefined1 *param_2,char *param_3,int param_4,
                      uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  
  i2c_writeReg_Mask(0x62,1,0xb,6,6,1);
  uVar1 = i2c_readReg(0x62,1,0xb);
  uVar2 = i2c_readReg(99,1,4);
  cVar5 = ' ';
  cVar4 = '\x10';
  uVar3 = 0;
  do {
    if (uVar3 == param_5) {
      return;
    }
    switch(uVar3) {
    case 0:
      *param_1 = 0x62;
      *param_2 = 1;
      *param_3 = cVar5;
      break;
    case 1:
      param_1[1] = 0x62;
      param_2[1] = 2;
      param_3[1] = cVar5;
      break;
    case 2:
      param_1[2] = 99;
      param_2[2] = 4;
      param_3[2] = cVar4;
      *(uint *)(param_4 + 8) = uVar2 & 0xfe;
      goto _L68;
    case 3:
      param_1[3] = 99;
      param_2[3] = 2;
      param_3[3] = cVar5;
      break;
    case 4:
      param_1[4] = 99;
      param_2[4] = 1;
      param_3[4] = cVar5;
      break;
    case 5:
      param_1[5] = 99;
      param_2[5] = 0;
      param_3[5] = cVar5;
      break;
    case 6:
      param_1[6] = 99;
      param_2[6] = 4;
      param_3[6] = cVar4;
      *(uint *)(param_4 + 0x18) = uVar2 & 0xff | 1;
      goto _L68;
    case 7:
      param_1[7] = 0x62;
      param_2[7] = 0xb;
      param_3[7] = cVar4;
      *(undefined4 *)(param_4 + 0x1c) = uVar1;
_L68:
      cVar4 = cVar4 + '\x01';
    default:
      goto _L55;
    }
    cVar5 = cVar5 + '\x01';
_L55:
    uVar3 = uVar3 + 1 & 0xff;
  } while( true );
}

