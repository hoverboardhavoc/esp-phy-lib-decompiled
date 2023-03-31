/*
 * Last changed at upstream commit 9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * https://github.com/espressif/esp-phy-lib/commit/9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * Upstream date: 2023-03-31 17:07:27 +0800
 * Upstream subject: update_for_rftest_20230331
 * Source: librftest -> wifi.o -> rf_cal_data_clear
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rf_cal_data_clear(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)&phy_param;
  do {
    *(undefined4 *)pcVar1 = 0;
    pcVar1 = pcVar1 + 4;
  } while (pcVar1 != phy_current_level_set);
  pcVar1 = (code *)&phy_chan_dc;
  do {
    *(undefined4 *)pcVar1 = 0;
    pcVar1 = pcVar1 + 4;
  } while (pcVar1 != tx_pwctrl_background);
  pcVar1 = (code *)&phy_rxrf_dc;
  do {
    *(undefined4 *)pcVar1 = 0;
    pcVar1 = pcVar1 + 4;
  } while (pcVar1 != set_rtc_wdt_stg_hold_len);
  _phy_rxbb_dc = 0;
  _spi_flash_read = 0;
  _esp_rom_spiflash_erase_sector = 0;
  _esp_rom_spiflash_write = 0;
  _DAT_60008034 = _DAT_60008034 & 0x7ffffff;
  _DAT_60008000 = _DAT_60008000 & 0xffffff7f;
  _DAT_6002609c = 0;
  return;
}

