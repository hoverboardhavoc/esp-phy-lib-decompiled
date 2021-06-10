/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> freq_i2c_read_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void freq_i2c_read_mem(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  ets_printf("i=%d, ",0);
  cVar1 = '\0';
  uVar4 = 0;
  while( true ) {
    uVar2 = fpga_mem_rd(0x6000e0c4);
    fpga_mem_wr(0x6000e0c4,uVar2 & 0xffffff00 | uVar4);
    uVar3 = fpga_mem_rd(0x6000e0c0);
    cVar1 = cVar1 + '\x01';
    ets_printf("0x%x, ",uVar3);
    if (cVar1 == '\x03') break;
    uVar4 = 2;
    if (cVar1 == '\x01') {
      uVar4 = 1;
    }
  }
  ets_printf(&_LC4);
  return;
}

