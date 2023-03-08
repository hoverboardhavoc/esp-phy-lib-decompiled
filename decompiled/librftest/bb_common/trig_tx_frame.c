/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
  if (((tx_frame_enable != '\0') && ((_DAT_60033c3c & 2) != 0)) &&
     (tx_frame_delay_us < (uint)(_DAT_60035000 - tx_frame_time))) {
    _DAT_60033c34 = _DAT_60033c34 | 2;
    _DAT_60033c40 = _DAT_60033c40 | 3;
    *puVar2 = *puVar2 & 0xffc00fff | 0x1000;
    *puVar1 = *puVar1 | 0xc0000000;
    tx_frame_time = _DAT_60035000;
  }
  return;
}

