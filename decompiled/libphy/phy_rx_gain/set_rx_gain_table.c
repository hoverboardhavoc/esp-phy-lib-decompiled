/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_rx_gain.o -> set_rx_gain_table
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
  
  memcpy(auStack_209 + 1,&DAT_00010824,9);
  memcpy(auStack_1fc,&DAT_00010824,9);
  memcpy(auStack_1f0,&_LANCHOR0,0xf);
  memcpy(auStack_1e0,&DAT_00010830,0xf);
  memcpy(auStack_1d0,&DAT_00010840,0xf);
  memcpy(auStack_1c0,&DAT_00010850,0xf);
  uVar1 = 9U - param_2 & 0xff;
  DAT_000110f9 = auStack_209[uVar1];
  if ((_DAT_00011128 & 0x200) == 0) {
    uVar2 = gen_rx_gain_table(auStack_1b0,0x16,auStack_1fc,auStack_1e0,auStack_1c0,9,0);
    if (uVar2 < 0x50) {
      DAT_000111fd = (byte)uVar2;
    }
    else {
      DAT_000111fd = 0x4f;
    }
    uVar2 = gen_rx_gain_table(auStack_e8,0x16,auStack_209 + 1,auStack_1f0,auStack_1d0,9,0);
    if (uVar2 < 0x50) {
      DAT_000111fe = (byte)uVar2;
    }
    else {
      DAT_000111fe = 0x4f;
    }
    set_rf_freq_offset(DAT_000110fb,param_1,0);
    set_rx_gain_param(1,&phy_param,auStack_1fc,DAT_000111fd + 1,auStack_1b0,9);
    if (DAT_000110aa != '\x11') {
      set_rx_gain_param(0,&phy_param,auStack_209 + 1,DAT_000111fe + 1,auStack_e8,uVar1);
    }
    wr_rx_gain_mem(1,0,auStack_1fc,&phy_rxrf_dc,&phy_rxbb_dc,&phy_chan_dc,DAT_000111fd + 1,
                   auStack_1b0);
    wr_rx_gain_mem(0,0,auStack_209 + 1,&phy_rxrf_dc,&phy_rxbb_dc,&phy_chan_dc,DAT_000111fe + 1,
                   auStack_e8);
    _DAT_00011128 = _DAT_00011128 | 0x200;
  }
  _DAT_6001c02c = (DAT_000111fe & 0x7f) << 8 | _DAT_6001c02c & 0xffff80ff;
  uVar1 = (uint)DAT_000111fe;
  if (0x4c < uVar1) {
    uVar1 = 0x4c;
  }
  _DAT_6001c13c = uVar1 << 0x12 | _DAT_6001c13c & 0xfe03ffff;
  _DAT_6001c0d0 = _DAT_6001c0d0 & 0xfe01ffff | 0xa00000;
  _DAT_60011848 = _DAT_60011848 & 0xff00ffff | 0x500000;
  _DAT_6001c0a4 = (DAT_000111fd & 0x7f) << 0xf | _DAT_6001c0a4 & 0xffc07fff;
  _DAT_6000607c = _DAT_6000607c | 0x18001800;
  return;
}

