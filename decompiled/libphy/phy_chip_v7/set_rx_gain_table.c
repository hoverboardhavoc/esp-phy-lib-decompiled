/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
 * Source: libphy -> phy_chip_v7.o -> set_rx_gain_table
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_rx_gain_table(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_209 [13];
  undefined1 auStack_1fc [12];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [200];
  undefined1 auStack_e8 [204];
  
  memcpy(auStack_209 + 1,&DAT_000142a8,9);
  memcpy(auStack_1fc,&DAT_000142a8,9);
  memcpy(auStack_1f0,&_LANCHOR2,0xf);
  memcpy(auStack_1e0,&DAT_000142b4,0xf);
  memcpy(auStack_1d0,&DAT_000142c4,0xf);
  memcpy(auStack_1c0,&DAT_000142c4,0xf);
  uVar1 = 9U - param_2 & 0xff;
  DAT_00014515 = auStack_209[uVar1];
  if ((DAT_00014544 & 0x200) == 0) {
    uVar2 = gen_rx_gain_table(auStack_1b0,0x16,auStack_1fc,auStack_1e0,auStack_1c0,9,0);
    if (uVar2 < 0x50) {
      DAT_00014619 = (byte)uVar2;
    }
    else {
      DAT_00014619 = 0x4f;
    }
    uVar2 = gen_rx_gain_table(auStack_e8,0x16,auStack_209 + 1,auStack_1f0,auStack_1d0,9,0);
    if (uVar2 < 0x50) {
      DAT_0001461a = (byte)uVar2;
    }
    else {
      DAT_0001461a = 0x4f;
    }
    set_rf_freq_offset(DAT_00014517,param_1,0);
    set_rx_gain_param(1,&DAT_00014544,auStack_1fc,DAT_00014619 + 1,auStack_1b0,9);
    set_rx_gain_param(0,&DAT_00014544,auStack_209 + 1,DAT_0001461a + 1,auStack_e8,uVar1);
    wr_rx_gain_mem(1,0,auStack_1fc,&phy_rxrf_dc,&phy_rxbb_dc,&phy_chan_dc,DAT_00014619 + 1,
                   auStack_1b0);
    wr_rx_gain_mem(0,0,auStack_209 + 1,&DAT_000143d4,&phy_rxbb_dc,&phy_chan_dc,DAT_0001461a + 1,
                   auStack_e8);
    DAT_00014544 = DAT_00014544 | 0x200;
  }
  _DAT_6001c02c = (DAT_0001461a & 0x7f) << 8 | _DAT_6001c02c & 0xffff80ff;
  uVar1 = (uint)DAT_0001461a;
  if (0x4c < uVar1) {
    uVar1 = 0x4c;
  }
  _DAT_6001c13c = uVar1 << 0x12 | _DAT_6001c13c & 0xfe03ffff;
  _DAT_6001c0d0 = _DAT_6001c0d0 & 0xfe01ffff | 0xa00000;
  _DAT_60011848 = _DAT_60011848 & 0xff00ffff | 0x500000;
  _DAT_6001c0a4 = (DAT_00014619 & 0x7f) << 0xf | _DAT_6001c0a4 & 0xffc07fff;
  _DAT_6000607c = _DAT_6000607c | 0x18001800;
  return;
}

