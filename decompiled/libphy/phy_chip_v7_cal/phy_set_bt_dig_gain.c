/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> phy_set_bt_dig_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_set_bt_dig_gain(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined *puVar5;
  char local_18 [20];
  
  cVar2 = set_bt_chan_cal_interp();
  puVar5 = &chip7_sleep_params;
  iVar4 = 0;
  do {
    pcVar3 = local_18 + iVar4;
    pcVar1 = puVar5 + 0x81;
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 1;
    *pcVar3 = *pcVar1 + cVar2;
  } while (iVar4 != 8);
  wr_bt_tx_atten(local_18);
  return;
}

