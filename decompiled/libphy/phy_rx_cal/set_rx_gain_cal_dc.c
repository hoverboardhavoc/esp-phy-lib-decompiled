/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_rx_cal.o -> set_rx_gain_cal_dc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_rx_gain_cal_dc(undefined2 *param_1)

{
  ushort *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined1 auStack_2c [24];
  
  uStack_3c = 0x800080;
  uStack_38 = 0xc700c7;
  uStack_34 = 0xe700d7;
  uStack_30 = 0xf7;
  chip_v7_set_chan_ana(0xe);
  pbus_debugmode();
  pbus_xpd_rx_on(0);
  set_rxclk_en(1);
  set_txclk_en(1);
  puVar4 = &uStack_38;
  puVar2 = param_1;
  do {
    puVar1 = (ushort *)((int)puVar4 + 2);
    puVar3 = puVar2 + 2;
    puVar4 = (undefined4 *)((int)puVar4 + 2);
    pbus_set_rxgain((uint)*puVar1 << 8 | 0x70);
    pbus_rx_dco_cal_1step(0x800,&uStack_3c,auStack_2c,0);
    *puVar2 = (undefined2)uStack_3c;
    puVar2[1] = uStack_3c._2_2_;
    puVar2 = puVar3;
  } while (puVar3 != param_1 + 8);
  set_rxclk_en(0);
  set_txclk_en(0);
  pbus_xpd_rx_off();
  pbus_workmode();
  return;
}

