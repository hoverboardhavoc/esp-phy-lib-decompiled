/*
 * Last changed at upstream commit 2d319a382336cf0522ea4bb5a3fbd6701a8633c6
 * https://github.com/espressif/esp-phy-lib/commit/2d319a382336cf0522ea4bb5a3fbd6701a8633c6
 * Upstream date: 2024-01-24 19:07:44 +0800
 * Upstream subject: keep regs before sleep and after wakeup are same
 * Source: libbtbb -> bt_bb_v2.o -> coex_pti_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void coex_pti_print(void)

{
  phy_printf("COEX_CONF:0x%x\n",_DAT_60035084);
  phy_printf("COEX_WAIT0:0x%x\n",_DAT_60035098);
  phy_printf("COEX_WAIT1:0x%x\n",_DAT_6003509c);
  phy_printf("BT0x130:0x%x\n",_DAT_60031530);
  phy_printf("LE0x150:0x%x\n",_DAT_60031150);
  phy_printf("0x60031048:0x%x\n",_DAT_60031048);
  return;
}

