/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> get_pa_gain_11ax
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_pa_gain_11ax(byte param_1,byte *param_2,undefined1 *param_3)

{
  byte bVar1;
  char cVar2;
  
  param_1 = param_1 & 0xf0;
  cVar2 = '\0';
  bVar1 = param_1 | 0xf;
  do {
    switch(cVar2) {
    case '\x01':
      param_2[1] = bVar1;
      param_3[1] = 0xf0;
      break;
    case '\x02':
      param_2[2] = bVar1;
      param_3[2] = 0xf8;
      break;
    case '\x03':
      param_2[3] = bVar1;
      param_3[3] = 0;
      break;
    case '\x04':
      param_2[4] = param_1 | 0xb;
      param_3[4] = 0xfe;
      break;
    case '\x05':
      param_2[5] = param_1 | 0xb;
      param_3[5] = 6;
      break;
    case '\x06':
      param_2[6] = param_1 | 7;
      param_3[6] = 0;
      break;
    case '\a':
      param_2[7] = param_1 | 9;
      param_3[7] = 2;
      break;
    case '\b':
      param_2[8] = param_1 | 9;
      param_3[8] = 10;
      break;
    case '\t':
      param_2[9] = param_1 | 3;
      param_3[9] = 0;
      break;
    case '\n':
      param_2[10] = param_1 | 2;
      param_3[10] = 0;
      break;
    case '\v':
      param_2[0xb] = param_1 | 2;
      param_3[0xb] = 8;
      break;
    case '\f':
      param_2[0xc] = param_1 | 1;
      param_3[0xc] = 4;
      break;
    case '\r':
      param_2[0xd] = param_1 | 1;
      param_3[0xd] = 0xc;
      break;
    case '\x0e':
      param_2[0xe] = param_1;
      param_3[0xe] = 0xfe;
      break;
    case '\x0f':
      param_2[0xf] = param_1;
      param_3[0xf] = 6;
      break;
    default:
      *param_2 = bVar1;
      *param_3 = 0xe8;
    }
    cVar2 = cVar2 + '\x01';
  } while (cVar2 != '\x10');
  return;
}

