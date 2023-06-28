/*
 * Last changed at upstream commit 97a141a563a4b752f5943d0049aa691038d08613
 * https://github.com/espressif/esp-phy-lib/commit/97a141a563a4b752f5943d0049aa691038d08613
 * Upstream date: 2023-06-28 11:18:04 +0800
 * Upstream subject: h2: optimize track pll when temperature changes. fix ramp up and ramp down timing.
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
  memcpy(auStack_48,&DAT_0001032c,0x1a);
  memcpy(auStack_2c,&DAT_00010348,0x1a);
  bt_get_tx_gain(&phy_param,(int)DAT_00011064,
                 (int)(((uint)DAT_00011068 - (uint)DAT_00011082) * 0x1000000) >> 0x18,auStack_64,
                 auStack_48,auStack_2c,param_2,param_1);
  return;
}

