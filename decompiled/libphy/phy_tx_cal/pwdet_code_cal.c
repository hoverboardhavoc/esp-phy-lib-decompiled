/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_tx_cal.o -> pwdet_code_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pwdet_code_cal(void)

{
  if (-1 < (int)(_set_txcap_reg << 7)) {
    txcal_debuge_mode();
    pwdet_ref_code(0x50);
    txcal_work_mode();
    _set_txcap_reg = _set_txcap_reg | 0x1000000;
  }
  return;
}

