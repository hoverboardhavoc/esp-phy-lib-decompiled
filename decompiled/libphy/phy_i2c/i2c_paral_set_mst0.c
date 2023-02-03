/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_i2c.o -> i2c_paral_set_mst0
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void i2c_paral_set_mst0(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = _DAT_600ad820;
  uVar2 = get_i2c_mst0_mask();
  _DAT_600ad820 = uVar2 | uVar1;
  uVar3 = get_i2c_mst0_mask(param_1);
  _DAT_600ad820 = ~uVar3 & (uVar2 | uVar1);
  return;
}

