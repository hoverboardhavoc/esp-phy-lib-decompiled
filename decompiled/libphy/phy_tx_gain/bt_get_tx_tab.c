/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_tx_gain.o -> bt_get_tx_tab
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_get_tx_tab(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_64 [28];
  undefined1 auStack_48 [28];
  undefined1 auStack_2c [32];
  
  memcpy(auStack_64,&_LANCHOR0,0x1a);
  memcpy(auStack_48,&DAT_00010320,0x1a);
  memcpy(auStack_2c,&DAT_0001033c,0x1a);
  bt_get_tx_gain(&phy_param,(int)DAT_00011064,(int)DAT_00011068,auStack_64,auStack_48,auStack_2c,
                 param_2,param_1);
  return;
}

