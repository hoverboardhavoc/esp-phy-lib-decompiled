/*
 * Last changed at upstream commit a83c216dd2de6418cb26ee42d80433b0badd4aea
 * https://github.com/espressif/esp-phy-lib/commit/a83c216dd2de6418cb26ee42d80433b0badd4aea
 * Upstream date: 2023-05-10 18:09:34 +0800
 * Upstream subject: esp32c3: update libphy for ble 1M/2M switch
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
  } while (pcVar1 != ate_rxdc_remain_check);
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

