/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> trig_tx_frame
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void trig_tx_frame(void)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)Plcp0AddrGet(tx_queue);
  puVar2 = (uint *)ConfAddrGet(tx_queue);
  if (((_DAT_600a4c48 & 2) != 0) && (tx_frame_delay_us < (uint)(_DAT_600ad000 - tx_frame_time))) {
    _DAT_600a4c40 = _DAT_600a4c40 | 2;
    _DAT_600a4c4c = _DAT_600a4c4c | 3;
    *puVar2 = *puVar2 & 0xffc00fff | 0x1000;
    *puVar1 = *puVar1 | 0xc0000000;
    tx_frame_time = _DAT_600ad000;
  }
  return;
}

