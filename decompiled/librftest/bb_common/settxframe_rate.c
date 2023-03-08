/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> bb_common.o -> settxframe_rate
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void settxframe_rate(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  if (0x10 < param_4) {
    *param_1 = *param_1 & 0xf9ffffff | 0x2000000;
    *param_2 = param_4 & 7 | (param_3 + 0x28U) * 0x100;
    return;
  }
  *param_1 = param_4 << 0xc | param_3 + 0x28U;
  return;
}

