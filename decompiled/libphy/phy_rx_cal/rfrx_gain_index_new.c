/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
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
  
  memcpy(auStack_20,&DAT_00010b18,0x10);
  memcpy(local_30,&DAT_00010b28,0xe);
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

