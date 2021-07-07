/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> get_bbgain_db
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint get_bbgain_db(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = 0;
  do {
    if (((int)(param_1 & 0x3f) >> (uVar2 & 0x1f) & 1U) != 0) {
      uVar1 = uVar1 + 6 & 0xff;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 6);
  return uVar1 + (param_1 >> 6 & 0xff) & 0xff;
}

