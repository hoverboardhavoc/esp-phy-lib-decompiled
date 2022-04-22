/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7_cal.o -> txcal_work_mode
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txcal_work_mode(void)

{
  stop_tx_tone(1);
  (**(code **)(_g_phyFuns + 0x50))(0,*(code **)(_g_phyFuns + 0x50));
  (**(code **)(_g_phyFuns + 0x1e4))(0,*(code **)(_g_phyFuns + 0x1e4));
                    /* WARNING: Could not recover jumptable at 0x00010394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1d8))();
  return;
}

