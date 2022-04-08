/*
 * Last changed at upstream commit dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * https://github.com/espressif/esp-phy-lib/commit/dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * Upstream date: 2022-04-07 23:37:47 -0400
 * Upstream subject: C3/S3 fix "i2c critical" and iram functions
 * Source: libphy -> phy_chip_v7.o -> ram_tx_paon_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_tx_paon_set(void)

{
  _DAT_6001d000 = _DAT_6001d000 & 0xffe007ff | 0xa000;
  _DAT_600060f8 = _DAT_600060f8 & 0xffff00ff | 0x9600;
  _DAT_6001d06c = 0x782a094;
  _DAT_6001c400 = _DAT_6001c400 & 0xfff8ffff;
  return;
}

