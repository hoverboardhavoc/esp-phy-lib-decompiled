/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_tx_cal.o -> txiq_get_mis_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txiq_get_mis_pwr(uint param_1,uint param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  
  _DAT_600a0420 =
       ((param_1 << 0x10 | param_2) & 0x3ffff) << 10 | 0x2c0000 | _DAT_600a0420 & 0xf00003ff;
  ets_delay_us(2);
  uVar1 = txtone_linear_pwr();
  *param_3 = uVar1;
  _DAT_600a0420 = (~param_1 & 1 | (param_1 & 1) << 3) << 0x18 | _DAT_600a0420 & 0xf0ffffff;
  ets_delay_us(2);
  uVar1 = txtone_linear_pwr();
  *param_4 = uVar1;
  return;
}

