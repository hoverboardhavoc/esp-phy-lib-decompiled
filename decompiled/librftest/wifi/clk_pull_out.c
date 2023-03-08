/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> clk_pull_out
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clk_pull_out(uint param_1)

{
  ets_delay_us(5000);
  _DAT_60009000 = _DAT_60009000 & 0xfffffff0 | param_1 & 0xf;
  phy_printf("check PIN CTRL = 0x%x\n",_DAT_60009000);
  ets_delay_us(5000);
  return;
}

