/*
 * Last changed at upstream commit c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * https://github.com/espressif/esp-phy-lib/commit/c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * Upstream date: 2024-06-05 14:35:04 +0800
 * Upstream subject: update C6 H2 libphy for coex test ble 154 chan bug
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_tx_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_tx_init(int param_1,int param_2,uint param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  ble_select_phy_speed();
  ble_radio_tx_data_init(param_5,param_4);
  uVar3 = 0xf;
  if (param_3 < 0x10) {
    uVar3 = param_3 & 0xff;
  }
  _DAT_600a150c = _DAT_600a150c & 0xffffff00 | uVar3;
  iVar1 = 0x962;
  uVar3 = (byte)ch_map2[param_1] + 0x962;
  if ((0x97d < uVar3) && (iVar1 = 0x97e, 0x997 < uVar3)) {
    iVar1 = 0x998;
  }
  if (dis_tx_scale != '\0') {
    return;
  }
  if (param_2 == 2) {
    if (param_4 == 1) {
      iVar2 = 0x800;
    }
    else {
      if (param_4 != 0) {
        _DAT_600a0c08 = _DAT_600a0c08 & 0xff000fff | 0x800000;
        return;
      }
      iVar2 = 0x85f;
    }
    uVar4 = (iVar2 + (uVar3 - iVar1) * -3) * 0x1000 & 0xfff000;
    uVar3 = 0xff000fff;
  }
  else {
    if ((param_4 == 1) || (param_4 == 4)) {
      uVar3 = ((uVar3 - iVar1) * 0xc) / 10;
    }
    else {
      if (param_4 != 0) {
        _DAT_600a0c08 = _DAT_600a0c08 & 0xfffff000 | 0x408;
        return;
      }
      uVar3 = -(((uVar3 - iVar1) * 0xc) / 10);
    }
    uVar4 = uVar3 + 0x408 & 0xfff;
    uVar3 = 0xfffff000;
  }
  _DAT_600a0c08 = uVar4 | uVar3 & _DAT_600a0c08;
  return;
}

