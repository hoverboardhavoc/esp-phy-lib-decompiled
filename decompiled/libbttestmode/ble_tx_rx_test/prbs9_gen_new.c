/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> ble_tx_rx_test.o -> prbs9_gen_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void prbs9_gen_new(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = 0;
  uVar6 = 0;
  uVar5 = 0xffff;
  do {
    uVar2 = 0;
    do {
      uVar3 = uVar5 << 1;
      uVar5 = (uVar5 ^ uVar5 << 4) >> 8 & 1 | uVar3;
      uVar4 = ~(1 << (uVar2 & 0x1f)) & uVar6;
      uVar3 = ((uVar3 & 0x200) >> 9) << (uVar2 & 0x1f);
      uVar2 = uVar2 + 1;
      uVar6 = uVar4 | uVar3 & 0xff;
    } while (uVar2 != 0x20);
    *(byte *)(param_1 + iVar1) = (byte)uVar4 | (byte)uVar3;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x101);
  return;
}

