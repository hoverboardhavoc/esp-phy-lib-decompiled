/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> mac_common.o -> rx_ampdu_entry_fresh
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rx_ampdu_entry_fresh(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 1;
  if (0xf < param_2) {
    uVar3 = param_2 >> 3;
  }
  iVar2 = 0;
  for (uVar1 = 0; uVar3 != uVar1; uVar1 = uVar1 + 1) {
    iVar2 = uVar1 * 0xc;
    *(undefined4 *)(RX_aplkbk_start + iVar2) = 0x80008008;
    *(uint *)(RX_aplkbk_start + 4 + iVar2) = uVar1 * 8 + param_1;
    *(int *)(RX_aplkbk_start + 8 + iVar2) = iVar2 + 0xc + RX_aplkbk_start;
    iVar2 = iVar2 + RX_aplkbk_start;
  }
  *(int *)(iVar2 + 8) = RX_aplkbk_start;
  return;
}

