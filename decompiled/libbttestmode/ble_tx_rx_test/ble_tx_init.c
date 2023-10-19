/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_tx_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_tx_init(int param_1,int param_2,uint param_3,int param_4,undefined1 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_a1;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  ble_select_phy_speed();
  ble_radio_tx_data_init(param_5,param_4);
  uVar3 = 0xf;
  if (param_3 < 0x10) {
    uVar3 = param_3 & 0xff;
  }
  _DAT_600a150c = _DAT_600a150c & 0xffffff00 | uVar3;
  if (dis_tx_scale == '\0') {
    iVar4 = 0x962;
    uVar3 = (byte)ch_map2[param_1] + 0x962;
    if (param_2 == 2) {
      if ((0x97d < uVar3) && (iVar4 = 0x994, uVar3 < 0x993)) {
        iVar4 = 0x97e;
      }
      if (param_4 == 1) {
        iVar5 = 0x800;
      }
      else {
        if (param_4 != 0) {
          return;
        }
        iVar5 = 0x85f;
      }
      _DAT_600a0c08 =
           (iVar5 + (uVar3 - iVar4) * -3) * 0x1000 & 0xfff000 | _DAT_600a0c08 & 0xff000fff;
      return;
    }
    if ((0x97d < uVar3) && (iVar4 = 0x994, uVar3 < 0x993)) {
      iVar4 = 0x97e;
    }
    if ((param_4 == 1) || (param_4 == 4)) {
      __floatunsidf((uVar3 - iVar4) * 4);
      uVar3 = _DAT_600a0c08;
      __muldf3(0x33333333,0x33333333);
      __adddf3(0,0);
    }
    else {
      if (param_4 != 0) {
        return;
      }
      __floatunsidf((uVar3 - iVar4) * 4);
      uVar3 = _DAT_600a0c08;
      uVar2 = __muldf3(0x33333333,0x33333333);
      __subdf3(0,0,uVar2,extraout_a1);
    }
    uVar1 = __fixunsdfsi();
    _DAT_600a0c08 = uVar1 & 0xfff | uVar3 & 0xfffff000;
    return;
  }
  return;
}

