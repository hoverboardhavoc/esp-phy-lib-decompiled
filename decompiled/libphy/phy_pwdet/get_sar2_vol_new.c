/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
 * Source: libphy -> phy_pwdet.o -> get_sar2_vol_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 get_sar2_vol_new(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  (**(code **)(_g_phyFuns + 0x60))(0x69,0,7,6,6,1,*(code **)(_g_phyFuns + 0x60));
  uVar1 = _DAT_600a0814;
  _DAT_6000e000 = _DAT_6000e000 | 0x20000000;
  _DAT_600a0814 = (param_1 & 3) << 0xc | _DAT_600a0814 & 0xffffcfff;
  uVar2 = read_sar2_code();
  _DAT_600a0814 = uVar1 & 0x3000 | _DAT_600a0814 & 0xffffcfff;
  _DAT_6000e000 = _DAT_6000e000 & 0xdfffffff;
  (**(code **)(_g_phyFuns + 0x60))(0x69,0,7,6,6,0,*(code **)(_g_phyFuns + 0x60));
  return uVar2;
}

