/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libbtbb -> bt_bb_v2.o -> bt_get_channel_pwr_unset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_get_channel_pwr_unset(void)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x60011004);
  fpga_mem_wr(0x60011004,uVar1 & 0xfffffcff);
  force_coex_timer11_bt_pti_v2(0);
  _DAT_6000e0c4 = _DAT_6000e0c4 & 0xfdffffff;
  return;
}

