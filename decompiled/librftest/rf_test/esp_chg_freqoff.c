/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
 * Source: librftest -> rf_test.o -> esp_chg_freqoff
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void esp_chg_freqoff(int param_1,undefined4 param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char local_140 [144];
  char local_b0 [152];
  
  read_flash_init_para(param_2,local_b0);
  iVar4 = 0;
  pcVar3 = local_b0;
  do {
    pcVar2 = &init_param_default + iVar4;
    iVar4 = iVar4 + 1;
    *pcVar2 = pcVar3[8];
    pcVar3 = pcVar3 + 1;
  } while (iVar4 != 0x80);
  uVar1 = esp_crc8(&init_param_default,0x7f);
  if (DAT_000120e7 == uVar1) {
    uVar1 = (param_1 * -0x9b4) / 1000 + 4 >> 3;
    DAT_000120b4 = (undefined1)uVar1;
    DAT_000120b3 = (uVar1 & 0xff) != 0;
    DAT_000120e7 = esp_crc8(&init_param_default,0x7f);
    register_chipv7_phy_init_param(&init_param_default);
    chip_v7_set_chan_offset(0);
    iVar4 = 0;
    pcVar3 = local_b0;
    do {
      pcVar2 = &init_param_default + iVar4;
      iVar4 = iVar4 + 1;
      pcVar3[8] = *pcVar2;
      pcVar3 = pcVar3 + 1;
    } while (iVar4 != 0x80);
    write_flash_init_para(param_2,local_b0);
    read_flash_init_para(param_2,local_140);
    iVar4 = 0;
    do {
      if (local_b0[iVar4] != local_140[iVar4]) {
        phy_printf("esp_chg_freqoff fail, %dppm, 0x%x,err_code=2\n",param_1,param_2);
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x90);
    phy_printf("esp_chg_freqoff ok, %dppm, %d, %d, 0x%x\n",param_1,DAT_000120b3,DAT_000120b4,param_2
              );
  }
  else {
    phy_printf("esp_chg_freqoff fail,init bin crc error! err_code=1\n");
  }
  return;
}

