/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_hw_freq.o -> get_freq_mem_param
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint get_freq_mem_param(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    uVar1 = 0;
    uVar3 = _DAT_600a00c8;
  }
  else {
    if (param_1 != 1) {
      uVar3 = _DAT_600a00cc >> 9 & 0xf;
      uVar1 = _DAT_600a00cc >> 0xd & 0xff;
      uVar2 = uVar3 * 2 + uVar1 & 0xff;
      goto _L8;
    }
    uVar1 = _DAT_600a00cc >> 0x1a;
    uVar3 = _DAT_600a00cc >> 0x17;
  }
  uVar3 = uVar3 & 7;
  uVar2 = 0;
_L8:
  return uVar1 | uVar3 << 8 | uVar2 << 0x10;
}

