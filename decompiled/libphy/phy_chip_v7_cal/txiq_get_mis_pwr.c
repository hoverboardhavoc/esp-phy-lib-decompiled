/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> txiq_get_mis_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txiq_get_mis_pwr(uint param_1,int param_2,uint param_3,undefined2 *param_4,undefined2 *param_5,
                     undefined4 param_6)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = fpga_mem_rd(0x600060b8);
  fpga_mem_wr(0x600060b8,
              (param_2 * -0x400 & 0x3fc00U | (int)param_3 >> 2 | param_1 << 0x1a) & 0xfffffff |
              0x2c0000 | uVar2 & 0xf0000000);
  uVar2 = fpga_mem_rd(0x600050a8);
  fpga_mem_wr(0x600050a8,uVar2 & 0xfffffffc | param_3 & 3);
  ets_delay_us(10);
  uVar1 = txtone_linear_pwr(param_6);
  *param_4 = uVar1;
  uVar2 = fpga_mem_rd(0x600060b8);
  fpga_mem_wr(0x600060b8,uVar2 & 0xf0ffffff | (~param_1 & 1 | (param_1 & 1) << 3) << 0x18);
  ets_delay_us(10);
  uVar1 = txtone_linear_pwr(param_6);
  *param_5 = uVar1;
  return;
}

