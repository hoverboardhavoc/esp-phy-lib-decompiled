/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> bb_common.o -> settxframe_chipid
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void settxframe_chipid(int param_1,undefined4 param_2,uint param_3)

{
  *(undefined4 *)(param_1 + -0x20) = param_2;
  *(uint *)(param_1 + -0x1c) = *(uint *)(param_1 + -0x1c) & 0xffff0000 | param_3 & 0xffff;
  return;
}

