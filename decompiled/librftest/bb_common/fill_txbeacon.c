/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> fill_txbeacon
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fill_txbeacon(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,int param_4,
                  undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = _PSDU0_OFFSET;
  *(undefined4 *)(_PSDU0_OFFSET + 0x2c) = 0x53450700;
  *(undefined4 *)(iVar1 + 0x30) = 0x36323850;
  *(undefined4 *)(iVar1 + 0x34) = 0x82080136;
  *(undefined4 *)(iVar1 + 0x38) = 0xc968b84;
  *(undefined4 *)(iVar1 + 0x3c) = 0x3241812;
  *(undefined4 *)(iVar1 + 0x40) = 0x4050b01;
  *(undefined4 *)(iVar1 + 0x44) = 0x200;
  *(undefined4 *)(iVar1 + 0x48) = 0x48300432;
  *(undefined4 *)(iVar1 + 0x4c) = 0x88dd6c60;
  *(undefined4 *)(iVar1 + 0x50) = 0xff34fe18;
  *(uint *)(iVar1 + 0x54) = CONCAT12(*param_3,CONCAT11(*param_2,*param_1)) | 0xff000000;
  *(undefined4 *)(iVar1 + 0x58) = *param_5;
  *(undefined4 *)(iVar1 + 0x5c) = param_5[1];
  *(undefined4 *)(iVar1 + 0x60) = param_5[2];
  *(uint *)(iVar1 + 100) = *(ushort *)(param_5 + 3) | 0x55550000;
  *(undefined4 *)(iVar1 + 0x68) = 0x55555555;
  iVar4 = 0;
  do {
    puVar2 = (undefined4 *)(param_4 + iVar4);
    puVar3 = (undefined4 *)(iVar1 + 0x6c + iVar4);
    iVar4 = iVar4 + 4;
    *puVar3 = *puVar2;
  } while (iVar4 != 0x6c);
  return;
}

