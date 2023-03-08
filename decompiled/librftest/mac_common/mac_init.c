/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
  } while ((_DAT_60033d14 & 1) == 0);
  _DAT_600330dc = _DAT_600330dc & 0xfffffff8;
  _DAT_600330e0 = _DAT_600330e0 & 0xfffffff8;
  _DAT_600330e4 = _DAT_600330e4 & 0xfffffff8;
  _DAT_60033c34 = 0x1f;
  _DAT_60033040 = 0x7060504;
  _DAT_60033044 = 0x908;
  _DAT_60033c60 = 0x80000;
  _DAT_60033d04 = 0x4013000;
  _DAT_60033d90 = 0xc2040;
  _DAT_60033c18 = _DAT_60033c18 & 0x7fffffff;
  _DAT_60033c6c = _DAT_60033c6c & 0x7fffffed | 0x800000;
  _DAT_600330d8 = _DAT_600330d8 & 0xfffffff8 | 0x20;
  _DAT_60033080 = _DAT_60033080 & 0xefffff00 | 0xc;
  _DAT_60033d14 = _DAT_60033d14 | 2;
  rx_ampdu_buffer_init(RX_ampdu_buff0_start,0x1000);
  _DAT_60033080 = _DAT_60033080 | 0x10000000;
  rx_ampdu_entry_fresh(RX_ampdu_entry0_start,300);
  rx_ampdu_entrysd_fresh(RX_ampdu_entrysd0_start,100);
  rx_buffer_ena();
  _DAT_60033080 = _DAT_60033080 & 0xefffffff;
  return;
}

