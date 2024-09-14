/*
 * Last changed at upstream commit 8608fcf54d51e81f2e74ebf335fa33f61953f7c8
 * https://github.com/espressif/esp-phy-lib/commit/8608fcf54d51e81f2e74ebf335fa33f61953f7c8
 * Upstream date: 2024-09-14 10:30:08 +0800
 * Upstream subject: update ESP32, S2 and H2 librftest.a to support RF cert_test
 * Source: libbttestmode -> zb_macinit_txrx.o -> zb_tx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_tx(uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_28;
  undefined4 auStack_24 [3];
  
  uStack_28 = 0;
  auStack_24[0] = 0;
  bt_track_pll_cap();
  if (param_2 < 0x1b) {
    param_2 = param_2 * 5 + 0x92e;
  }
  chip_v7_set_chan(param_2 & 0xffff,0);
  if (0x7f < param_1) {
    param_1 = 0x7f;
  }
  if (param_1 < 3) {
    param_1 = 3;
  }
  if (param_5 != 0 || fcc_mode_sel != '\0') {
    _DAT_600a3098 = _DAT_600a3098 & 0xffffff00 | 0x3f;
  }
  zb_tx_init(param_1,param_2,param_3,0);
  if (param_5 != 0 || fcc_mode_sel != '\0') {
    bt_track_pll_cap();
  }
  set_pbus_mem_update(param_3 & 0xff);
  uVar1 = 0;
  do {
    iVar2 = zb_tx_a_frame(&uStack_28,auStack_24,0,param_3);
    uVar1 = uVar1 + 1;
    if (((param_4 != 0) && (param_4 <= uVar1)) || (iVar3 = GetStopCmd(), iVar3 == 0)) break;
  } while (iVar2 == 0);
  phy_printf("Txed %d %d\n",uStack_28,auStack_24[0]);
  if (param_5 != 0) {
    _DAT_600a3098 = _DAT_600a3098 & 0xffffff00;
  }
  return;
}

