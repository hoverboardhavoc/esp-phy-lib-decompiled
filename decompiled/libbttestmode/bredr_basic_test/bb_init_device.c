/*
 * Last changed at upstream commit 20f1db053a0e6cb9f1c09d255c43bf42483041d0
 * https://github.com/espressif/esp-phy-lib/commit/20f1db053a0e6cb9f1c09d255c43bf42483041d0
 * Upstream date: 2026-09-24 11:57:44 +0800
 * Upstream subject: fix S31 bod rst
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
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfff00000 | 0x46d0;
  }
  return device_table;
}

