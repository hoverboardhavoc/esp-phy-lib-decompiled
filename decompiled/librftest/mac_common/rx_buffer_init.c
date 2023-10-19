/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> mac_common.o -> rx_buffer_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 rx_buffer_init(int param_1,uint param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 1;
  if (0x1ff < param_2) {
    uVar4 = param_2 >> 8;
  }
  iVar3 = 0;
  for (uVar2 = 0; uVar4 != uVar2; uVar2 = uVar2 + 1) {
    iVar3 = uVar2 * 0xc;
    *(undefined4 *)(RX_bufflk_start + iVar3) = 0x80000100;
    *(uint *)(RX_bufflk_start + 4 + iVar3) = uVar2 * 0x100 + param_1;
    *(int *)(RX_bufflk_start + 8 + iVar3) = iVar3 + 0xc + RX_bufflk_start;
    iVar3 = iVar3 + RX_bufflk_start;
  }
  *(int *)(iVar3 + 8) = RX_bufflk_start;
  DAT_600123c9 = (char)RX_bufflk_start;
  DAT_600123ca = (char)((uint)RX_bufflk_start >> 8);
  uVar1 = DAT_600123cb;
  DAT_600123cb = (char)((uint)RX_bufflk_start >> 0x10);
  DAT_600123cc = (char)((uint)RX_bufflk_start >> 0x18);
  DAT_600123c5 = 0;
  DAT_600123c6 = 0;
  DAT_600123c7 = 0;
  DAT_600123c8 = 0x80;
  return uVar1;
}

