/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> mac_common.o -> rx_ampdu_buffer_fresh
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rx_ampdu_buffer_fresh(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 1;
  if (0x1ff < param_2) {
    uVar3 = param_2 >> 8;
  }
  iVar2 = 0;
  for (uVar1 = 0; uVar3 != uVar1; uVar1 = uVar1 + 1) {
    iVar2 = uVar1 * 0xc;
    *(undefined4 *)(RX_bufflk_start + iVar2) = 0x80100100;
    *(uint *)(RX_bufflk_start + 4 + iVar2) = uVar1 * 0x100 + param_1;
    *(int *)(RX_bufflk_start + 8 + iVar2) = iVar2 + 0xc + RX_bufflk_start;
    iVar2 = iVar2 + RX_bufflk_start;
  }
  *(int *)(iVar2 + 8) = RX_bufflk_start;
  return;
}

