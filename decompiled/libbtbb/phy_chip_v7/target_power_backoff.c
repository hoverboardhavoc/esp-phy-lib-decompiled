/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> target_power_backoff
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void target_power_backoff(char param_1)

{
  chip7_sleep_params[0xb6] = (chip7_sleep_params[0xb6] - target_power_backoff_qdb) + param_1;
  target_power_backoff_qdb = param_1;
  set_chan_dig_gain(chip7_sleep_params[0x51]);
  return;
}

