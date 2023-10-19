/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> open_tx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void open_tx(void)

{
  pbus_debugmode();
  pbus_force_test(0,1,0xc);
  pbus_force_test(1,1,0x86);
  pbus_force_test(1,2,0);
  pbus_force_test(2,1,0x80);
  pbus_force_test(2,2,0x80);
  pbus_force_test(3,1,0x7f);
  pbus_force_test(3,2,0xf);
  return;
}

