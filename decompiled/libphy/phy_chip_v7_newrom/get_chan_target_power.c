/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
 * Source: libphy -> phy_chip_v7_newrom.o -> get_chan_target_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_chan_target_power
               (int param_1,char *param_2,int param_3,int param_4,undefined4 param_5,
               undefined4 param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uStack_14;
  
  uStack_14 = 0xffffffff;
  if (param_4 == 1) {
    get_rate_fcc_index(&uStack_14,param_5,param_6);
  }
  uVar3 = 0;
  do {
    cVar1 = *(char *)(param_3 + uVar3);
    *param_2 = cVar1;
    uVar4 = uStack_14 & 0xff;
    if (((1 < uVar3) && (uVar4 = uStack_14 >> 8 & 0xff, 5 < (uVar3 & 0xff))) &&
       (uVar4 = uStack_14 >> 0x10 & 0xff, 9 < (uVar3 & 0xff))) {
      uVar4 = uStack_14 >> 0x18;
    }
    if ((DAT_000121b0 & 0xf) == 1) {
      bVar2 = wifi_cali_offset;
      if (uVar3 < 2) {
        bVar2 = DAT_000114b5;
      }
      uVar4 = uVar4 - bVar2 & 0xff;
      param_1 = (int)((param_1 - (uint)bVar2) * 0x1000000) >> 0x18;
    }
    if ((int)uVar4 < (int)cVar1) {
      *param_2 = (char)uVar4;
    }
    if (param_1 < *param_2) {
      *param_2 = (char)param_1;
    }
    uVar3 = uVar3 + 1;
    param_2 = param_2 + 1;
  } while (uVar3 != 0x10);
  return;
}

