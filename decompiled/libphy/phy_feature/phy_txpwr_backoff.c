/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_feature.o -> phy_txpwr_backoff
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_txpwr_backoff(int param_1,char param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)(param_1 + 2);
  do {
    pcVar2 = pcVar1 + 1;
    *pcVar1 = *pcVar1 + param_2;
    pcVar1 = pcVar2;
  } while (pcVar2 != (char *)(param_1 + 0x10));
  return;
}

