/*
 * Last changed at upstream commit 6b304ed9f5ba7f70b2bde6549f24f18f6b634f23
 * https://github.com/espressif/esp-phy-lib/commit/6b304ed9f5ba7f70b2bde6549f24f18f6b634f23
 * Upstream date: 2026-04-20 19:43:28 +0800
 * Upstream subject: S31 support 154 api and light sleep
 * Source: libbttestmode -> zb_macinit_txrx.o -> zb_tx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_tx(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_28;
  undefined4 auStack_24 [4];
  
  uStack_28 = 0;
  auStack_24[0] = 0;
  phy_test_filter_band_set(1);
  _DAT_2010f4b8 = _DAT_2010f4b8 | 1;
  phy_set_clk_conf(3);
  rfpll_cal_track_set();
  if (param_5 != 0) {
    _DAT_20103098 = _DAT_20103098 & 0xffffff00 | 0x3f;
  }
  zb_tx_init(param_1,param_2,param_3,0);
  uVar1 = 0;
  do {
    iVar2 = zb_tx_a_frame(&uStack_28,auStack_24,0);
    uVar1 = uVar1 + 1;
    if (((param_4 != 0) && (param_4 <= uVar1)) || (iVar3 = GetStopCmd(), iVar3 == 0)) break;
  } while (iVar2 == 0);
  phy_printf("Txed %d %d\n",uStack_28,auStack_24[0]);
  phy_set_clk_conf(0);
  if (param_5 != 0) {
    _DAT_20103098 = _DAT_20103098 & 0xffffff00;
  }
  _DAT_2010f4b8 = _DAT_2010f4b8 & 0xfffffffe;
  phy_test_filter_band_set(0);
  return;
}

