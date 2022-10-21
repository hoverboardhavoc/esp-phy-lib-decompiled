/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tx_gain.o -> rom_txbbgain_to_index
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 rom_txbbgain_to_index(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0x80) {
    uVar2 = 1;
  }
  else {
    if (param_1 < 0x81) {
      uVar1 = 0x20;
      uVar2 = 3;
    }
    else {
      if (param_1 == 0xa0) {
        return 4;
      }
      uVar1 = 0x100;
      uVar2 = 2;
    }
    if (param_1 != uVar1) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

