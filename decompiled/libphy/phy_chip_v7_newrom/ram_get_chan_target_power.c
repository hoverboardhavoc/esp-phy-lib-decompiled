/*
 * Last changed at upstream commit dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * https://github.com/espressif/esp-phy-lib/commit/dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * Upstream date: 2022-04-07 23:37:47 -0400
 * Upstream subject: C3/S3 fix "i2c critical" and iram functions
 * Source: libphy -> phy_chip_v7_newrom.o -> ram_get_chan_target_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ram_get_chan_target_power
               (int param_1,char *param_2,int param_3,int param_4,undefined4 param_5,
               undefined4 param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  undefined4 uStack_14;
  
  uStack_14 = 0x1000100;
  if (param_4 == 1) {
    ram_get_rate_fcc_index(&uStack_14,param_5,param_6);
  }
  uVar3 = 0;
  do {
    cVar1 = *(char *)(param_3 + uVar3);
    *param_2 = cVar1;
    cVar5 = (char)uStack_14;
    if (((1 < uVar3) && (cVar5 = (char)((uint)uStack_14 >> 8), 5 < (uVar3 & 0xff))) &&
       (cVar5 = (char)((uint)uStack_14 >> 0x10), 9 < (uVar3 & 0xff))) {
      cVar5 = (char)((uint)uStack_14 >> 0x18);
    }
    iVar4 = param_1;
    if ((DAT_00012208 & 0xf) == 1) {
      bVar2 = wifi_cali_offset;
      if (uVar3 < 2) {
        bVar2 = DAT_00011cad;
      }
      cVar5 = cVar5 - bVar2;
      iVar4 = (int)((param_1 - (uint)bVar2) * 0x1000000) >> 0x18;
    }
    if (cVar5 < cVar1) {
      *param_2 = cVar5;
    }
    if (iVar4 < *param_2) {
      *param_2 = (char)iVar4;
    }
    uVar3 = uVar3 + 1;
    param_2 = param_2 + 1;
  } while (uVar3 != 0xe);
  return;
}

