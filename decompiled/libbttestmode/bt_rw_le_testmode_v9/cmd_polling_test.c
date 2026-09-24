/*
 * Last changed at upstream commit 20f1db053a0e6cb9f1c09d255c43bf42483041d0
 * https://github.com/espressif/esp-phy-lib/commit/20f1db053a0e6cb9f1c09d255c43bf42483041d0
 * Upstream date: 2026-09-24 11:57:44 +0800
 * Upstream subject: fix S31 bod rst
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> cmd_polling_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void cmd_polling_test(void)

{
  DAT_000137c8 = 9;
  arga = 8;
  argb = 6;
  DAT_000137d0 = 7;
  my_samp = 0x25;
  DAT_00013838 = 0x62;
  cmd_polling_start(1000000);
  cmd_polling_attach(1,0,cmd_polling_test0,3);
  cmd_polling_attach(0,0,cmd_polling_test1,0);
  cmd_polling_attach(0,0,cmd_polling_test2,&my_samp);
  cmd_polling_attach(1,1,cmd_polling_test0,9);
  cmd_polling_attach(0,0,cmd_polling_test3,0);
  return;
}

