/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_tx_scale_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_tx_scale_set(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = 0x962;
  uVar3 = (byte)ch_map2[param_1] + 0x962;
  if ((0x97d < uVar3) && (iVar1 = 0x97e, 0x997 < uVar3)) {
    iVar1 = 0x998;
  }
  if (dis_tx_scale != '\0') {
    return;
  }
  if (param_3 == 2) {
    if (param_2 == 1) {
      iVar2 = 0x7b8;
    }
    else {
      if (param_2 != 0) {
        _DAT_600c0c04 = _DAT_600c0c04 & 0xff000fff | 0x800000;
        return;
      }
      iVar2 = 0x7ea;
    }
    uVar4 = (iVar2 + (uVar3 - iVar1) * -3) * 0x1000 & 0xfff000;
    uVar3 = 0xff000fff;
  }
  else {
    if ((param_2 == 1) || (param_2 == 4)) {
      uVar3 = ((uVar3 - iVar1) * 0xc) / 10;
    }
    else {
      if (param_2 != 0) {
        _DAT_600c0c04 = _DAT_600c0c04 & 0xfffff000 | 0x408;
        return;
      }
      uVar3 = -(((uVar3 - iVar1) * 0xc) / 10);
    }
    uVar4 = uVar3 + 0x408 & 0xfff;
    uVar3 = 0xfffff000;
  }
  _DAT_600c0c04 = uVar4 | uVar3 & _DAT_600c0c04;
  return;
}

