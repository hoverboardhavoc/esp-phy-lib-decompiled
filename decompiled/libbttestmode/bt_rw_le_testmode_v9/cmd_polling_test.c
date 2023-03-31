/*
 * Last changed at upstream commit 9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * https://github.com/espressif/esp-phy-lib/commit/9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * Upstream date: 2023-03-31 17:07:27 +0800
 * Upstream subject: update_for_rftest_20230331
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> cmd_polling_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void cmd_polling_test(void)

{
  DAT_0001393c = 9;
  arga = 8;
  argb = 6;
  DAT_00013944 = 7;
  my_samp = 0x25;
  DAT_000139b8 = 0x62;
  cmd_polling_start(1000000);
  cmd_polling_attach(1,0,cmd_polling_test0,3);
  cmd_polling_attach(0,0,cmd_polling_test1,0);
  cmd_polling_attach(0,0,cmd_polling_test2,&my_samp);
  cmd_polling_attach(1,1,cmd_polling_test0,9);
  cmd_polling_attach(0,0,cmd_polling_test3,0);
  return;
}

