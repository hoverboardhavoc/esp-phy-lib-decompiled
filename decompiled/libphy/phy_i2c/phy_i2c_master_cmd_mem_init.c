/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_i2c.o -> phy_i2c_master_cmd_mem_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_i2c_master_cmd_mem_init(void)

{
  _DAT_600afc00 = 0x60267;
  _DAT_600afc04 = 0x72026b;
  _DAT_600afc08 = 0x4c036b;
  _DAT_600afc0c = 0xf4046b;
  _DAT_600afc10 = 0x2056b;
  _DAT_600afc14 = 0x88066b;
  _DAT_600afc18 = 0xb9076b;
  _DAT_600afc1c = 0x81086b;
  _DAT_600afc20 = 0x680062;
  _DAT_600afc24 = 0x280462;
  _DAT_600afc28 = (uint)DAT_00011192 << 0x10 | 0xf62;
  _DAT_600afc2c = 0x260267;
  _DAT_600afc30 = (uint)DAT_000110ed << 0x10 | 0x467;
  _DAT_600afc34 = (uint)DAT_000110ed << 0x10 | 0x567;
  _DAT_600afc38 = (uint)DAT_000110ee << 0x10 | 0x667;
  _DAT_600afc3c = (uint)DAT_000110ee << 0x10 | 0x767;
  _DAT_600afc40 = (uint)DAT_000110ed << 0x10 | 0xc67;
  _DAT_600afc44 = (uint)DAT_000110ed << 0x10 | 0xd67;
  _DAT_600afc48 = (uint)DAT_000110ee << 0x10 | 0xe67;
  _DAT_600afc4c = (uint)DAT_000110ee << 0x10 | 0xf67;
  return;
}

