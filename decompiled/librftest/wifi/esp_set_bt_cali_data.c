/*
 * Last changed at upstream commit 6e051981701aacebcbfe9147b2a1fec07d472829
 * https://github.com/espressif/esp-phy-lib/commit/6e051981701aacebcbfe9147b2a1fec07d472829
 * Upstream date: 2024-01-24 19:07:43 +0800
 * Upstream subject: fix ble tx 2m problem causing by phy_wifi_enable_set
 * Source: librftest -> wifi.o -> esp_set_bt_cali_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 esp_set_bt_cali_data(int *param_1)

{
  phy_current_level_set = (code)((byte)phy_current_level_set & 0xf | (byte)(*param_1 << 4));
  bt_txiq_cal = SUB41(param_1[1],0);
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

