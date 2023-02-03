/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_pbus.o -> txcal_debuge_mode
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txcal_debuge_mode(void)

{
  pbus_force_mode_part_0();
  pbus_xpd_tx_on();
  pbus_set_dco(&phy_param);
  set_txclk_en(1);
  ets_delay_us(2);
  en_pwdet();
  return;
}

