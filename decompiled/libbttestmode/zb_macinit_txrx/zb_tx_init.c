/*
 * Last changed at upstream commit c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * https://github.com/espressif/esp-phy-lib/commit/c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * Upstream date: 2024-06-05 14:35:04 +0800
 * Upstream subject: update C6 H2 libphy for coex test ble 154 chan bug
 * Source: libbttestmode -> zb_macinit_txrx.o -> zb_tx_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_tx_init(uint param_1,int param_2,uint param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  _DAT_600a3048 = param_2 + -0x962;
  tx_frame = (undefined1)param_1;
  if (0xf < param_3) {
    param_3 = 0xf;
  }
  _DAT_600a304c = param_3;
  if (param_4 == 0) {
    for (uVar4 = 0; uVar4 < param_1; uVar4 = uVar4 + 1 & 0xff) {
      (&DAT_00010d85)[uVar4] = (char)uVar4;
    }
  }
  else {
    tx_frame = 10;
    puVar3 = &tx_frame;
    iVar2 = 0;
    do {
      puVar1 = &tx_frame_10 + iVar2;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar1;
    } while (iVar2 != 10);
  }
  _DAT_600a30d0 = &tx_frame;
  return;
}

