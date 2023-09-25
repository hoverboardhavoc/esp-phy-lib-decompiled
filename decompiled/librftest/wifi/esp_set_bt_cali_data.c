/*
 * Last changed at upstream commit a7a0481e34fd4368aa15a143dfbd855015380fd4
 * https://github.com/espressif/esp-phy-lib/commit/a7a0481e34fd4368aa15a143dfbd855015380fd4
 * Upstream date: 2023-09-25 15:20:47 +0800
 * Upstream subject: phy_param_track_tot and phy_wifi_enable_set for all chips
 * Source: librftest -> wifi.o -> esp_set_bt_cali_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 esp_set_bt_cali_data(int *param_1)

{
  bt_bb_tx_cca_set = (code)((byte)bt_bb_tx_cca_set & 0xf | (byte)(*param_1 << 4));
  set_rx_gain_table = SUB41(param_1[1],0);
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

