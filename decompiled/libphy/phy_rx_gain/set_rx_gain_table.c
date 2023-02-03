/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_rx_gain.o -> set_rx_gain_table
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
  uStack_e8 = 0x11100a12;
  uStack_e4 = 10;
  uStack_e0 = 0xc0c0c00;
  uStack_dc = 0x16;
  if ((_DAT_00011034 & 0x200) == 0) {
    uVar1 = gen_rx_gain_table(auStack_d8,0x20,&local_f0,&uStack_e8,&uStack_e0,5,0);
    if (uVar1 < 0x50) {
      DAT_00011059 = (char)uVar1;
    }
    else {
      DAT_00011059 = 'O';
    }
    _DAT_00011034 = _DAT_00011034 | 0x200;
  }
  if ((_DAT_00011034 & 0x40) == 0) {
    wr_rx_gain_mem(DAT_00011059 + '\x01',auStack_d8,1);
    _DAT_00011034 = _DAT_00011034 | 0x40;
  }
  _DAT_600a0450 = _DAT_600a0450 | 0x60000000;
  return;
}

