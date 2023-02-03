/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_pwdet.o -> get_sar_sig_ref
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
  
  uVar2 = _DAT_0001100a;
  uVar1 = ___clzsi2;
  sVar3 = 0;
  if (___clzsi2 <= (ushort)(param_1 + 0x28U)) {
    sVar3 = (param_1 + 0x28U) - ___clzsi2;
  }
  *param_2 = sVar3;
  sVar3 = 0;
  if (uVar1 <= uVar2) {
    sVar3 = uVar2 - uVar1;
  }
  *param_3 = sVar3;
  return;
}

