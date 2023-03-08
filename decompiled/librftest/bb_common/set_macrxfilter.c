/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> bb_common.o -> set_macrxfilter
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_macrxfilter(int param_1)

{
  if (param_1 == 0) {
    _DAT_600330d8 = _DAT_600330d8 & 0xfffffff2;
    _DAT_600330dc = _DAT_600330dc & 0xfffffff2;
    _DAT_600330e0 = _DAT_600330e0 & 0xfffffff2;
    _DAT_600330e4 = _DAT_600330e4 & 0xfffffff2;
  }
  else {
    _DAT_600330d8 = _DAT_600330d8 | 0xd;
    _DAT_600330dc = _DAT_600330dc | 0xd;
    _DAT_600330e0 = _DAT_600330e0 | 0xd;
    _DAT_600330e4 = _DAT_600330e4 | 0xd;
  }
  _DAT_600330d8 = _DAT_600330d8 & 0xfffff7ff;
  _DAT_600330dc = _DAT_600330dc & 0xfffff7ff;
  _DAT_600330e0 = _DAT_600330e0 & 0xfffff7ff;
  _DAT_600330e4 = _DAT_600330e4 & 0xfffff7ff;
  return;
}

