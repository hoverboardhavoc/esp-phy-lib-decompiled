/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> wifi_agc_sat_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void wifi_agc_sat_gain(undefined4 param_1)

{
  DAT_600123a9 = (char)param_1;
  DAT_600123aa = (undefined1)((uint)param_1 >> 8);
  DAT_600123ab = (undefined1)((uint)param_1 >> 0x10);
  DAT_600123ac = (undefined1)((uint)param_1 >> 0x18);
  DAT_60012459 = (char)param_1;
  DAT_6001245a = DAT_600123aa;
  DAT_6001245b = DAT_600123ab;
  DAT_6001245c = DAT_600123ac;
  return;
}

