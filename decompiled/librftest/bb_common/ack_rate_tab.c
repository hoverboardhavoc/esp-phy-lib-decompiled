/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> bb_common.o -> ack_rate_tab
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ack_rate_tab(uint param_1)

{
  if (0xf < param_1) {
    param_1 = (param_1 & 0xf) + 0x40;
  }
  _DAT_60033404 = param_1 << 8 | param_1 << 0x18 | param_1 << 0x10 | param_1;
  _DAT_60033408 = _DAT_60033404;
  _DAT_6003340c = _DAT_60033404;
  return;
}

