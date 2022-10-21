/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_init.o -> phy_get_mac_addr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_get_mac_addr(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = _DAT_60008848;
  uVar1 = _DAT_60008844;
  param_1[5] = (char)_DAT_60008844;
  *param_1 = (char)((uint)uVar2 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x18);
  param_1[1] = (char)uVar2;
  param_1[3] = (char)((uint)uVar1 >> 0x10);
  param_1[4] = (char)((uint)uVar1 >> 8);
  param_1[6] = (char)((uint)uVar2 >> 0x18);
  param_1[7] = (char)((uint)uVar2 >> 0x10);
  return;
}

