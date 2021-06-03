/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> rx_blocking_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rx_blocking_set(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_209 [13];
  undefined1 auStack_1fc [12];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined2 uStack_1c4;
  undefined1 uStack_1c2;
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [200];
  undefined1 auStack_e8 [208];
  
  DAT_00014050 = DAT_00014050 & 0xfffdfdbf;
  memcpy(auStack_209 + 1,&DAT_00013d60,9);
  memcpy(auStack_1fc,&DAT_00013d6c,9);
  memcpy(auStack_1f0,&_LANCHOR1,0xf);
  memcpy(auStack_1e0,&DAT_00013d78,0xf);
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1c2 = 0;
  memcpy(auStack_1c0,&DAT_00013d88,0xf);
  uVar1 = 9U - param_1 & 0xff;
  DAT_00014021 = auStack_209[uVar1];
  if ((DAT_00014050 & 0x200) == 0) {
    uVar2 = gen_rx_gain_table(auStack_1b0,0x16,auStack_1fc,auStack_1e0,auStack_1c0,9,0);
    if (uVar2 < 0x50) {
      DAT_00014125 = (byte)uVar2;
    }
    else {
      DAT_00014125 = 0x4f;
    }
    uVar2 = gen_rx_gain_table(auStack_e8,0x16,auStack_209 + 1,auStack_1f0,&uStack_1d0,9,0);
    if (uVar2 < 0x50) {
      DAT_00014126 = (byte)uVar2;
    }
    else {
      DAT_00014126 = 0x4f;
    }
    DAT_00014050 = DAT_00014050 | 0x200;
  }
  if ((DAT_00014050 & 0x100) == 0) {
    set_rf_freq_offset(DAT_00014023,0x985,0);
    set_rx_gain_param(1,&DAT_00014050,auStack_1fc,DAT_00014125 + 1,auStack_1b0,9);
    DAT_00014050 = DAT_00014050 | 0x100;
  }
  if (-1 < (int)(DAT_00014050 << 0xe)) {
    set_rx_gain_param(0,&DAT_00014050,auStack_209 + 1,DAT_00014126 + 1,auStack_e8,uVar1);
    DAT_00014050 = DAT_00014050 | 0x20000;
  }
  if ((DAT_00014050 & 0x40) == 0) {
    wr_rx_gain_mem(1,0,auStack_1fc,&phy_rxrf_dc,&phy_rxbb_dc,&phy_chan_dc,DAT_00014125 + 1,
                   auStack_1b0);
    wr_rx_gain_mem(0,0,auStack_209 + 1,&DAT_00013ed8,&phy_rxbb_dc,&phy_chan_dc,DAT_00014126 + 1,
                   auStack_e8);
    DAT_00014050 = DAT_00014050 | 0x40;
  }
  _DAT_6001c02c = (DAT_00014126 & 0x7f) << 8 | _DAT_6001c02c & 0xffff80ff;
  uVar1 = (uint)DAT_00014126;
  if (0x4c < uVar1) {
    uVar1 = 0x4c;
  }
  _DAT_6001c13c = uVar1 << 0x12 | _DAT_6001c13c & 0xfe03ffff;
  _DAT_6001c0d0 = _DAT_6001c0d0 & 0xfe01ffff | 0xa00000;
  _DAT_60011848 = _DAT_60011848 & 0xff00ffff | 0x500000;
  _DAT_6001c0a4 = (DAT_00014125 & 0x7f) << 0xf | _DAT_6001c0a4 & 0xffc07fff;
  _DAT_6000607c = _DAT_6000607c | 0x18001800;
  return;
}

