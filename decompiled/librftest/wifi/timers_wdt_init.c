/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> timers_wdt_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void timers_wdt_init(undefined1 param_1,undefined1 param_2,undefined4 param_3)

{
  undefined4 uStack_14;
  
  uStack_14 = uStack_14 & 0xffff00c0 | 0x73f;
  rtc_wdt_unlock();
  set_rtc_wdt_stg_hold_len(param_1,param_3);
  set_rtc_wdt_stg_act(param_1,param_2);
  rtc_wdt_init(uStack_14);
  return;
}

