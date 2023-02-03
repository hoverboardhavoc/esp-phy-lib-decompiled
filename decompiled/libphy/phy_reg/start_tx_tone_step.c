/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> start_tx_tone_step
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void start_tx_tone_step(int param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (-param_3 & 0xffU) << 10;
  uVar2 = (-param_6 & 0xffU) << 10;
  if ((int)(_DAT_600a0420 << 2) < 0) {
    _DAT_600a042c = (param_5 & 3) << 2 | _DAT_600a042c & 0xfffffff0 | param_2 & 3;
    _DAT_600a0420 =
         ((int)param_2 >> 2 | param_1 << 0x12) & 0xfffffffU | uVar1 | _DAT_600a0420 & 0xf0000000;
    _DAT_600a0424 =
         ((int)param_5 >> 2 | param_4 << 0x12) & 0xfffffffU | uVar2 | _DAT_600a0424 & 0xf0000000;
  }
  else {
    _DAT_600a0420 = (param_2 | param_1 << 0x12) & 0xfffffff | uVar1 | _DAT_600a0420 & 0xf0000000;
    _DAT_600a0424 = (param_5 | param_4 << 0x12) & 0xfffffff | uVar2 | _DAT_600a0424 & 0xf0000000;
  }
  return;
}

