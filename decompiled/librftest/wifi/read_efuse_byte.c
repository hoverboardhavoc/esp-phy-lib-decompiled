/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> read_efuse_byte
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint read_efuse_byte(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = 0x44;
  if ((param_1 != 1) && (iVar1 = 0, param_1 == 2)) {
    iVar1 = 0x5c;
  }
  uVar3 = param_2 >> 2;
  if (uVar3 == 3) {
    iVar4 = 0x6000880c;
  }
  else if (uVar3 < 4) {
    if (uVar3 == 1) {
      iVar4 = 0x60008804;
    }
    else if (uVar3 < 2) {
      iVar4 = 0x60008800;
    }
    else {
      iVar4 = 0x60008808;
    }
  }
  else if (uVar3 == 5) {
    iVar4 = 0x60008814;
  }
  else if (uVar3 < 5) {
    iVar4 = 0x60008810;
  }
  else if (uVar3 == 6) {
    iVar4 = 0x60008818;
  }
  else {
    if (uVar3 != 0x46) {
      uVar3 = 0;
      goto _L279;
    }
    iVar4 = 0x6000881c;
  }
  uVar3 = *(uint *)(iVar1 + iVar4);
_L279:
  uVar2 = 0;
  iVar1 = 1;
  do {
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 * 2;
  } while (uVar2 <= param_3 - param_4);
  return iVar1 - 1U & (uVar3 >> ((param_2 & 3) << 3) & 0xff) >> (param_4 & 0x1f);
}

