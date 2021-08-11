/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> txiq_get_mis_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txiq_get_mis_pwr(uint param_1,int param_2,uint param_3,undefined2 *param_4,undefined2 *param_5)

{
  undefined2 uVar1;
  
  _DAT_60006040 =
       (param_2 * -0x400 & 0x3fc00U | (int)param_3 >> 2 | param_1 << 0x1a) & 0xfffffff | 0x2c0000 |
       _DAT_60006040 & 0xf0000000;
  _DAT_60006050 = _DAT_60006050 & 0xfffffffc | param_3 & 3;
  ets_delay_us(2);
  uVar1 = txtone_linear_pwr();
  *param_4 = uVar1;
  _DAT_60006040 = (~param_1 & 1 | (param_1 & 1) << 3) << 0x18 | _DAT_60006040 & 0xf0ffffff;
  ets_delay_us(2);
  uVar1 = txtone_linear_pwr();
  *param_5 = uVar1;
  return;
}

