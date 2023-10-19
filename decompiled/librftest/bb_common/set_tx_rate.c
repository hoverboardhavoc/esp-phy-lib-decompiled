/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> bb_common.o -> set_tx_rate
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_tx_rate(undefined4 param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar1 = (uint *)Plcp1AddrGet();
  puVar2 = (uint *)HTsigAddrGet(param_1);
  puVar3 = (uint *)HT40LenAddrGet(param_1);
  if ((param_2 < 0x10) || (param_5 == 1)) {
    *puVar1 = (param_2 & 0x1f) << 0xc | *puVar1 & 0xfffe0fff;
    *puVar1 = *puVar1 & 0xf9ffffff;
  }
  else {
    if (param_6 != 0) {
      if ((param_6 == 1) || (param_6 == 2)) {
        *puVar1 = *puVar1 & 0xf9ffffff | 0x4000000;
        *puVar2 = *puVar2 & 0xffffff7f;
      }
      goto _L225;
    }
    *puVar1 = *puVar1 & 0xfffe0fff | 0xb000;
    *puVar1 = *puVar1 & 0xf9ffffff | 0x2000000;
    *puVar2 = param_2 - 0x10 & 0x7f | *puVar2 & 0xffffff80;
    if (param_3 == 1) {
      *puVar3 = param_2 << 0x1c | *puVar3 & 0xfffffff;
    }
  }
  *puVar2 = (param_3 & 1) << 7 | *puVar2 & 0xffffff7f;
_L225:
  *puVar1 = (param_4 & 1) << 0x1b | *puVar1 & 0xf7ffffff;
  return;
}

