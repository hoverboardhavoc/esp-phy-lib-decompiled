/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
 * Source: libbttestmode -> zb_macinit_txrx.o -> zb_tx_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_tx_init(uint param_1,uint param_2,uint param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 < 0x1b) {
    _DAT_20103048 = param_2 * 5 + -0x34;
  }
  else {
    _DAT_20103048 = param_2 - 0x962;
  }
  if (0xf < param_3) {
    param_3 = 0xf;
  }
  if (0x7f < param_1) {
    param_1 = 0x7f;
  }
  if (param_1 < 3) {
    param_1 = 3;
  }
  tx_frame = (undefined1)param_1;
  uVar3 = 0;
  puVar2 = &tx_frame;
  _DAT_2010304c = param_3;
  do {
    (&DAT_00010b59)[uVar3] = (char)uVar3;
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < param_1);
  if (param_4 != 0) {
    iVar4 = 0;
    do {
      puVar1 = &tx_frame_10 + iVar4;
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
    } while (iVar4 != 10);
  }
  _DAT_201030d0 = &tx_frame;
  return;
}

