/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_fpga_v7_init.o -> pad_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pad_init(void)

{
  int iVar1;
  int iVar2;
  
  i2c_to_apb_wr(0x6000849c,0x68000000);
  i2c_to_apb_wr(0x60008494,0x28000000);
  i2c_to_apb_wr(0x600084a0,0x28000000);
  i2c_to_apb_wr(0x600084a4,0x28000000);
  i2c_to_apb_wr(0x600084a8,0x28000000);
  i2c_to_apb_wr(0x600084ac,0x28000000);
  i2c_to_apb_wr(0x600084b0,0x28000000);
  i2c_to_apb_wr(0x60008488,0x48000000);
  iVar1 = 0x69;
  do {
    iVar2 = iVar1 + 1;
    slv_i2c_wr(0x6000d000,0x6000d008,0x7d,iVar1,8,0xc);
    iVar1 = iVar2;
  } while (iVar2 != 0x78);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x76,0xc,0xc);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x77,0xc,0xc);
  return;
}

