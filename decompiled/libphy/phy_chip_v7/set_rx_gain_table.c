/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> set_rx_gain_table
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_rx_gain_table(void)

{
  uint uVar1;
  undefined4 local_f0;
  undefined1 uStack_ec;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  undefined1 auStack_d8 [208];
  
  local_f0 = 0xe7d7c7c7;
  uStack_ec = 0xf7;
  uStack_e8 = 0x7100a06;
  uStack_e4 = 0x20;
  uStack_e0 = 0x3030300;
  uStack_dc = 3;
  if ((DAT_00012ea0 & 0x200) == 0) {
    uVar1 = gen_rx_gain_table(auStack_d8,0x20,&local_f0,&uStack_e8,&uStack_e0,5,0);
    if (uVar1 < 0x50) {
      DAT_00012f1f = (char)uVar1;
    }
    else {
      DAT_00012f1f = 'O';
    }
    DAT_00012ea0 = DAT_00012ea0 | 0x200;
    DAT_00012f20 = DAT_00012f1f;
  }
  if ((DAT_00012ea0 & 0x400) == 0) {
    set_rx_gain_cal_iq(&DAT_00012ea8,0);
    DAT_00012ea0 = DAT_00012ea0 | 0x400;
  }
  if ((DAT_00012ea0 & 0x40) == 0) {
    wr_rx_gain_mem(DAT_00012f1f + '\x01',auStack_d8,1);
    DAT_00012ea0 = DAT_00012ea0 | 0x40;
  }
  _DAT_6000607c = _DAT_6000607c | 0x18001800;
  return;
}

