/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> bb_common.o -> tx_data_frame
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 tx_data_frame(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)Plcp0AddrGet(10);
  DAT_60012f85 = DAT_60012f85 | 0x80;
  DAT_60012f91 = DAT_60012f91 | 0x80;
  *puVar1 = *puVar1 | 0xc0000000;
  do {
    if ((DAT_60012f8d & 0x80) != 0) {
      DAT_60012f91 = DAT_60012f91 | 0x80;
      return CONCAT13(DAT_60012fbc,CONCAT12(DAT_60012fbb,CONCAT11(DAT_60012fba,DAT_60012fb9)));
    }
  } while (param_1 != 0);
  return 0xffffffff;
}

