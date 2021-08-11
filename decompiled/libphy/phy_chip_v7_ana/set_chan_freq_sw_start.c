/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> set_chan_freq_sw_start
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_chan_freq_sw_start(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  
  _DAT_6000e0c4 = _DAT_6000e0c4 & 0xfffffeff;
  correct_rfpll_offset(param_2,param_3,&phy_param);
  _DAT_6000e150 = _DAT_6000e150 & 0xf00fffff | param_1 << 0x14;
  _DAT_6000e0c4 = (param_1 & 0x7f) << 1 | _DAT_6000e0c4 & 0xffffff00;
  cVar2 = '\x03';
  do {
    do {
    } while (_DAT_6000e168 < 0);
    _DAT_6000e0c4 = _DAT_6000e0c4 & 0xfffffeff;
    ets_delay_us(1);
    uVar1 = _DAT_6000e170;
    do {
    } while (_DAT_6000e168 < 0);
    pll_cap_cal();
  } while ((param_1 != (uVar1 >> 0x11 & 0x7f)) && (cVar2 = cVar2 + -1, cVar2 != '\0'));
  return;
}

