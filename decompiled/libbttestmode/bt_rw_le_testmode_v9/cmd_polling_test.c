/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> cmd_polling_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void cmd_polling_test(void)

{
  DAT_000137e4 = 9;
  arga = 8;
  argb = 6;
  DAT_000137ec = 7;
  my_samp = 0x25;
  DAT_00013854 = 0x62;
  cmd_polling_start(1000000);
  cmd_polling_attach(1,0,cmd_polling_test0,3);
  cmd_polling_attach(0,0,cmd_polling_test1,0);
  cmd_polling_attach(0,0,cmd_polling_test2,&my_samp);
  cmd_polling_attach(1,1,cmd_polling_test0,9);
  cmd_polling_attach(0,0,cmd_polling_test3,0);
  return;
}

