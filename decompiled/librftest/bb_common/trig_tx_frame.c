/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> bb_common.o -> trig_tx_frame
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void trig_tx_frame(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  
  puVar3 = (uint *)Plcp0AddrGet(tx_queue);
  puVar4 = (uint *)ConfAddrGet(tx_queue);
  if (tx_frame_enable != '\0') {
    if ((DAT_60012f8d & 2) != 0) {
      iVar5 = phy_time_now(DAT_60012f8f,DAT_60012f90);
      uVar2 = DAT_60012f94;
      uVar1 = DAT_60012f93;
      if (tx_frame_delay_us < (uint)(iVar5 - tx_frame_time)) {
        DAT_60012f85 = DAT_60012f85 | 2;
        DAT_60012f91 = DAT_60012f91 | 3;
        *puVar4 = *puVar4 & 0xffc00fff | 0x1000;
        *puVar3 = *puVar3 | 0xc0000000;
        tx_frame_time = phy_time_now(uVar1,uVar2);
      }
    }
  }
  return;
}

