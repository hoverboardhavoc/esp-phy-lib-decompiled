/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_tx_scale_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_tx_scale_set(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_a1;
  int iVar4;
  int iVar5;
  
  if (dis_tx_scale != '\0') {
    return;
  }
  iVar4 = 0x962;
  uVar1 = (byte)ch_map2[param_1] + 0x962;
  if (param_3 != 2) {
    if ((0x97d < uVar1) && (iVar4 = 0x994, uVar1 < 0x993)) {
      iVar4 = 0x97e;
    }
    if ((param_2 == 1) || (param_2 == 4)) {
      __floatunsidf((uVar1 - iVar4) * 4);
      uVar1 = _DAT_600a0c08;
      __muldf3(0x33333333,0x33333333);
      __adddf3(0,0);
    }
    else {
      if (param_2 != 0) {
        return;
      }
      __floatunsidf((uVar1 - iVar4) * 4);
      uVar1 = _DAT_600a0c08;
      uVar3 = __muldf3(0x33333333,0x33333333);
      __subdf3(0,0,uVar3,extraout_a1);
    }
    uVar2 = __fixunsdfsi();
    _DAT_600a0c08 = uVar2 & 0xfff | uVar1 & 0xfffff000;
    return;
  }
  if ((0x97d < uVar1) && (iVar4 = 0x994, uVar1 < 0x993)) {
    iVar4 = 0x97e;
  }
  if (param_2 == 1) {
    iVar5 = 0x800;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    iVar5 = 0x85f;
  }
  _DAT_600a0c08 = (iVar5 + (uVar1 - iVar4) * -3) * 0x1000 & 0xfff000 | _DAT_600a0c08 & 0xff000fff;
  return;
}

