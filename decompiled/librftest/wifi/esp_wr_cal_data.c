/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> esp_wr_cal_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void esp_wr_cal_data(uint param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 local_818 [8];
  undefined1 auStack_810 [4];
  undefined1 auStack_80c [2044];
  
  read_macaddr_from_otp(local_818);
  iVar4 = 0;
  puVar3 = auStack_810;
  do {
    puVar2 = local_818 + iVar4;
    iVar4 = iVar4 + 1;
    puVar3[4] = *puVar2;
    puVar3 = puVar3 + 1;
  } while (iVar4 != 6);
  rf_cal_data_backup(auStack_810);
  uVar1 = phy_get_rf_cal_version();
  phy_rfcal_data_check(0,auStack_810,init_param_default,uVar1);
  esp_rom_spiflash_erase_sector(param_1 >> 0xc);
  esp_rom_spiflash_write(param_1,auStack_810,0x800);
  phy_printf("write rf_cal_data done\n");
  return;
}

