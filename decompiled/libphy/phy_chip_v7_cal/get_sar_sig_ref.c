/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> get_sar_sig_ref
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_sar_sig_ref(short param_1,short *param_2,short *param_3)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  
  uVar2 = _DAT_000130e4;
  uVar1 = _DAT_000130e2;
  sVar3 = 0;
  if (_DAT_000130e2 <= (ushort)(param_1 + 0x28U)) {
    sVar3 = (param_1 + 0x28U) - _DAT_000130e2;
  }
  *param_2 = sVar3;
  sVar3 = 0;
  if (uVar1 <= uVar2) {
    sVar3 = uVar2 - uVar1;
  }
  *param_3 = sVar3;
  return;
}

