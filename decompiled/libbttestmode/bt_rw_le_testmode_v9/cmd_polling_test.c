/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> cmd_polling_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void cmd_polling_test(void)

{
  DAT_00013954 = 9;
  arga = 8;
  argb = 6;
  DAT_0001395c = 7;
  my_samp = 0x25;
  DAT_000139d0 = 0x62;
  cmd_polling_start(1000000);
  cmd_polling_attach(1,0,cmd_polling_test0,3);
  cmd_polling_attach(0,0,cmd_polling_test1,0);
  cmd_polling_attach(0,0,cmd_polling_test2,&my_samp);
  cmd_polling_attach(1,1,cmd_polling_test0,9);
  cmd_polling_attach(0,0,cmd_polling_test3,0);
  return;
}

