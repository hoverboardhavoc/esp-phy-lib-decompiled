/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
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
  
  memcpy(auStack_20,&_LANCHOR0,0x10);
  memcpy(local_30,&DAT_00011190,0xe);
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

