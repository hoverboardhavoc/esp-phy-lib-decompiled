/*
 * Last changed at upstream commit b7095b90157d98f116ba43c35b12d51192dc91c8
 * https://github.com/espressif/esp-phy-lib/commit/b7095b90157d98f116ba43c35b12d51192dc91c8
 * Upstream date: 2021-10-12 21:50:40 +0800
 * Upstream subject: Update libphy and libbb
 * Source: libphy -> phy_chip_v7.o -> get_temp_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_temp_init(void)

{
  tsens_temp_read();
  DAT_00012e9c = DAT_00012e9a;
  if (DAT_00012fe0 == '\x11') {
    DAT_00012e9c = _DAT_00012fe8;
  }
  _DAT_00012e9e = DAT_00012e9c;
  return;
}

