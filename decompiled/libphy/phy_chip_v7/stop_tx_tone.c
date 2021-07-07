/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> stop_tx_tone
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void stop_tx_tone(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 == 2) {
    uVar1 = fpga_mem_rd(0x600060bc);
    uVar1 = uVar1 & 0xfffbffff;
    uVar2 = 0x600060bc;
  }
  else {
    if (param_1 == 3) {
      uVar1 = fpga_mem_rd(0x600060c4);
    }
    else {
      if (param_1 == 1) {
        uVar1 = fpga_mem_rd(0x600060b8);
        uVar1 = uVar1 & 0xfffbffff;
        uVar2 = 0x600060b8;
        goto _L339;
      }
      uVar1 = fpga_mem_rd(0x600060b8);
      fpga_mem_wr(0x600060b8,uVar1 & 0xfffbffff);
      uVar1 = fpga_mem_rd(0x600060bc);
      fpga_mem_wr(0x600060bc,uVar1 & 0xfffbffff);
      uVar1 = fpga_mem_rd(0x600060c4);
    }
    uVar1 = uVar1 & 0xfffbffff;
    uVar2 = 0x600060c4;
  }
_L339:
  fpga_mem_wr(uVar2,uVar1);
  return;
}

