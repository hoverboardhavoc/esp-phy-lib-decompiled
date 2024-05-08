/*
 * Last changed at upstream commit 792ba5917ee8191e7264143e69f9e6f8c1c0eacc
 * https://github.com/espressif/esp-phy-lib/commit/792ba5917ee8191e7264143e69f9e6f8c1c0eacc
 * Upstream date: 2024-05-08 10:58:27 +0800
 * Upstream subject: update c3 s3 c6 libphy fix coex reset and bug
 * Source: librftest -> wifi.o -> set_chan_freq_sub
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_chan_freq_sub(undefined1 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00011f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x14))(param_1,0,0);
  return;
}

