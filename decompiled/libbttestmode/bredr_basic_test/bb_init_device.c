/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bredr_basic_test.o -> bb_init_device
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 * bb_init_device(int param_1)

{
  device_table._92_4_ = device_table._92_4_ & 0xf0000000 | 0xfffffff;
  device_table._124_4_ = 0x55555555;
  device_table._128_4_ = 0x55555555;
  device_table._132_4_ = device_table._132_4_ & 0xff800000 | 0x555555;
  if (param_1 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfff00000 | 0x46c4;
  }
  return device_table;
}

