/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
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
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfff00000 | 0x46c1;
  }
  return device_table;
}

