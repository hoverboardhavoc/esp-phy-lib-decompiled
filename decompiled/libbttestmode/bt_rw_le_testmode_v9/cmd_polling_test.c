/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> cmd_polling_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void cmd_polling_test(void)

{
  DAT_000137dc = 9;
  arga = 8;
  argb = 6;
  DAT_000137e4 = 7;
  my_samp = 0x25;
  DAT_0001384c = 0x62;
  cmd_polling_start(1000000);
  cmd_polling_attach(1,0,cmd_polling_test0,3);
  cmd_polling_attach(0,0,cmd_polling_test1,0);
  cmd_polling_attach(0,0,cmd_polling_test2,&my_samp);
  cmd_polling_attach(1,1,cmd_polling_test0,9);
  cmd_polling_attach(0,0,cmd_polling_test3,0);
  return;
}

