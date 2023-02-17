/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
 * Source: libphy -> phy_tsens.o -> tsens_read_init_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tsens_read_init_new(int param_1,int param_2)

{
  if (param_1 != 0) {
    (**(code **)(_g_phyFuns + 0x60))
              (0x69,0,6,3,0,phy_tsens_attribute[param_2 * 6 + 1],*(code **)(_g_phyFuns + 0x60));
  }
  _DAT_60096088 = _DAT_60096088 & 0xff7fffff | 0x400000;
  _DAT_6000e05c = _DAT_6000e05c | 0x8000;
  _DAT_6000e058 = _DAT_6000e058 & 0xffbfffff | 0x400000;
  return;
}

