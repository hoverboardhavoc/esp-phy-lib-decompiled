/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> ble_chan_trans
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint ble_chan_trans(uint param_1)

{
  if (param_1 == 0) {
    return 0x25;
  }
  if (param_1 == 0xc) {
    param_1 = 0x26;
  }
  else if (param_1 != 0x27) {
    if (param_1 < 0xc) {
      return param_1 - 1;
    }
    if (param_1 < 0x27) {
      return param_1 - 2;
    }
  }
  return param_1;
}

