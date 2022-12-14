/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_i2c.o -> phy_i2c_master_cmd_mem_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_i2c_master_cmd_mem_init(void)

{
  _DAT_600afc00 = 0xa0267;
  _DAT_600afc04 = 0x72026b;
  _DAT_600afc08 = 0x4a036b;
  _DAT_600afc0c = 0xf8046b;
  _DAT_600afc10 = 0x2056b;
  _DAT_600afc14 = 0xc8066b;
  _DAT_600afc18 = 0xb9076b;
  _DAT_600afc1c = 0x81086b;
  _DAT_600afc20 = 0x680062;
  _DAT_600afc24 = 0x280462;
  _DAT_600afc28 = 0x720f62;
  _DAT_600afc2c = 0x2a0267;
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

