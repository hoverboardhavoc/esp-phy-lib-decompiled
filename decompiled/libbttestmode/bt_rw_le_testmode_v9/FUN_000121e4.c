/*
 * Last changed at upstream commit 6e051981701aacebcbfe9147b2a1fec07d472829
 * https://github.com/espressif/esp-phy-lib/commit/6e051981701aacebcbfe9147b2a1fec07d472829
 * Upstream date: 2024-01-24 19:07:43 +0800
 * Upstream subject: fix ble tx 2m problem causing by phy_wifi_enable_set
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> FUN_000121e4
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000121e4(void)

{
  FUN_000121d8();
  FUN_000121dc();
  FUN_000121e0();
  FUN_000121e4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

