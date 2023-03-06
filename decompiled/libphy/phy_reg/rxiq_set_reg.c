/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_reg.o -> rxiq_set_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int rxiq_set_reg(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0x3f;
  if (param_1 != 0) {
    iVar2 = 0x1f;
  }
  uVar1 = get_data_sat(-iVar2);
  if (param_1 == 0) {
    uVar3 = (uVar1 & 0x7f) << 0x16;
    iVar2 = -0x1fc00000;
  }
  else {
    uVar3 = (uVar1 & 0x3f) << 0x10;
    iVar2 = -0x3f0000;
  }
  _DAT_600a0450 = uVar3 | _DAT_600a0450 & iVar2 - 1U;
  return (int)(char)uVar1;
}

