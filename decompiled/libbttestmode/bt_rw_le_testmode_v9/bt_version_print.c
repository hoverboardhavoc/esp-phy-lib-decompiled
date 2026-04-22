/*
 * Last changed at upstream commit 59c1234e929212aec0fdda75769b759951235536
 * https://github.com/espressif/esp-phy-lib/commit/59c1234e929212aec0fdda75769b759951235536
 * Upstream date: 2026-04-22 17:40:08 +0800
 * Upstream subject: support freq hop done api
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> bt_version_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_version_print(void)

{
  bt_bb_v2_version();
  phy_printf("LE autotest version: %s, %s, %s\n","8f9aa17","Apr 13 2026","18:46:29");
  return;
}

