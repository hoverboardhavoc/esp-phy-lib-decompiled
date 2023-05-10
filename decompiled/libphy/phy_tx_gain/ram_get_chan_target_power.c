/*
 * Last changed at upstream commit a83c216dd2de6418cb26ee42d80433b0badd4aea
 * https://github.com/espressif/esp-phy-lib/commit/a83c216dd2de6418cb26ee42d80433b0badd4aea
 * Upstream date: 2023-05-10 18:09:34 +0800
 * Upstream subject: esp32c3: update libphy for ble 1M/2M switch
 * Source: libphy -> phy_tx_gain.o -> ram_get_chan_target_power
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
  uint uVar5;
  int iVar6;
  uint auStack_24 [4];
  
  auStack_24[0] = 0x52525252;
  if (param_4 == 1) {
    ram_get_rate_fcc_index(auStack_24,param_5,param_6);
  }
  uVar3 = 0;
  do {
    cVar1 = *(char *)(param_3 + uVar3);
    *param_2 = cVar1;
    uVar5 = auStack_24[0] & 0xff;
    if (((1 < uVar3) && (uVar5 = auStack_24[0] >> 8 & 0xff, 5 < (uVar3 & 0xff))) &&
       (uVar5 = auStack_24[0] >> 0x10 & 0xff, 9 < (uVar3 & 0xff))) {
      uVar5 = auStack_24[0] >> 0x18;
    }
    iVar4 = param_1;
    if ((DAT_00011208 & 0xf) == 1) {
      bVar2 = wifi_cali_offset;
      if (uVar3 < 2) {
        bVar2 = DAT_00011009;
      }
      uVar5 = uVar5 - bVar2 & 0xff;
      iVar4 = (int)((param_1 - (uint)bVar2) * 0x1000000) >> 0x18;
    }
    iVar6 = (uVar5 - DAT_0001121b) * 0x1000000;
    if (iVar6 >> 0x18 < (int)cVar1) {
      *param_2 = (char)((uint)iVar6 >> 0x18);
    }
    if (iVar4 < *param_2) {
      *param_2 = (char)iVar4;
    }
    uVar3 = uVar3 + 1;
    param_2 = param_2 + 1;
  } while (uVar3 != 0xe);
  return;
}

