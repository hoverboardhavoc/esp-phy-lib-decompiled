/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_pwdet.o -> get_power_db
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int get_power_db(void)

{
  int iVar1;
  int iVar2;
  short sStack_14;
  short asStack_12 [5];
  
  sStack_14 = 0;
  asStack_12[0] = 0;
  get_fm_sar_dout(&sStack_14,asStack_12);
  iVar1 = linear_to_db((int)sStack_14,3);
  iVar2 = linear_to_db((int)asStack_12[0],3);
  return ((iVar1 + 0x14) - iVar2) * 0x10000 >> 0x10;
}

