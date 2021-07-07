/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> dc_iq_est
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void dc_iq_est(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  iq_est_enable();
  iVar2 = fpga_mem_rd(0x600060dc);
  param_1 = param_1 + 1;
  *param_2 = (iVar2 >> 6) / param_1;
  iVar2 = fpga_mem_rd(0x600060e0);
  param_2[1] = (iVar2 >> 6) / param_1;
  iVar2 = fpga_mem_rd(0x600060e4);
  iVar2 = (iVar2 / param_1) * 8 - (*param_2 * *param_2 + param_2[1] * param_2[1]);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar2 = linear_to_db(iVar2,0);
  param_2[2] = iVar2 + 8 >> 4;
  uVar1 = fpga_mem_rd(0x6000607c);
  fpga_mem_wr(0x6000607c,uVar1 & 0xfffffffd);
  ets_delay_us(1);
  uVar1 = fpga_mem_rd(0x6000607c);
  fpga_mem_wr(0x6000607c,uVar1 & 0xfffffffe);
  return;
}

