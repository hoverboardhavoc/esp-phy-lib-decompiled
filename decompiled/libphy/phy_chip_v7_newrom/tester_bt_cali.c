/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_newrom.o -> tester_bt_cali
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void tester_bt_cali(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &phy_param;
  do {
    pcVar1 = (char *)(param_1 + iVar2);
    iVar2 = iVar2 + 1;
    puVar3[0x11a] = *pcVar1 + puVar3[0x11a];
    puVar3 = puVar3 + 1;
  } while (iVar2 != 3);
  bt_set_tx_gain(0);
  bt_txpwr_freq(&phy_param);
  return;
}

