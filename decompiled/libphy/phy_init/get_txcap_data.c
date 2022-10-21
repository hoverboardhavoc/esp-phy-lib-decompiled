/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_init.o -> get_txcap_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_txcap_data(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(DAT_00010f2a >> 2);
  if (2 < uVar1) {
    uVar1 = 2;
  }
  iVar2 = uVar1 * 3;
  DAT_00010df5 = DAT_00010df5 & 0xf0 | *(byte *)((int)&DAT_00010e90 + iVar2);
  DAT_00010df6 = *(char *)((int)&DAT_00010e90 + iVar2 + 2) << 4 |
                 *(byte *)((int)&DAT_00010e90 + iVar2 + 1);
  return;
}

