/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_tx_cal.o -> txiq_cal_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txiq_cal_init(int param_1)

{
  if (-1 < (int)(_set_txcap_reg << 0x11)) {
    txcal_debuge_mode();
    start_tx_tone_step(1,0x80,0x28,0,0,0);
    _DAT_00011064 = rfcal_txiq(0,param_1);
    if (param_1 == 0) {
      start_tx_tone_step(0,0x80,0,0,0,0);
      txcal_work_mode();
      _set_txcap_reg = _set_txcap_reg | 0x4000;
    }
  }
  return;
}

