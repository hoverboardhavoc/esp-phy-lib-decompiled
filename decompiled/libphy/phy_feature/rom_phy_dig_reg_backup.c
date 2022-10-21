/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_feature.o -> rom_phy_dig_reg_backup
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 rom_phy_dig_reg_backup(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    _DAT_6001cd0c = *param_2;
    _DAT_6001cc0c = param_2[1];
    _DAT_6001cd08 = param_2[2];
    _DAT_6001cd04 = param_2[3];
    _DAT_6001c074 = param_2[4];
    _DAT_6001c11c = param_2[5];
    _DAT_600060b0 = param_2[6];
    _DAT_600060b4 = param_2[7];
    _DAT_600060b8 = param_2[8];
    _DAT_600060bc = param_2[9];
    _DAT_6001c860 = param_2[10];
    _DAT_6001c87c = param_2[0xb];
    _DAT_6001c02c = param_2[0xc];
    _DAT_6001c018 = param_2[0xd];
    _DAT_6001c01c = param_2[0xe];
    _DAT_6001c010 = param_2[0xf];
    _DAT_6001c014 = param_2[0x10];
    _DAT_6001c044 = param_2[0x11];
    _DAT_6001c108 = param_2[0x12];
    _DAT_6001c0cc = param_2[0x13];
    _DAT_6001c124 = param_2[0x14];
  }
  else {
    *param_2 = _DAT_6001cd0c;
    param_2[1] = _DAT_6001cc0c;
    param_2[2] = _DAT_6001cd08;
    param_2[3] = _DAT_6001cd04;
    param_2[4] = _DAT_6001c074;
    param_2[5] = _DAT_6001c11c;
    param_2[6] = _DAT_600060b0;
    param_2[7] = _DAT_600060b4;
    param_2[8] = _DAT_600060b8;
    param_2[9] = _DAT_600060bc;
    param_2[10] = _DAT_6001c860;
    param_2[0xb] = _DAT_6001c87c;
    param_2[0xc] = _DAT_6001c02c;
    param_2[0xd] = _DAT_6001c018;
    param_2[0xe] = _DAT_6001c01c;
    param_2[0xf] = _DAT_6001c010;
    param_2[0x10] = _DAT_6001c014;
    param_2[0x11] = _DAT_6001c044;
    param_2[0x12] = _DAT_6001c108;
    param_2[0x13] = _DAT_6001c0cc;
    param_2[0x14] = _DAT_6001c124;
  }
  return 0x15;
}

