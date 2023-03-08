/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_v9.o -> rw_v9_init_em_radio_table
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_v9_init_em_radio_table(void)

{
  _DAT_3fcd0000 = 0x6040200;
  _DAT_3fcd0004 = 0xe0c0a08;
  _DAT_3fcd0008 = 0x16141210;
  _DAT_3fcd000c = 0x1e1c1a18;
  _DAT_3fcd0010 = 0x26242220;
  _DAT_3fcd0014 = 0x2e2c2a28;
  _DAT_3fcd0018 = 0x36343230;
  _DAT_3fcd001c = 0x3e3c3a38;
  _DAT_3fcd0020 = 0x46444240;
  _DAT_3fcd0024 = 0x4e4c4a48;
  _DAT_3fcd0028 = 0x7050301;
  _DAT_3fcd002c = 0xf0d0b09;
  _DAT_3fcd0030 = 0x17151311;
  _DAT_3fcd0034 = 0x1f1d1b19;
  _DAT_3fcd0038 = 0x27252321;
  _DAT_3fcd003c = 0x2f2d2b29;
  _DAT_3fcd0040 = 0x37353331;
  _DAT_3fcd0044 = 0x3f3d3b39;
  _DAT_3fcd0048 = 0x47454341;
  _DAT_3fcd004c = 0x4d4b49;
  _DAT_60031078 = _DAT_60031078 & 0xffff0000;
  _DAT_60031478 = _DAT_60031478 & 0xffff0000;
  return;
}

