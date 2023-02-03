/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> rxiq_set_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rxiq_set_reg(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    iVar1 = 0x1f;
    if ((int)param_1 < 0x20) {
_L38:
      if ((int)param_1 < -iVar1) {
        param_1 = iVar1 * -0x1000000 >> 0x18;
      }
      if (param_2 != 0) goto _L37;
    }
    else {
      param_1 = 0x1f;
    }
    uVar2 = (param_1 & 0x7f) << 0x16;
    iVar1 = -0x1fc00000;
  }
  else {
    iVar1 = 0xf;
    if ((int)param_1 < 0x10) goto _L38;
    param_1 = 0xf;
_L37:
    uVar2 = (param_1 & 0x3f) << 0x10;
    iVar1 = -0x3f0000;
  }
  _DAT_600a0450 = uVar2 | _DAT_600a0450 & iVar1 - 1U;
  return;
}

