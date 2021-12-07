/*
 * Last changed at upstream commit 2d89c532ccba0bb9988d1d1c6d719bbe1d8b65b8
 * https://github.com/espressif/esp-phy-lib/commit/2d89c532ccba0bb9988d1d1c6d719bbe1d8b65b8
 * Upstream date: 2021-12-07 14:34:50 +0800
 * Upstream subject: Update esp32c3 and esp32s3 phy lib and bb lib Fix the ble task watchdog timeout issue caused by phy enable when exit modem sleep.
 * Source: libphy -> phy_chip_v7_newrom.o -> ram_write_pll_cap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_write_pll_cap(uint param_1)

{
  (**(code **)(_g_phyFuns + 0x1b4))(0x62,1,1,param_1 & 0xff,*(code **)(_g_phyFuns + 0x1b4));
                    /* WARNING: Could not recover jumptable at 0x00010574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1bc))(0x62,1,2,4,4,param_1 >> 8);
  return;
}

