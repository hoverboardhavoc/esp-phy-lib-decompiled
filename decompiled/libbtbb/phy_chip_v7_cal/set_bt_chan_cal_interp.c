/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> set_bt_chan_cal_interp
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int set_bt_chan_cal_interp(uint param_1)

{
  char cVar1;
  char cVar2;
  
  if (param_1 < 0xb) {
    return (int)target_power_backoff_qdb;
  }
  if (param_1 < 0x15) {
    cVar2 = (char)((int)(((int)DAT_000140bd - (int)target_power_backoff_qdb) * (param_1 - 10)) / 10)
    ;
    cVar1 = target_power_backoff_qdb;
  }
  else if (param_1 < 0x29) {
    cVar2 = (char)((int)(((int)DAT_000140bb - (int)DAT_000140bd) * (param_1 - 0x14)) / 0x14);
    cVar1 = DAT_000140bd;
  }
  else {
    if (param_1 < 0x3d) {
      cVar2 = (char)((int)(((int)DAT_000140be - (int)DAT_000140bb) * (param_1 - 0x28)) / 0x14) +
              DAT_000140bb;
      goto _L600;
    }
    if (0x4e < param_1) {
      return (int)DAT_000140bf;
    }
    cVar2 = (char)((int)(((int)DAT_000140bf - (int)DAT_000140be) * (param_1 - 0x3c)) / 0x12);
    cVar1 = DAT_000140be;
  }
  cVar2 = cVar2 + cVar1;
_L600:
  return (int)cVar2;
}

