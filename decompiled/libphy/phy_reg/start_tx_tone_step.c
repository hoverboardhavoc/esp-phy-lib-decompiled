/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_reg.o -> start_tx_tone_step
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void start_tx_tone_step(int param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6)

{
  _DAT_600a0420 =
       (-param_3 & 0xffU) << 10 | (param_2 | param_1 << 0x12) & 0xfffffff |
       _DAT_600a0420 & 0xf0000000;
  _DAT_600a0424 =
       (-param_6 & 0xffU) << 10 | (param_5 | param_4 << 0x12) & 0xfffffff |
       _DAT_600a0424 & 0xf0000000;
  return;
}

