/*
 * Last changed at upstream commit d39766d34edf7bf22dddc91d5f45f2b91576a407
 * https://github.com/espressif/esp-phy-lib/commit/d39766d34edf7bf22dddc91d5f45f2b91576a407
 * Upstream date: 2023-05-18 20:57:26 +0800
 * Upstream subject: esp32c6: enable wifi_apb_clk before phy_init and restore after phy_init, C6_libphy_20230517_b4b3263
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
  
  memcpy(auStack_20,&DAT_00011118,0x10);
  memcpy(local_30,&DAT_00011128,0xe);
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

