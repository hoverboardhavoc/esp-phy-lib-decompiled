/*
 * Last changed at upstream commit 2d319a382336cf0522ea4bb5a3fbd6701a8633c6
 * https://github.com/espressif/esp-phy-lib/commit/2d319a382336cf0522ea4bb5a3fbd6701a8633c6
 * Upstream date: 2024-01-24 19:07:44 +0800
 * Upstream subject: keep regs before sleep and after wakeup are same
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> FUN_00012c52
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void FUN_00012c52(int param_1,int param_2)

{
  FUN_00012596(param_1 + 0xb,param_2 + 0xf);
  return;
}

