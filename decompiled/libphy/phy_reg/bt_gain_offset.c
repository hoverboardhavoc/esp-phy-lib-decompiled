/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> bt_gain_offset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_gain_offset(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xff) << 0x10;
  _DAT_600a2848 = _DAT_600a2848 & 0xffff | param_1 << 0x18 | uVar1;
  _DAT_600a2868 = uVar1 | _DAT_600a2868 & 0xffff | param_1 << 0x18;
  return;
}

