/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_pbus.o -> pbus_rd
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint pbus_rd(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)pbus_rd_addr();
  uVar2 = pbus_rd_shift(param_1,param_2);
  return (0x1ff << (uVar2 & 0x1f) & *puVar1) >> (uVar2 & 0x1f) & 0xffff;
}

