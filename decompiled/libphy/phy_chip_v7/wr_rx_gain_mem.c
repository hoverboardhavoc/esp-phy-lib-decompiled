/*
 * Last changed at upstream commit b7095b90157d98f116ba43c35b12d51192dc91c8
 * https://github.com/espressif/esp-phy-lib/commit/b7095b90157d98f116ba43c35b12d51192dc91c8
 * Upstream date: 2021-10-12 21:50:40 +0800
 * Upstream subject: Update libphy and libbb
 * Source: libphy -> phy_chip_v7.o -> wr_rx_gain_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void wr_rx_gain_mem(uint param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack_34;
  
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = 0x50;
  }
  uStack_34 = 0x800080;
  pbus_debugmode();
  pbus_xpd_rx_on(0);
  set_rxclk_en(1);
  set_txclk_en(1);
  for (uVar6 = 0; uVar6 != param_1; uVar6 = uVar6 + 1 & 0xff) {
    uVar3 = *(uint *)((uVar6 >> 1) * 4 + param_2);
    if ((uVar6 & 1) == 0) {
      uVar3 = uVar3 << 0x10;
    }
    uVar5 = uVar3 >> 0x1c & 3;
    pbus_force_test(0,1,uVar5 << 4 | 0x147);
    uVar2 = uVar3 >> 0x16 & 1;
    uVar4 = uVar3 >> 0x14 & 3;
    uVar3 = uVar3 >> 0x10 & 0xf;
    pbus_force_test(1,2,uVar3 << 2 | uVar2 << 8 | uVar4 << 6);
    pbus_rx_dco_cal(0x800,&uStack_34,0);
    write_gain_mem((int)(short)uStack_34,
                   (*(ushort *)(&DAT_00012e6c + (uVar5 + 0x78) * 2) & 0x7ff) +
                   uStack_34._2_2_ * 0x1000000 + 0x500000 + uVar5 * 0x40000 + uVar4 * 0x10000 +
                   uVar3 * 0x1000 + uVar2 * 0x800,uVar6 + iVar1 & 0xff);
  }
  pbus_workmode();
  set_rxclk_en(0);
  set_txclk_en(0);
  return;
}

