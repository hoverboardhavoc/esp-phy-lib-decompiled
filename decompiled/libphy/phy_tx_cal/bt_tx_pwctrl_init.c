/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_tx_cal.o -> bt_tx_pwctrl_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_tx_pwctrl_init(void)

{
  if (-1 < (int)(_set_txcap_reg << 0x10)) {
    txcal_debuge_mode();
    pwdet_ref_code(0);
    tx_pwctrl_init_cal(1,&phy_param,&phy_param,&phy_param);
    txcal_work_mode();
    _set_txcap_reg = _set_txcap_reg | 0x8000;
  }
  return;
}

