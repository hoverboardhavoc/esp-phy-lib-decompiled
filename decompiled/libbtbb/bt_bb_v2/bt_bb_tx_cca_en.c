/*
 * Last changed at upstream commit 1e3487dc778d48c15229af05ce0f03f78e15528c
 * https://github.com/espressif/esp-phy-lib/commit/1e3487dc778d48c15229af05ce0f03f78e15528c
 * Upstream date: 2025-01-03 11:45:24 +0800
 * Upstream subject: support h2 eco5 test
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_tx_cca_en
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_tx_cca_en(int param_1)

{
  int iVar1;
  
  iVar1 = 0x14;
  if (param_1 == 0) {
    iVar1 = 0;
  }
  _DAT_600a2010 = (iVar1 + 0x31) * 0x20 - 0x140U & 0x1fe0 | _DAT_600a2010 & 0xffffe003;
  return;
}

