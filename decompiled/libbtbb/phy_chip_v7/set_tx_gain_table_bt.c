/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> set_tx_gain_table_bt
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_tx_gain_table_bt(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  bt_txdc_cal();
  bt_txiq_cal();
  bt_tx_gain_cal();
  wr_bt_tx_gain_mem();
  iVar3 = 0;
  do {
    pcVar1 = (char *)((int)&uStack_18 + iVar3);
    pcVar2 = chip7_sleep_params + iVar3;
    iVar3 = iVar3 + 1;
    *pcVar1 = -*pcVar2;
  } while (iVar3 != 8);
  fpga_mem_wr(0x6000600c,uStack_18);
  fpga_mem_wr(0x60006010,uStack_14);
  return;
}

