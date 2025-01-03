/*
 * Last changed at upstream commit 1e3487dc778d48c15229af05ce0f03f78e15528c
 * https://github.com/espressif/esp-phy-lib/commit/1e3487dc778d48c15229af05ce0f03f78e15528c
 * Upstream date: 2025-01-03 11:45:24 +0800
 * Upstream subject: support h2 eco5 test
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
  uVar3 = (byte)(&ch_map2)[param_1] + 0x962;
  if ((0x97d < uVar3) && (iVar1 = 0x97e, 0x997 < uVar3)) {
    iVar1 = 0x998;
  }
  if (dis_tx_scale != '\0') {
    return;
  }
  if (param_3 == 2) {
    if (param_2 == 1) {
      iVar2 = 0x800;
    }
    else {
      if (param_2 != 0) {
        _DAT_600a0c08 = _DAT_600a0c08 & 0xff000fff | 0x800000;
        return;
      }
      iVar2 = 0x85f;
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

