/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_pbus.o -> pbus_set_dco
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pbus_set_dco(undefined2 *param_1)

{
  pbus_force_test(2,1,*param_1);
  do {
  } while (_DAT_600a0910 < 0);
  _DAT_600a0904 = ((ushort)param_1[1] & 0x7ff) << 6 | 0x10008 | _DAT_600a0904 & 0xfffe0001;
  return;
}

