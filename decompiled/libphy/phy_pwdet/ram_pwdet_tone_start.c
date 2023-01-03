/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_pwdet.o -> ram_pwdet_tone_start
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_pwdet_tone_start(void)

{
  _DAT_6000e000 = _DAT_6000e000 | 0x20000000;
  _DAT_600a0420 = _DAT_600a0420 | 0x40000;
  ets_delay_us(1);
  _DAT_600a0810 = _DAT_600a0810 & 0xfffffffe | 1;
  ets_delay_us(2);
  do {
  } while ((_DAT_600a0814 >> 0xe & 7) != 7);
  _DAT_600a0420 = _DAT_600a0420 & 0xfffbffff;
  return;
}

