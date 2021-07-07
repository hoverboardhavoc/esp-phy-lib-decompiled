/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_init_cmplx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_v2_init_cmplx(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = phy_enter_critical();
  uVar2 = fpga_mem_rd(0x6000d00c);
  fpga_mem_wr(0x6000d00c,uVar2 | 0x600);
  uVar2 = fpga_mem_rd(&DAT_6000e0c4);
  fpga_mem_wr(&DAT_6000e0c4,uVar2 | 0x2000000);
  bt_bb_v2_tx_set(0);
  bt_bb_v2_rx_set(4);
  uVar2 = fpga_mem_rd(0x6000d00c);
  fpga_mem_wr(0x6000d00c,uVar2 & 0xfffff9ff);
  uVar2 = fpga_mem_rd(0x6000604c);
  fpga_mem_wr(0x6000604c,uVar2 & 0xffff00ff | 0xc800);
  i2c_writeReg_Mask(0x67,1,0xf,2,0,1);
  i2c_writeReg_Mask(0x67,1,0xf,3,3,1);
  i2c_writeReg_Mask(0x67,1,6,6,0,0x6e);
  i2c_writeReg_Mask(0x67,1,5,6,0,0x6e);
  i2c_writeReg_Mask(0x67,1,0xf,4,4,0);
  i2c_writeReg_Mask(0x67,1,0xb,4,3,0);
  i2c_writeReg_Mask(0x67,1,8,6,0,0xc);
  i2c_writeReg_Mask(0x67,1,7,6,0,10);
  uVar2 = fpga_mem_rd(0x6000d00c);
  fpga_mem_wr(0x6000d00c,uVar2 | 0x600);
  _DAT_6000e0c4 = _DAT_6000e0c4 & 0xfdffffff;
  phy_exit_critical(uVar1);
  if (param_1 == 0) {
    return;
  }
  ets_printf("libbtbb version: %s, %s, %s\n","f94837b","Mar 26 2021","18:06:04");
  return;
}

