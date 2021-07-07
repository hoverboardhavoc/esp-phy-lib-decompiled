/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> uart_wait_idle
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void uart_wait_idle(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  do {
    uVar1 = 0x6000001c;
    if (((param_1 != 0) && (uVar1 = 0x6001001c, param_1 != 1)) && (uVar1 = 0x6002e01c, param_1 != 2)
       ) {
      uVar1 = 0x1c;
    }
    uVar2 = fpga_mem_rd(uVar1);
  } while ((uVar2 & 0x3ff0000) != 0);
  ets_delay_us(100);
  return;
}

