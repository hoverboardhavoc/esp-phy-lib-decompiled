/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> bb_common.o -> tx_a_frame_trig
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_a_frame_trig(void)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)Plcp0AddrGet(10);
  puVar2 = (uint *)ConfAddrGet(10);
  tx_queue = 10;
  _DAT_60033c34 = _DAT_60033c34 | 2;
  _DAT_60033c40 = _DAT_60033c40 | 3;
  *puVar2 = *puVar2 & 0xffc00fff | 0x1000;
  *puVar1 = *puVar1 | 0xc0000000;
  return;
}

