/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
 * Source: libphy -> phy_tsens.o -> ram_tsens_temp_read_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ram_tsens_temp_read_new(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(_g_phyFuns + 0x50))(0x69,0,6,*(code **)(_g_phyFuns + 0x50));
  DAT_0001101a = tsens_dac_to_index(uVar1 & 0xf);
  tsens_code_read();
  uVar2 = code_to_temp((int)(char)phy_tsens_attribute[(uint)DAT_0001101a * 6]);
  tsens_dac_cal_new(DAT_0001101a);
  return uVar2;
}

