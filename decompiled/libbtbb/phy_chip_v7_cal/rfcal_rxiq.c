/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> rfcal_rxiq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rfcal_rxiq(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
               undefined4 param_5)

{
  uint uVar1;
  undefined1 uStack_22;
  undefined1 auStack_21 [9];
  
  uVar1 = fpga_mem_rd(0x600050dc);
  fpga_mem_wr(0x600050dc,uVar1 | 0x8000000);
  uVar1 = fpga_mem_rd(0x600050dc);
  fpga_mem_wr(0x600050dc,uVar1 & 0xefffffff);
  start_tx_tone_step(1,param_2,param_3,0,0,0);
  rxiq_cover_mg_mp(param_1,&uStack_22,auStack_21,param_5);
  stop_tx_tone(1);
  *param_4 = uStack_22;
  param_4[1] = auStack_21[0];
  return;
}

