/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
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
  _start_tx_tone_step = get_tone_sar_dout(4);
  _DAT_600a0820 = 0x5555;
  _DAT_0001100a = get_tone_sar_dout(4);
  _DAT_600a0820 = 0xaaaa;
  _txcal_work_mode = get_tone_sar_dout(4);
  return;
}

