/*
 * Last changed at upstream commit 7bdaf7da843d762451b59947318cd2c6cf733855
 * https://github.com/espressif/esp-phy-lib/commit/7bdaf7da843d762451b59947318cd2c6cf733855
 * Upstream date: 2023-07-27 11:33:55 +0800
 * Upstream subject: fix c3 ble tx bug
 * Source: librftest -> wifi.o -> force_txtone
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void force_txtone(undefined4 param_1,undefined2 param_2)

{
  (**(code **)(_g_phyFuns + 200))(1,*(code **)(_g_phyFuns + 200));
  ets_delay_us(3);
  start_tx_tone(1,0,param_1,0,0,0);
  ets_delay_us(param_2);
  stop_tx_tone(1);
                    /* WARNING: Could not recover jumptable at 0x00011f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 200))(0);
  return;
}

