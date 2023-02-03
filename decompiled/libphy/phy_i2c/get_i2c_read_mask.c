/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_i2c.o -> get_i2c_read_mask
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined2 get_i2c_read_mask(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 0x61U & 0xff;
  if (uVar1 < 0xd) {
    return *(undefined2 *)(&_LANCHOR0 + uVar1 * 2);
  }
  return 0;
}

