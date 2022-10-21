/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
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
  
  uVar2 = _DAT_000110e0;
  uVar1 = _DAT_000110de;
  sVar3 = 0;
  if (_DAT_000110de <= (ushort)(param_1 + 0x28U)) {
    sVar3 = (param_1 + 0x28U) - _DAT_000110de;
  }
  *param_2 = sVar3;
  sVar3 = 0;
  if (uVar1 <= uVar2) {
    sVar3 = uVar2 - uVar1;
  }
  *param_3 = sVar3;
  return;
}

