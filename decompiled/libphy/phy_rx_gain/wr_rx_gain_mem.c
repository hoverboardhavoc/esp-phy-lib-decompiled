/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_rx_gain.o -> wr_rx_gain_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void wr_rx_gain_mem(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uStack_34;
  
  uStack_34 = 0x800080;
  pbus_debugmode();
  pbus_xpd_rx_on(0);
  set_rxclk_en(1);
  set_txclk_en(1);
  for (uVar5 = 0; uVar5 != param_1; uVar5 = uVar5 + 1 & 0xff) {
    uVar1 = *(uint *)((uVar5 >> 1) * 4 + param_2);
    if ((uVar5 & 1) == 0) {
      uVar1 = uVar1 << 0x10;
    }
    uVar4 = uVar1 >> 0x1c & 3;
    pbus_force_test(0,1,uVar4 << 4 | 0x147);
    uVar2 = uVar1 >> 0x16 & 1;
    uVar3 = uVar1 >> 0x14 & 3;
    uVar1 = uVar1 >> 0x10 & 0xf;
    pbus_force_test(1,2,uVar1 << 2 | uVar2 << 8 | uVar3 << 6);
    pbus_rx_dco_cal(0x800,&uStack_34,0);
    write_gain_mem((int)(short)uStack_34 << 2 | (int)uStack_34._2_2_ >> 6 & 3U,
                   (*(ushort *)(pbus_rx_dco_cal + (uVar4 + 0x10) * 2) & 0x1fff) +
                   uVar1 * 0x4000 +
                   uStack_34._2_2_ * 0x4000000 + 0x1400000 + uVar4 * 0x100000 + uVar3 * 0x40000 +
                   uVar2 * 0x2000,uVar5);
  }
  pbus_workmode();
  set_rxclk_en(0);
  set_txclk_en(0);
  return;
}

