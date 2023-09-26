/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> rf_test.o -> esp_chg_freqoff
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void esp_chg_freqoff(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char local_140 [144];
  char local_b0 [148];
  
  read_flash_init_para(param_2,local_b0);
  iVar4 = 0;
  pcVar3 = local_b0;
  do {
    pcVar2 = (char *)(&init_param_default + iVar4);
    iVar4 = iVar4 + 1;
    *pcVar2 = pcVar3[8];
    pcVar3 = pcVar3 + 1;
  } while (iVar4 != 0x80);
  cVar1 = esp_crc8(&init_param_default,0x7f);
  if ((uint)DAT_000120ef == (int)cVar1) {
    if (3 < init_param_default) {
      uVar5 = (param_1 * -0x9b4) / 1000 + 4 >> 3;
      DAT_000120da = (undefined1)uVar5;
      DAT_000120d9 = (uVar5 & 0xff) != 0;
      DAT_000120ef = esp_crc8(&init_param_default,0x7f);
      register_chipv7_phy_init_param(&init_param_default);
      chip_v7_set_chan_offset(0);
      iVar4 = 0;
      pcVar3 = local_b0;
      do {
        pcVar2 = (char *)(&init_param_default + iVar4);
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
      phy_printf("esp_chg_freqoff ok, %dppm, %d, %d, 0x%x\n",param_1,DAT_000120d9,DAT_000120da,
                 param_2);
      return;
    }
    pcVar3 = "phy init bin version error!must greater than v04 err_code=%4\n";
  }
  else {
    pcVar3 = "esp_chg_freqoff fail,init bin crc error! err_code=1\n";
  }
  phy_printf(pcVar3);
  return;
}

