/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
  undefined1 *puVar4;
  
  iVar1 = 0x44;
  if ((param_1 != 1) && (iVar1 = 0, param_1 == 2)) {
    iVar1 = 0x5c;
  }
  uVar3 = param_2 >> 2;
  if (uVar3 == 3) {
    puVar4 = (undefined1 *)0x6000880c;
  }
  else if (uVar3 < 4) {
    if (uVar3 == 1) {
      puVar4 = &DAT_60008804;
    }
    else if (uVar3 < 2) {
      puVar4 = &DAT_60008800;
    }
    else {
      puVar4 = (undefined1 *)0x60008808;
    }
  }
  else if (uVar3 == 5) {
    puVar4 = (undefined1 *)0x60008814;
  }
  else if (uVar3 < 5) {
    puVar4 = (undefined1 *)0x60008810;
  }
  else if (uVar3 == 6) {
    puVar4 = (undefined1 *)0x60008818;
  }
  else {
    if (uVar3 != 0x46) {
      uVar3 = 0;
      goto _L520;
    }
    puVar4 = (undefined1 *)0x6000881c;
  }
  uVar3 = *(uint *)(puVar4 + iVar1);
_L520:
  uVar2 = 0;
  iVar1 = 1;
  do {
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 * 2;
  } while (uVar2 <= param_3 - param_4);
  return iVar1 - 1U & (uVar3 >> ((param_2 & 3) << 3) & 0xff) >> (param_4 & 0x1f);
}

