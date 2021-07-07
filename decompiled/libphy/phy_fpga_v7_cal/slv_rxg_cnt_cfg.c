/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_fpga_v7_cal.o -> slv_rxg_cnt_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void slv_rxg_cnt_cfg(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = 0x3e;
  do {
    uVar2 = slv_i2c_rd(0x6000d000,0x6000d008,0x7d,iVar1,0xff);
    iVar3 = iVar1 + -0xc;
    iVar1 = iVar1 + 1;
    slv_i2c_wr(0x6000d000,0x6000d008,0x7d,iVar3,uVar2,0xff);
  } while (iVar1 != 0x48);
  return;
}

