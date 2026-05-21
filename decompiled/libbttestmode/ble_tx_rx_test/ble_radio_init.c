/*
 * Last changed at upstream commit ae6f29bfebbfdacc1bba905afff3399fe733245f
 * https://github.com/espressif/esp-phy-lib/commit/ae6f29bfebbfdacc1bba905afff3399fe733245f
 * Upstream date: 2026-05-21 14:11:41 +0800
 * Upstream subject: support wifi api and regdma
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_radio_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_radio_init(void)

{
  _DAT_20101514 = PACKAGE_CFG_DEFINE;
  _DAT_20101518 = 0x20300ff;
  _DAT_2010152c = 0;
  _DAT_20101530 = 1;
  _DAT_20101534 = 0x103;
  _DAT_20101538 = 0x65b;
  _DAT_2010153c = 0x555555;
  _DAT_2010151c = 0x76412900;
  _DAT_20101524 = _DAT_20101524 & 0xffffff00 | 0x71;
  _DAT_20101508 = 0;
  _DAT_20101554 = 0x65;
  _DAT_20101510 = RADIO_MODE_DEFINE << 4 | RADIO_MODE_DEFINE << 8 | RADIO_MODE_DEFINE;
  _DAT_20101830 = 0x4451;
  _DAT_20101834 = 0x4401;
  _DAT_20101ff0 = 9;
  _DAT_20101650 = _DAT_20101650 & 0xff00ff00 | 0x640064;
  _DAT_20101074 = 0x2f000000;
  return;
}

