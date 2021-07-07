/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> wr_bt_tx_atten
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void wr_bt_tx_atten(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar3 = 0;
  do {
    pcVar1 = (char *)((int)&local_18 + iVar3);
    pcVar2 = (char *)(param_1 + iVar3);
    iVar3 = iVar3 + 1;
    *pcVar1 = -*pcVar2;
  } while (iVar3 != 8);
  fpga_mem_wr(0x6000600c,local_18);
  fpga_mem_wr(0x60006010,uStack_14);
  return;
}

