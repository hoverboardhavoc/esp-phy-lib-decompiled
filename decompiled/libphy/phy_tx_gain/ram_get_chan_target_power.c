/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
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
  char cVar5;
  undefined4 auStack_24 [4];
  
  auStack_24[0] = 0x64646464;
  if (param_4 == 1) {
    ram_get_rate_fcc_index(auStack_24,param_5,param_6);
  }
  uVar3 = 0;
  do {
    cVar1 = *(char *)(param_3 + uVar3);
    *param_2 = cVar1;
    cVar5 = (char)auStack_24[0];
    if (((1 < uVar3) && (cVar5 = (char)((uint)auStack_24[0] >> 8), 5 < (uVar3 & 0xff))) &&
       (cVar5 = (char)((uint)auStack_24[0] >> 0x10), 9 < (uVar3 & 0xff))) {
      cVar5 = (char)((uint)auStack_24[0] >> 0x18);
    }
    iVar4 = param_1;
    if ((DAT_00011208 & 0xf) == 1) {
      bVar2 = wifi_cali_offset;
      if (uVar3 < 2) {
        bVar2 = DAT_00011009;
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

