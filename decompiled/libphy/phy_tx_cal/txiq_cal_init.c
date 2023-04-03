/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_tx_cal.o -> txiq_cal_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txiq_cal_init(int param_1)

{
  if (-1 < (int)(_pkdet_vol_start << 0x11)) {
    txcal_debuge_mode();
    start_tx_tone_step(1,0x80,0x28,0,0,0);
    if (param_1 == 0) {
      start_tx_tone_step(0,0x80,0,0,0,0);
      txcal_work_mode();
      _pkdet_vol_start = _pkdet_vol_start | 0x4000;
    }
  }
  return;
}

