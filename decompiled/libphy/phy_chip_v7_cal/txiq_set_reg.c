/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7_cal.o -> txiq_set_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txiq_set_reg(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0x1f;
    if (0x1f < (int)param_1) {
      param_1 = 0x1f;
      goto _L39;
    }
  }
  else {
    iVar1 = 0xf;
    if (0xf < (int)param_1) {
      param_1 = 0xf;
      goto _L41;
    }
  }
  if ((int)param_1 < -iVar1) {
    param_1 = iVar1 * -0x1000000 >> 0x18;
  }
  if (param_2 != 0) {
_L41:
    _DAT_6000607c = _DAT_6000607c & 0xffffffe0 | param_1 & 0x1f;
    return;
  }
_L39:
  _DAT_6000607c = (param_1 & 0x3f) << 5 | _DAT_6000607c & 0xfffff81f;
  return;
}

