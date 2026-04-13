/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_le_v9_adv_service_stop
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_v9_adv_service_stop(void)

{
  rf_rw_v9_le_disable();
  _DAT_60031000 = _DAT_60031000 | 0x80000000;
  _DAT_60009000 = _DAT_60009000 & 0x7fffffff;
  _DAT_6000907c = _DAT_6000907c | 1;
  phy_printf("LE ADV STOP!\n");
  return;
}

