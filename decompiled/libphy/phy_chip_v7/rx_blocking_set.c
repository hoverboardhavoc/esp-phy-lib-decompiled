/*
 * Last changed at upstream commit b7095b90157d98f116ba43c35b12d51192dc91c8
 * https://github.com/espressif/esp-phy-lib/commit/b7095b90157d98f116ba43c35b12d51192dc91c8
 * Upstream date: 2021-10-12 21:50:40 +0800
 * Upstream subject: Update libphy and libbb
 * Source: libphy -> phy_chip_v7.o -> rx_blocking_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint rx_blocking_set(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  undefined1 auStack_d8 [208];
  
  DAT_00012f54 = DAT_00012f54 & 0xfffdfdbf;
  uStack_f0 = 0xe7d7c7c7;
  uStack_ec = 0xf7;
  uStack_e8 = 0x7100a06;
  uStack_e4 = 0x20;
  uStack_e0 = 0x3030300;
  uStack_dc = 3;
  uVar2 = gen_rx_gain_table(auStack_d8,0x20,&uStack_f0,&uStack_e8,&uStack_e0,5,0);
  if (uVar2 < 0x50) {
    DAT_00012fd3 = (char)uVar2;
  }
  else {
    DAT_00012fd3 = 'O';
  }
  uVar3 = DAT_00012f54 | 0x200;
  DAT_00012fd4 = DAT_00012fd3;
  uVar1 = DAT_00012f54 & 0x400;
  DAT_00012f54 = uVar3;
  if (uVar1 == 0) {
    uVar2 = set_rx_gain_cal_iq(&DAT_00012f5c,0);
    DAT_00012f54 = DAT_00012f54 | 0x400;
  }
  if ((DAT_00012f54 & 0x40) == 0) {
    uVar2 = wr_rx_gain_mem(DAT_00012fd3 + '\x01',auStack_d8,1);
    DAT_00012f54 = DAT_00012f54 | 0x40;
  }
  _DAT_6000607c = _DAT_6000607c | 0x18001800;
  return uVar2;
}

