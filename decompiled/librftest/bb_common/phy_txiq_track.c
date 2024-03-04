/*
 * Last changed at upstream commit 603b69583635ffcedf2a5e1d0f70da77edf82d10
 * https://github.com/espressif/esp-phy-lib/commit/603b69583635ffcedf2a5e1d0f70da77edf82d10
 * Upstream date: 2024-03-04 14:31:40 +0800
 * Upstream subject: feat: add esp32c5 beta3 support wifi
 * Source: librftest -> bb_common.o -> phy_txiq_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_txiq_track(void)

{
  if (fcc_mode_sel == '\0') {
    if (999999 < (uint)(_DAT_600ad000 - tx_temp_time)) {
      if (((phy_track_num < 6) && ((phy_track_num & 3) == 0)) || ((phy_track_num & 0x1f) == 0)) {
        txiq_cal_init(DAT_00013056,1);
        if (phy_tx_pwr_print_en != '\0') {
          phy_printf("txiq: %d,%d %d,",_DAT_0001313c,(int)DAT_000130c0,(int)DAT_000130c1);
        }
      }
      phy_track_num = phy_track_num + 1;
      tx_temp_time = _DAT_600ad000;
    }
    return;
  }
  return;
}

