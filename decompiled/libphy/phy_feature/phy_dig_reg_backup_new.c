/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_feature.o -> phy_dig_reg_backup_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 phy_dig_reg_backup_new(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    _DAT_600a790c = *param_2;
    _DAT_600a780c = param_2[1];
    _DAT_600a7904 = param_2[2];
    _DAT_600a7074 = param_2[3];
    _DAT_600a711c = param_2[4];
    _DAT_600a08b0 = param_2[5];
    _DAT_600a08b4 = param_2[6];
    _DAT_600a08b8 = param_2[7];
    _DAT_600a08bc = param_2[8];
    _DAT_600a702c = param_2[9];
    _DAT_600a7018 = param_2[10];
    _DAT_600a701c = param_2[0xb];
    _DAT_600a7010 = param_2[0xc];
    _DAT_600a7014 = param_2[0xd];
    _DAT_600a7044 = param_2[0xe];
    _DAT_600a7108 = param_2[0xf];
    _DAT_600a70cc = param_2[0x10];
    _DAT_600a7124 = param_2[0x11];
    if ((_DAT_600a9814 & 4) != 0) {
      _DAT_600a8060 = param_2[0x12];
      _DAT_600a807c = param_2[0x13];
      return 0x14;
    }
  }
  else {
    *param_2 = _DAT_600a790c;
    param_2[1] = _DAT_600a780c;
    param_2[2] = _DAT_600a7904;
    param_2[3] = _DAT_600a7074;
    param_2[4] = _DAT_600a711c;
    param_2[5] = _DAT_600a08b0;
    param_2[6] = _DAT_600a08b4;
    param_2[7] = _DAT_600a08b8;
    param_2[8] = _DAT_600a08bc;
    param_2[9] = _DAT_600a702c;
    param_2[10] = _DAT_600a7018;
    param_2[0xb] = _DAT_600a701c;
    param_2[0xc] = _DAT_600a7010;
    param_2[0xd] = _DAT_600a7014;
    param_2[0xe] = _DAT_600a7044;
    param_2[0xf] = _DAT_600a7108;
    param_2[0x10] = _DAT_600a70cc;
    param_2[0x11] = _DAT_600a7124;
    if ((_DAT_600a9814 & 4) != 0) {
      param_2[0x12] = _DAT_600a8060;
      param_2[0x13] = _DAT_600a807c;
      return 0x14;
    }
  }
  return 0x12;
}

