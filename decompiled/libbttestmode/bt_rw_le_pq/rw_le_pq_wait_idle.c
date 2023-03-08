/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_pq.o -> rw_le_pq_wait_idle
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_pq_wait_idle(uint *param_1)

{
  do {
  } while ((_DAT_60031014 & 0x20) == 0);
  _DAT_60031018 = _DAT_60031018 | 0x20;
  *param_1 = *param_1 & 0xffffffc7;
  _DAT_3fcd0300 = _DAT_3fcd0300 & 0xffff7fff;
  _DAT_3fcd0320 = _DAT_3fcd0320 & 0xffff7fff;
  return;
}

