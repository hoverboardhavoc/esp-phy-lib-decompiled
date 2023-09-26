/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> tx_add_pocketnum
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_add_pocketnum(void)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = _PSDU0_OFFSET;
  if (_tx_pocket_num == 0) {
    rx_ack_num = 0;
  }
  uVar1 = rx_ack_num;
  *(char *)(_PSDU0_OFFSET + 0x1e) = (char)_tx_pocket_num << 4;
  *(char *)(iVar2 + 0x1f) = (char)(_tx_pocket_num >> 4);
  *(char *)(iVar2 + 0x28) = (char)((ushort)uVar1 >> 8);
  *(char *)(iVar2 + 0x29) = (char)uVar1;
  if ((ushort)(_tx_pocket_num + 1) < 0x1000) {
    _tx_pocket_num = _tx_pocket_num + 1;
    return;
  }
  _tx_pocket_num = 0;
  return;
}

