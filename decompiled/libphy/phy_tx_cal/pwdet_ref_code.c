/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_tx_cal.o -> pwdet_ref_code
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pwdet_ref_code(undefined1 param_1)

{
  start_tx_tone_step(1,0xe0,param_1,0,0,0);
  _DAT_600a0820 = _DAT_600a0820 & 0xffff0000;
  _txcal_debuge_mode = get_tone_sar_dout(4);
  _DAT_600a0820 = _DAT_600a0820 & 0xffff0000 | 0x5555;
  _DAT_00011036 = get_tone_sar_dout(4);
  _DAT_600a0820 = _DAT_600a0820 & 0xffff0000 | 0xaaaa;
  return;
}

