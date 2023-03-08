/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> esp_set_bt_cali_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 esp_set_bt_cali_data(int *param_1)

{
  dig_gpio_in = (code)((byte)dig_gpio_in & 0xf | (byte)(*param_1 << 4));
  tx_pwctrl_init = SUB41(param_1[1],0);
  DAT_000181c5 = (byte)param_1[2];
  DAT_000181c6 = (byte)param_1[3];
  DAT_000181c7 = (byte)param_1[4];
  if ((*param_1 << 4 & 0xf0U) == 0x10) {
    ram_tsens_temp_read();
    _DAT_0001825a = _DAT_000180de;
  }
  if (((DAT_000181c5 < 0x29) && (DAT_000181c6 < 0x29)) && (DAT_000181c7 < 0x29)) {
    return 0;
  }
  phy_printf("err_code=%d,bt_atten out or range\n!",1);
  return 1;
}

