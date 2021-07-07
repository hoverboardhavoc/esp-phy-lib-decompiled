/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libbtbb -> bt_bb_v2.o -> force_coex_timer11_bt_pti_v2
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void force_coex_timer11_bt_pti_v2(uint param_1)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x60035100);
  fpga_mem_wr(0x60035100,(param_1 & 0xf) << 0x18 | uVar1 & 0xf0ffffff);
  return;
}

