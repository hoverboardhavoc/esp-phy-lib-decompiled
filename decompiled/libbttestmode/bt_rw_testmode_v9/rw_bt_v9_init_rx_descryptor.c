/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_testmode_v9.o -> rw_bt_v9_init_rx_descryptor
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_bt_v9_init_rx_descryptor(uint *param_1,uint param_2,int param_3,uint param_4)

{
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = *param_1 & 0xffff8000 | param_2 & 0x7fff;
  param_1[2] = param_1[2] & 0xffff | param_3 << 0x10;
  param_1[3] = param_4 & 0xffff | param_1[3] & 0xffff0000;
  return;
}

