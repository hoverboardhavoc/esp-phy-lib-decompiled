/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_tx_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_v2_tx_set(uint param_1)

{
  _DAT_600a2018 = _DAT_600a2018 & 0xffff0000 | 0x2801;
  _DAT_600a2170 = _DAT_600a2170 & 0xffff0000 | param_1 & 0xffff;
  _DAT_600a200c = _DAT_600a200c & 0xfffff0ff | 0x100;
  set_gauss_coeff_1m();
  _DAT_600a20f0 = _DAT_600a20f0 & 0xff | 0x149100;
  _DAT_600a20f4 = 0x9fac0760;
  return;
}

