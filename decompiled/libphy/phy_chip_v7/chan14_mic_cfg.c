/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
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
    DAT_00012e64 = DAT_00012eb0;
  }
  else {
    _DAT_6001c400 = _DAT_6001c400 | 0x6000;
  }
  wifi_set_tx_gain(DAT_00012f94,0);
  return;
}

