/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> chan14_mic_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void chan14_mic_cfg(int param_1)

{
  if (param_1 == 1) {
    _DAT_6001c400 = _DAT_6001c400 & 0xffff9fff | 0x2000;
    DAT_00012dec = DAT_00012e38;
  }
  else {
    _DAT_6001c400 = _DAT_6001c400 | 0x6000;
  }
  wifi_set_tx_gain(DAT_00012f1c,0);
  return;
}

