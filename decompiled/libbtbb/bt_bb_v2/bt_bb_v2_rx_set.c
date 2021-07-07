/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_rx_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_bb_v2_rx_set(uint param_1)

{
  uint uVar1;
  
  uVar1 = fpga_mem_rd(0x60011050);
  fpga_mem_wr(0x60011050,uVar1 & 0xfffff800);
  uVar1 = fpga_mem_rd(0x60011008);
  fpga_mem_wr(0x60011008,(param_1 & 0x3f) << 0x17 | uVar1 & 0xe07fffff);
  uVar1 = fpga_mem_rd(0x6001100c);
  fpga_mem_wr(0x6001100c,uVar1 & 0xfff | 0x4000000);
  uVar1 = fpga_mem_rd(0x60033c18);
  fpga_mem_wr(0x60033c18,uVar1 & 0x7fffffff);
  uVar1 = fpga_mem_rd(0x6001104c);
  fpga_mem_wr(0x6001104c,uVar1 | 4);
  uVar1 = fpga_mem_rd(0x60011888);
  fpga_mem_wr(0x60011888,uVar1 | 0x20000000);
  uVar1 = fpga_mem_rd(0x60011888);
  fpga_mem_wr(0x60011888,uVar1 | 0x40000);
  uVar1 = fpga_mem_rd(0x6001184c);
  fpga_mem_wr(0x6001184c,uVar1 & 0xfbffffff);
  uVar1 = fpga_mem_rd(0x6001188c);
  fpga_mem_wr(0x6001188c,uVar1 & 0xdfffffff);
  uVar1 = fpga_mem_rd(0x60011054);
  fpga_mem_wr(0x60011054,uVar1 & 0xffffffe0 | 0x14);
  uVar1 = fpga_mem_rd(0x60011c00);
  fpga_mem_wr(0x60011c00,uVar1 & 0xfff | 0x4000000);
  bt_agc_gain_set();
  bt_agc_rssi_thresh();
  bt_agc_target_set();
  bt_agc_restart_set();
  bt_agc_recorrect_set();
  bt_agc_detect_set();
  bt_bb_rx_correlator_set();
  bt_bb_rx_dpo_set();
  bt_bb_rx_filter_sel();
  zb_rx_core_set();
  uVar1 = fpga_mem_rd(0x60011c10);
  fpga_mem_wr(0x60011c10,uVar1 & 0x1fffff | 0xe6000000);
  uVar1 = fpga_mem_rd(0x60011c0c);
  fpga_mem_wr(0x60011c0c,uVar1 & 0xffe003ff | 0x1cc000);
  uVar1 = fpga_mem_rd(0x60011c18);
  fpga_mem_wr(0x60011c18,uVar1 & 0xfffff800 | 0x730);
  uVar1 = fpga_mem_rd(0x60011c10);
  fpga_mem_wr(0x60011c10,uVar1 & 0xffe01fff | 0x13c000);
  uVar1 = fpga_mem_rd(0x60011c34);
  fpga_mem_wr(0x60011c34,uVar1 | 0x80000000);
  uVar1 = fpga_mem_rd(0x60011c34);
  fpga_mem_wr(0x60011c34,uVar1 & 0x800fffff | 0x7a500000);
  uVar1 = fpga_mem_rd(0x60011c34);
  fpga_mem_wr(0x60011c34,uVar1 & 0xfff001ff | 0xfde00);
  uVar1 = fpga_mem_rd(0x60011c2c);
  fpga_mem_wr(0x60011c2c,uVar1 & 0xff | 128000000);
  uVar1 = fpga_mem_rd(0x60011c30);
  fpga_mem_wr(0x60011c30,uVar1 & 0xff | 0xf85edf00);
  return;
}

