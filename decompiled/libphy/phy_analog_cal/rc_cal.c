/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_analog_cal.o -> rc_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rc_cal(void)

{
  int iVar1;
  
  if (-1 < (int)(_DAT_00011040 << 8)) {
    i2c_rc_set_reg(2,2,8);
    iVar1 = get_rc_dout();
    DAT_0001105f = (undefined1)iVar1;
    DAT_00011055 = 0x7f;
    if ((iVar1 * 0x7b < 0x3188) &&
       (iVar1 = (iVar1 * 0x7b + 0x78) / 100, DAT_00011055 = (undefined1)iVar1, iVar1 == 1)) {
      DAT_00011055 = 2;
    }
    _DAT_00011040 = _DAT_00011040 | 0x800000;
    DAT_00011056 = DAT_00011055;
    DAT_00011057 = DAT_00011055;
    DAT_00011058 = DAT_00011055;
  }
  return;
}

