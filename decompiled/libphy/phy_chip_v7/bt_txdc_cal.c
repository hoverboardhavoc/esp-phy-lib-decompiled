/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> bt_txdc_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_txdc_cal(void)

{
  int iVar1;
  ushort uVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined2 local_28 [6];
  
  if (-1 < (int)(chip7_sleep_params._0_4_ << 0x13)) {
    pbus_debugmode();
    puVar6 = chip7_sleep_params;
    pbus_xpd_tx_on(tx_rf_ana_gain,DAT_00015e22);
    uVar2 = pbus_rd(1,1);
    pbus_force_test(1,1,uVar2 | 2);
    iVar1 = 0;
    do {
      pbus_force_test(1,2,(&CSWTCH_233)[iVar1]);
      txdc_cal_v70(local_28);
      iVar5 = 0;
      puVar4 = puVar6;
      do {
        puVar3 = (undefined2 *)((int)local_28 + iVar5);
        iVar5 = iVar5 + 2;
        *(undefined2 *)(puVar4 + 0x98) = *puVar3;
        puVar4 = puVar4 + 2;
      } while (iVar5 != 8);
      iVar1 = iVar1 + 1;
      puVar6 = puVar6 + 8;
    } while (iVar1 != 3);
    pbus_xpd_rx_on(0);
    pbus_workmode();
    chip7_sleep_params._0_4_ = chip7_sleep_params._0_4_ | 0x1000;
  }
  return;
}

