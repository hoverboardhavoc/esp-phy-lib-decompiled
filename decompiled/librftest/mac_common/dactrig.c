/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> mac_common.o -> dactrig
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dactrig(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  _DAT_60033d64 = _DAT_60033d64 & 0x7fffffff;
  iVar1 = 0;
  do {
    *(int *)(iVar1 + 0x3fcb0000) = (iVar1 >> 3) + 0x100;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10000);
  if (param_2 == 1) {
    _DAT_60033d64 = _DAT_60033d64 & 0xffff4000 | param_1 & 0x3fff;
  }
  else {
    _DAT_60033d64 = _DAT_60033d64 & 0xffffc000 | param_1 & 0x3fff | 0x8000;
  }
  if (param_3 == 0) {
    _DAT_60033d64 = _DAT_60033d64 & 0xfff7ffff;
  }
  else {
    _DAT_60033d64 = _DAT_60033d64 | 0x80000;
  }
  uVar2 = _DAT_60033d64 & 0xf00fffff;
  _DAT_60033d64 = (param_1 & 0xff) << 0x14 | uVar2 | 0x80000000;
  do {
  } while (-1 < (int)(uVar2 << 0xd));
  ets_delay_us(10000);
  _DAT_60033d5c = 0;
  phy_printf("0x%x,0x%x,0x%x,0x%x\n",param_1,param_2,param_3,param_4);
  return;
}

