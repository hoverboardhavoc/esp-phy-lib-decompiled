/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> bb_common.o -> fill_txbeacon
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void fill_txbeacon(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,int param_4,
                  undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [12];
  
  fill_txaddr();
  puVar2 = (undefined4 *)fill_txdataframe(6,0xd4,0xffffffff,0xffff,0,auStack_28,auStack_24);
  *puVar2 = 0x53450700;
  puVar2[1] = 0x36323850;
  puVar2[2] = 0x82080136;
  puVar2[3] = 0xc968b84;
  puVar2[4] = 0x3241812;
  puVar2[5] = 0x4050b01;
  puVar2[6] = 0x200;
  puVar2[7] = 0x48300432;
  puVar2[8] = 0x88dd6c60;
  puVar2[9] = 0xff34fe18;
  puVar2[10] = CONCAT12(*param_3,CONCAT11(*param_2,*param_1)) | 0xff000000;
  puVar2[0xb] = *param_5;
  puVar2[0xc] = param_5[1];
  puVar2[0xd] = param_5[2];
  puVar2[0xe] = *(ushort *)(param_5 + 3) | 0x55550000;
  puVar2[0xf] = 0x55555555;
  iVar4 = 0;
  do {
    puVar3 = (undefined4 *)(param_4 + iVar4);
    iVar1 = iVar4 + 0x40;
    iVar4 = iVar4 + 4;
    *(undefined4 *)((int)puVar2 + iVar1) = *puVar3;
  } while (iVar4 != 0x6c);
  return;
}

