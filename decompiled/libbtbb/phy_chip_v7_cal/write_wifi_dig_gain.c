/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> write_wifi_dig_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void write_wifi_dig_gain(char param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar3 = 0;
  do {
    pcVar1 = (char *)((int)&local_18 + iVar3);
    pcVar2 = (char *)((int)&phy_chan_gain_table + iVar3);
    iVar3 = iVar3 + 1;
    *pcVar1 = *pcVar2 - param_1;
  } while (iVar3 != 8);
  fpga_mem_wr(0x60006004,local_18);
  fpga_mem_wr(0x60006008,uStack_14);
  return;
}

