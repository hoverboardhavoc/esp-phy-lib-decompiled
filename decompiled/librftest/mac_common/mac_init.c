/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> mac_common.o -> mac_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mac_init(void)

{
  mac_buffer_get();
  do {
  } while ((_DAT_600a4ddc & 1) == 0);
  _DAT_600a40d8 = _DAT_600a40d8 & 0xfffffff8;
  _DAT_600a40dc = _DAT_600a40dc & 0xfffffff8;
  _DAT_600a40e0 = _DAT_600a40e0 & 0xfffffff8;
  _DAT_600a40e4 = _DAT_600a40e4 & 0xfffffff8;
  _DAT_600a4c40 = 0x1f;
  _DAT_600a405c = 0x7060504;
  _DAT_600a4060 = 0x908;
  _DAT_600a4d68 = 0x4013000;
  _DAT_600a4c24 = _DAT_600a4c24 & 0x7fffffff;
  _DAT_600a4c8c = _DAT_600a4c8c & 0x7fffffed | 0x800000;
  _DAT_600a407c = _DAT_600a407c & 0xefffff00 | 0xc;
  _DAT_600a4ddc = _DAT_600a4ddc | 2;
  rx_ampdu_buffer_init(RX_ampdu_buff0_start,0x1000);
  _DAT_600a407c = _DAT_600a407c | 0x10000000;
  rx_ampdu_entry_fresh(RX_ampdu_entry0_start,300);
  rx_ampdu_entrysd_fresh(RX_ampdu_entrysd0_start,100);
  rx_buffer_ena();
  _DAT_600a407c = _DAT_600a407c & 0xefffffff;
  return;
}

