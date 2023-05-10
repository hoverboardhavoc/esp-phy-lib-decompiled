/*
 * Last changed at upstream commit a83c216dd2de6418cb26ee42d80433b0badd4aea
 * https://github.com/espressif/esp-phy-lib/commit/a83c216dd2de6418cb26ee42d80433b0badd4aea
 * Upstream date: 2023-05-10 18:09:34 +0800
 * Upstream subject: esp32c3: update libphy for ble 1M/2M switch
 * Source: librftest -> wifi.o -> esp_set_bt_cali_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 esp_set_bt_cali_data(int *param_1)

{
  ESP_TEST_GPIO = (code)((byte)ESP_TEST_GPIO & 0xf | (byte)(*param_1 << 4));
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

