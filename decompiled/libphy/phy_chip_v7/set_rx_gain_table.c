/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
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
  
  memcpy(auStack_209 + 1,&DAT_00014300,9);
  memcpy(auStack_1fc,&DAT_00014300,9);
  memcpy(auStack_1f0,&_LANCHOR2,0xf);
  memcpy(auStack_1e0,&DAT_0001430c,0xf);
  memcpy(auStack_1d0,&DAT_0001431c,0xf);
  memcpy(auStack_1c0,&DAT_0001431c,0xf);
  uVar1 = 9U - param_2 & 0xff;
  DAT_0001456d = auStack_209[uVar1];
  if ((DAT_0001459c & 0x200) == 0) {
    uVar2 = gen_rx_gain_table(auStack_1b0,0x16,auStack_1fc,auStack_1e0,auStack_1c0,9,0);
    if (uVar2 < 0x50) {
      DAT_00014671 = (byte)uVar2;
    }
    else {
      DAT_00014671 = 0x4f;
    }
    uVar2 = gen_rx_gain_table(auStack_e8,0x16,auStack_209 + 1,auStack_1f0,auStack_1d0,9,0);
    if (uVar2 < 0x50) {
      DAT_00014672 = (byte)uVar2;
    }
    else {
      DAT_00014672 = 0x4f;
    }
    DAT_0001459c = DAT_0001459c | 0x200;
  }
  if ((DAT_0001459c & 0x100) == 0) {
    set_rf_freq_offset(DAT_0001456f,param_1,0);
    set_rx_gain_param(1,&DAT_0001459c,auStack_1fc,DAT_00014671 + 1,auStack_1b0,9);
    DAT_0001459c = DAT_0001459c | 0x100;
  }
  if (-1 < (int)(DAT_0001459c << 0xe)) {
    set_rx_gain_param(0,&DAT_0001459c,auStack_209 + 1,DAT_00014672 + 1,auStack_e8,uVar1);
    DAT_0001459c = DAT_0001459c | 0x20000;
  }
  if ((DAT_0001459c & 0x40) == 0) {
    wr_rx_gain_mem(1,0,auStack_1fc,&phy_rxrf_dc,&phy_rxbb_dc,&phy_chan_dc,DAT_00014671 + 1,
                   auStack_1b0);
    wr_rx_gain_mem(0,0,auStack_209 + 1,&DAT_0001442c,&phy_rxbb_dc,&phy_chan_dc,DAT_00014672 + 1,
                   auStack_e8);
    DAT_0001459c = DAT_0001459c | 0x40;
  }
  _DAT_6001c02c = (DAT_00014672 & 0x7f) << 8 | _DAT_6001c02c & 0xffff80ff;
  uVar1 = (uint)DAT_00014672;
  if (0x4c < uVar1) {
    uVar1 = 0x4c;
  }
  _DAT_6001c13c = uVar1 << 0x12 | _DAT_6001c13c & 0xfe03ffff;
  _DAT_6001c0d0 = _DAT_6001c0d0 & 0xfe01ffff | 0xa00000;
  _DAT_60011848 = _DAT_60011848 & 0xff00ffff | 0x500000;
  _DAT_6001c0a4 = (DAT_00014671 & 0x7f) << 0xf | _DAT_6001c0a4 & 0xffc07fff;
  _DAT_6000607c = _DAT_6000607c | 0x18001800;
  return;
}

