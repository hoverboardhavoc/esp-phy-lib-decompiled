/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> btpwr_backoff
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void btpwr_backoff(char param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  bVar1 = param_1 - bt_txpwr_backoff;
  puVar4 = chip7_sleep_params;
  do {
    iVar2 = ((uint)(byte)puVar4[0x81] + (uint)bVar1) * 0x1000000;
    iVar3 = iVar2 >> 0x18;
    if (iVar3 < 0) {
      puVar4[0x81] = 0;
    }
    else if (iVar3 < 0x41) {
      puVar4[0x81] = (char)((uint)iVar2 >> 0x18);
    }
    else {
      puVar4[0x81] = 0x40;
    }
    puVar4 = puVar4 + 1;
  } while (puVar4 != (undefined1 *)0x16028);
  wr_bt_tx_atten(chip7_sleep_params);
  bt_txpwr_backoff = param_1;
  return;
}

