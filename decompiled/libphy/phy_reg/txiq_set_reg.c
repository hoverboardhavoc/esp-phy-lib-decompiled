/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> txiq_set_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int txiq_set_reg(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar2 = 0x3f;
  }
  else {
    iVar2 = 0x1f;
  }
  cVar1 = get_data_sat(-iVar2);
  return (int)cVar1;
}

