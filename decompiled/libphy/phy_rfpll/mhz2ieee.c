/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_rfpll.o -> mhz2ieee
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int mhz2ieee(uint param_1)

{
  char cVar1;
  
  if (param_1 != 0x9b4) {
    if (param_1 < 0x9b4) {
      cVar1 = (char)((int)(param_1 - 0x967) / 5);
    }
    else {
      cVar1 = (char)((int)(param_1 - 0x9d0) / 0x14) + '\x0f';
    }
    return (int)cVar1;
  }
  return 0xe;
}

