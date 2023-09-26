/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> mac_common.o -> rx_buffer_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rx_buffer_init(int param_1,uint param_2)

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
    *(undefined4 *)(RX_bufflk_start + iVar2) = 0x80000100;
    *(uint *)(RX_bufflk_start + 4 + iVar2) = uVar1 * 0x100 + param_1;
    *(int *)(RX_bufflk_start + 8 + iVar2) = iVar2 + 0xc + RX_bufflk_start;
    iVar2 = iVar2 + RX_bufflk_start;
  }
  *(int *)(iVar2 + 8) = RX_bufflk_start;
  _DAT_600a4084 = RX_bufflk_start;
  _DAT_600a4080 = 0x80000000;
  return;
}

