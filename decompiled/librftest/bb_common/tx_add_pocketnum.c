/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
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
  *(char *)(_PSDU0_OFFSET + 0x16) = (char)_tx_pocket_num << 4;
  *(char *)(iVar2 + 0x17) = (char)(_tx_pocket_num >> 4);
  *(char *)(iVar2 + 0x20) = (char)((ushort)uVar1 >> 8);
  *(char *)(iVar2 + 0x21) = (char)uVar1;
  if ((ushort)(_tx_pocket_num + 1) < 0x1000) {
    _tx_pocket_num = _tx_pocket_num + 1;
    return;
  }
  _tx_pocket_num = 0;
  return;
}

