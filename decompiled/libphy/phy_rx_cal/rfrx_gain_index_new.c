/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
 * Source: libphy -> phy_rx_cal.o -> rfrx_gain_index_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint rfrx_gain_index_new(int param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_30 [16];
  undefined1 auStack_20 [16];
  
  memcpy(auStack_20,&DAT_000111b0,0x10);
  memcpy(local_30,&DAT_000111c0,0xe);
  uVar3 = 0;
  while( true ) {
    uVar2 = uVar3 & 0xff;
    puVar1 = local_30;
    if (param_1 == 0) {
      puVar1 = auStack_20;
    }
    if (*(ushort *)(puVar1 + uVar3 * 2) == param_2) break;
    uVar3 = uVar3 + 1;
    if ((param_1 == 0) + 7 <= (uVar3 & 0xff)) {
      return uVar2 + 1 & 0xff;
    }
  }
  return uVar2;
}

