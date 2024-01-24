/*
 * Last changed at upstream commit 2d319a382336cf0522ea4bb5a3fbd6701a8633c6
 * https://github.com/espressif/esp-phy-lib/commit/2d319a382336cf0522ea4bb5a3fbd6701a8633c6
 * Upstream date: 2024-01-24 19:07:44 +0800
 * Upstream subject: keep regs before sleep and after wakeup are same
 * Source: librftest -> wifi.o -> set_chan_freq_sub
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_chan_freq_sub(undefined1 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00011f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x14))(param_1,0,0);
  return;
}

