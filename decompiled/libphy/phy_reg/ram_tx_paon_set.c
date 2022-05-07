/*
 * Last changed at upstream commit 478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * https://github.com/espressif/esp-phy-lib/commit/478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * Upstream date: 2022-05-07 21:35:33 +0800
 * Upstream subject: add phy for esp32c2
 * Source: libphy -> phy_reg.o -> ram_tx_paon_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_tx_paon_set(void)

{
  _DAT_60049000 = _DAT_60049000 & 0xffe007ff | 0xa000;
  _DAT_600440f8 = _DAT_600440f8 & 0xffff00ff | 0x5000;
  _DAT_6004906c = 0x381b856;
  _DAT_6004a400 = _DAT_6004a400 & 0xfff8ffff;
  _DAT_6004a05c = 0;
  _DAT_6004684c = _DAT_6004684c & 0x8f7ffff;
  return;
}

