/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
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
  
  if (-1 < (int)(_DAT_00011034 << 8)) {
    i2c_rc_set_reg(2,2,8);
    iVar1 = get_rc_dout();
    DAT_00011059 = (undefined1)iVar1;
    DAT_0001104f = 0x7f;
    if ((iVar1 * 0x7b < 0x3188) &&
       (iVar1 = (iVar1 * 0x7b + 0x78) / 100, DAT_0001104f = (undefined1)iVar1, iVar1 == 1)) {
      DAT_0001104f = 2;
    }
    _DAT_00011034 = _DAT_00011034 | 0x800000;
    DAT_00011050 = DAT_0001104f;
    DAT_00011051 = DAT_0001104f;
    DAT_00011052 = DAT_0001104f;
  }
  return;
}

