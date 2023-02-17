/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
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
  _DAT_600afc28 = (uint)DAT_000111ba << 0x10 | 0xf62;
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

