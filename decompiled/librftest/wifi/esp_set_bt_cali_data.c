/*
 * Last changed at upstream commit 792ba5917ee8191e7264143e69f9e6f8c1c0eacc
 * https://github.com/espressif/esp-phy-lib/commit/792ba5917ee8191e7264143e69f9e6f8c1c0eacc
 * Upstream date: 2024-05-08 10:58:27 +0800
 * Upstream subject: update c3 s3 c6 libphy fix coex reset and bug
 * Source: librftest -> wifi.o -> esp_set_bt_cali_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 esp_set_bt_cali_data(int *param_1)

{
  adc_check_for_module_by_gpio_out0 =
       (code)((byte)adc_check_for_module_by_gpio_out0 & 0xf | (byte)(*param_1 << 4));
  txiq_cal_init = SUB41(param_1[1],0);
  DAT_000181c9 = (byte)param_1[2];
  DAT_000181ca = (byte)param_1[3];
  DAT_000181cb = (byte)param_1[4];
  if ((*param_1 << 4 & 0xf0U) == 0x10) {
    rom1_tsens_temp_read();
    _DAT_0001825e = _DAT_000180e2;
  }
  if (((DAT_000181c9 < 0x29) && (DAT_000181ca < 0x29)) && (DAT_000181cb < 0x29)) {
    return 0;
  }
  phy_printf("err_code=%d,bt_atten out or range\n!",1);
  return 1;
}

