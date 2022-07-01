/*
 * Last changed at upstream commit 240e008e89a447f2f1edf990efefa45b870e6e8a
 * https://github.com/espressif/esp-phy-lib/commit/240e008e89a447f2f1edf990efefa45b870e6e8a
 * Upstream date: 2022-07-01 15:45:54 +0800
 * Upstream subject: Support 26M and 40M Crystal
 * Source: libphy -> phy_tsens.o -> get_temp_init_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_temp_init_new(int param_1,int param_2)

{
  undefined2 uVar1;
  
  (**(code **)(_g_phyFuns + 0x1a4))(*(code **)(_g_phyFuns + 0x1a4));
  uVar1 = _DAT_00011238;
  if ((DAT_00011230 == '\x11') || (uVar1 = _DAT_00011096, param_2 != 0)) {
    _DAT_00011240 = uVar1;
  }
  _DAT_0001109a = _DAT_00011240;
  if (param_1 != 0) {
    _DAT_0001128c = _DAT_00011096;
  }
  return;
}

