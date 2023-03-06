/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_tx_cal.o -> pwdet_ref_code
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pwdet_ref_code(void)

{
  _DAT_600a0820 = 0;
  _txcal_debuge_mode = get_tone_sar_dout(4);
  _DAT_600a0820 = 0x5555;
  _DAT_00011036 = get_tone_sar_dout(4);
  _DAT_600a0820 = 0xaaaa;
  _txcal_work_mode = get_tone_sar_dout(4);
  return;
}

