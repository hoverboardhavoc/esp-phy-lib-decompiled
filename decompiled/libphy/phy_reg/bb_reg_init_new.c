/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
 * Source: libphy -> phy_reg.o -> bb_reg_init_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bb_reg_init_new(void)

{
  _DAT_600a7400 = _DAT_600a7400 | 0x6000;
  _DAT_600a7848 = _DAT_600a7848 & 0xe0000000 | 0x170433af;
  _DAT_600a7808 = _DAT_600a7808 & 0xffffc07f | 0x3000;
  _DAT_600a78dc = _DAT_600a78dc & 0xffffc07f | 0x100;
  _DAT_600a78e4 = _DAT_600a78e4 & 0xffbfffff;
  _DAT_600a7c30 = _DAT_600a7c30 & 0xfff00fff;
  _DAT_600a790c = _DAT_600a790c & 0xfffff7ff;
  _DAT_600a7ca8 = _DAT_600a7ca8 | 0x100000;
  _DAT_600a7980 = _DAT_600a7980 & 0xfdffffff;
  _DAT_600a7890 = _DAT_600a7890 & 0xfdffffff | 0x1000000;
  _DAT_600a7a28 = _DAT_600a7a28 & 0xffbfffff;
  _DAT_600a7424 = _DAT_600a7424 & 0xe01fffff | 0x1000000;
  _DAT_600a7cd0 = _DAT_600a7cd0 | 0xf000f;
  _DAT_600a7c00 = _DAT_600a7c00 | 0x200;
  _DAT_600a981c = _DAT_600a981c | 0x800;
  return;
}

