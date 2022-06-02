/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
 * Source: libphy -> phy_chip_v7.o -> phy_txtone_start
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00010f34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_txtone_start(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  
  set_rf_freq_offset(DAT_00014517,param_1,param_2);
  _DAT_60006000 =
       ((_DAT_60006000 >> 0x12 & 0xff) + 9) * 0x400 & 0x3fc00 | _DAT_60006000 & 0xfffc03ff | 2;
  (**(code **)(g_phyFuns + 200))(1,*(code **)(g_phyFuns + 200));
  uVar1 = (**(code **)(g_phyFuns + 0x28))
                    (((param_3 - DAT_000145e7) + 0x1c) * 0x10000 >> 0x10,100,0,
                     *(code **)(g_phyFuns + 0x28));
  _DAT_60006000 = _DAT_60006000 & 0xfbffffff;
  _DAT_600061e4 = _DAT_600061e4 | 0x400;
  uVar1 = (-(uVar1 & 0xff) & 0xff) << 10;
  if ((_DAT_60006040 >> 0x1d & 1) == 0) {
    _DAT_60006040 = uVar1 | 0x40000 | _DAT_60006040 & 0xf0000000;
  }
  else {
    _DAT_60006050 = _DAT_60006050 & 0xfffffff0;
    _DAT_60006040 = uVar1 | 0x40000 | _DAT_60006040 & 0xf0000000;
  }
  _DAT_60006044 = _DAT_60006044 & 0xf0000000;
  return;
}

