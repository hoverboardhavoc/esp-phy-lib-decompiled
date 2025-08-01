/*
 * Last changed at upstream commit 1d4cd3aafa244a0adf5891f058b3519bc970d644
 * https://github.com/espressif/esp-phy-lib/commit/1d4cd3aafa244a0adf5891f058b3519bc970d644
 * Upstream date: 2025-08-01 19:50:02 +0800
 * Upstream subject: 1. fix C5ECO2 signaling test power 2. fix C5ECO2/C6ECO3/H2ECO5 coex problem
 * Source: libbttestmode -> ble_tx_rx_test.o -> get_source_flash_freq_err
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_source_flash_freq_err(uint *param_1)

{
  char cStack_14;
  char cStack_13;
  byte bStack_12;
  byte bStack_11;
  
  if (ble_freq_est != '\0') {
    spi_flash_attach(0,0);
    esp_rom_spiflash_read(0x80000,&cStack_14,4);
    if ((cStack_14 == '\x11') && (cStack_13 == '\"')) {
      *param_1 = (uint)bStack_12;
      param_1[1] = (uint)bStack_11;
    }
    return;
  }
  return;
}

