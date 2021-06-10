/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_fpga_v7_init.o -> fpga_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fpga_init(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  ets_printf("fpga_init: phy=%s, fpga=%s, %s, %s\n","e3e9fcc","5f7f7b8","Mar 26 2021","18:06:11");
  phy_get_romfunc_addr();
  i2c_clk_sel(0);
  fpga_mem_wr(0x6004b014,0xffffffff);
  fpga_mem_wr(0x6004b018,0);
  uVar1 = fpga_mem_rd(0x6004b020);
  fpga_mem_wr(0x6004b020,uVar1 | 0xa000);
  i2c_to_apb_wr(0x3ff000cc,0xffffffff);
  uVar1 = fpga_mem_rd(0x6001c400);
  fpga_mem_wr(0x6001c400,uVar1 & 0xfff8ffff);
  uVar1 = fpga_mem_rd(0x6002600c);
  fpga_mem_wr(0x6002600c,uVar1 & 0xfffffffd);
  uVar1 = fpga_mem_rd(0x6000d00c);
  fpga_mem_wr(0x6000d00c,uVar1 & 0xfffff9ff);
  uVar1 = i2c_to_apb_rd(0x3ff00054);
  i2c_to_apb_wr(0x3ff00054,uVar1 | 2);
  uVar1 = i2c_to_apb_rd(0x3ff00054);
  i2c_to_apb_wr(0x3ff00054,uVar1 & 0xfffffffd);
  uVar1 = i2c_to_apb_rd(0x60026000);
  i2c_to_apb_wr(0x60026000,uVar1 | 0x400);
  uVar2 = i2c_to_apb_rd(&DAT_6000e3fc);
  ets_printf("I2C_MST_DATE_REG chip=0x%x\n",uVar2);
  uVar2 = fpga_mem_rd(0x600060fc);
  ets_printf("CHIP_FE_NOUSE_2 chip=0x%x\n",uVar2);
  uVar2 = fpga_mem_rd(0x600051fc);
  ets_printf("CHIP_FE2_NOUSE_2 chip=0x%x\n",uVar2);
  ets_printf("AGCNOUSE_REG fpga=0x%x\n",_DAT_6001c3fc);
  ets_printf("I2C_MST_DATE_REG fpga=0x%x\n",_DAT_6000e3fc);
  ets_printf("AGCNOUSE_REG fpga=0x%x\n",_DAT_6001c3fc);
  slv_ana_v7_init();
  uVar1 = fpga_mem_rd(0x60035024);
  fpga_mem_wr(0x60035024,uVar1 & 0xfe7fffff | 0x800000);
  fpga_mem_wr(0x6004b014,0xffffffff);
  i2c_to_apb_wr(0x3ff000cc,0xffffffff);
  uVar2 = i2c_to_apb_rd(&DAT_6000e3fc);
  ets_printf("7 I2C_MST_DATE_REG chip=0x%x\n",uVar2);
  ets_printf("7 AGCNOUSE_REG fpga=0x%x\n",_DAT_6001c3fc);
  ets_printf("slv done\n");
  return;
}

