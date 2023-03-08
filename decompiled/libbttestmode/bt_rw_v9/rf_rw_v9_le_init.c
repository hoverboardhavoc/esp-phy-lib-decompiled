/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_v9.o -> rf_rw_v9_le_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rf_rw_v9_le_init(void)

{
  _DAT_60011050 = _DAT_60011050 & 0xfffff800 | 0x2d0;
  _DAT_60031080 = _DAT_60031080 & 0xff00 | 0xa640064;
  _DAT_60031084 = _DAT_60031084 & 0xff00ff00 | 0x640064;
  _DAT_60031088 = _DAT_60031088 & 0xff00ff00 | 0x640064;
  _DAT_6003108c = _DAT_6003108c & 0xff00ff00 | 0x640064;
  _DAT_60031000 = _DAT_60031000 | 0x400f;
  _DAT_600310e0 = _DAT_600310e0 & 0xfc00fe00 | 0x19000fa;
  _DAT_60031070 = 0;
  _DAT_60031074 = _DAT_60031074 & 0xffffdfff | 0x1020;
  _DAT_60031078 = 0xc8c10100;
  _DAT_60031090 = 0x20202;
  _DAT_60031094 = 0x20202;
  _DAT_60031098 = 0xf320202;
  _DAT_6003109c = 0xf320202;
  _DAT_600312c4 = _DAT_600312c4 | 1;
  _DAT_60031204 = 0x34000;
  _DAT_60031208 = _DAT_60031208 | 0xfffc0000;
  return;
}

