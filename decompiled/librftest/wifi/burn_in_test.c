/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> burn_in_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void burn_in_test(void)

{
  int iVar1;
  
  lp_wdt_reset_sys(0x5ffff);
  iVar1 = rtc_reset_cause();
  if (iVar1 == 9) {
    _DAT_600b1000 = _DAT_600b1000 + 1;
  }
  else if (iVar1 == 0x12) {
    _DAT_600b1004 = _DAT_600b1004 + 1;
  }
  do {
    lp_wdt_feed();
    dig_gpio_out(0xe,1,3);
    phy_printf("\nnew loop begin: %d, %d\n\n",_DAT_600b1000,_DAT_600b1004);
    ble_tx(10,0x25,0x35,0,1,10,0,500);
    dig_gpio_out(0xe,0,3);
    phy_init();
    iVar1 = GetStopCmd();
  } while (iVar1 != 0);
  return;
}

