/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_pbus.o -> pbus_xpd_rx_off
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pbus_xpd_rx_off(void)

{
  pbus_force_test(0,1,0);
  pbus_force_test(1,1,0);
  do {
  } while (_DAT_600a0910 < 0);
  _DAT_600a0904 = _DAT_600a0904 & 0xfffe0001 | 0x10004;
  return;
}

