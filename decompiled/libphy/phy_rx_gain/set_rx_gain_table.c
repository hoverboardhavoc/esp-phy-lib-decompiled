/*
 * Last changed at upstream commit 05e53904ac98632e09d78693437b7fa0b35f36da
 * https://github.com/espressif/esp-phy-lib/commit/05e53904ac98632e09d78693437b7fa0b35f36da
 * Upstream date: 2023-05-22 12:26:13 +0800
 * Upstream subject: update h2 libphy phy_version: 200,0, 1cef4f4, May 22 2023, 11:57:13
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
  undefined1 auStack_d8 [204];
  
  local_f0 = 0xe7d7c7c7;
  uStack_ec = 0xf7;
  uStack_e8 = 0x100f0a12;
  uStack_e4 = 10;
  uStack_e0 = 0xc0c0c00;
  uStack_dc = 0x16;
  uVar1 = gen_rx_gain_table(auStack_d8,0x20,&local_f0,&uStack_e8,&uStack_e0,5,0);
  if (uVar1 < 0x50) {
    DAT_00011056 = (char)uVar1;
  }
  else {
    DAT_00011056 = 'O';
  }
  _DAT_00011034 = _DAT_00011034 | 0x200;
  phy_get_efuse_rxiq(&phy_param);
  if ((_DAT_00011034 & 0x100) == 0) {
    set_rx_gain_cal_dc(&phy_param);
    _DAT_00011034 = _DAT_00011034 | 0x100;
  }
  wr_rx_gain_mem(DAT_00011056 + '\x01',auStack_d8,&phy_param);
  _DAT_600a0450 = _DAT_600a0450 | 0x60000000;
  return;
}

