/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
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
  char cVar3;
  uint uVar4;
  char cVar5;
  
  i2c_writeReg_Mask(0x62,1,0xb,6,6,1);
  uVar1 = i2c_readReg(0x62,1,0xb);
  uVar2 = i2c_readReg(99,1,4);
  cVar3 = ' ';
  cVar5 = '\x10';
  uVar4 = 0;
  do {
    if (uVar4 == param_5) {
      return;
    }
    switch(uVar4) {
    case 0:
      *param_1 = 0x62;
      *param_2 = 1;
      *param_3 = cVar3;
      break;
    case 1:
      param_1[1] = 0x62;
      param_2[1] = 2;
      param_3[1] = cVar3;
      break;
    case 2:
      param_1[2] = 99;
      param_2[2] = 4;
      param_3[2] = cVar5;
      *(uint *)(param_4 + 8) = uVar2 & 0xfe;
      goto _L72;
    case 3:
      param_1[3] = 99;
      param_2[3] = 2;
      param_3[3] = cVar3;
      break;
    case 4:
      param_1[4] = 99;
      param_2[4] = 1;
      param_3[4] = cVar3;
      break;
    case 5:
      param_1[5] = 99;
      param_2[5] = 0;
      param_3[5] = cVar3;
      break;
    case 6:
      param_1[6] = 99;
      param_2[6] = 4;
      param_3[6] = cVar5;
      *(uint *)(param_4 + 0x18) = uVar2 & 0xff | 1;
      goto _L72;
    case 7:
      param_1[7] = 0x62;
      param_2[7] = 0xb;
      param_3[7] = cVar5;
      *(undefined4 *)(param_4 + 0x1c) = uVar1;
_L72:
      cVar5 = cVar5 + '\x01';
      goto _L58;
    case 8:
      param_1[8] = 99;
      param_2[8] = 3;
      param_3[8] = cVar3;
      break;
    default:
      goto _L58;
    }
    cVar3 = cVar3 + '\x01';
_L58:
    uVar4 = uVar4 + 1 & 0xff;
  } while( true );
}

