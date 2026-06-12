/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
 * Source: libbttestmode -> zb_macinit_txrx.o -> zb_master_slave_rx_a_frame
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
zb_master_slave_rx_a_frame
          (uint param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6,int param_7
          )

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = _DAT_2010d800;
  _DAT_20103000 = 0x42;
  while( true ) {
    iVar1 = GetStopCmd();
    if ((iVar1 == 0) || ((param_1 != 0 && (param_1 < (uint)(_DAT_2010d800 - iVar3))))) {
      _DAT_20103000 = 0x45;
      return 1;
    }
    if (param_7 == 0) {
      uVar2 = _DAT_20103064 & 2;
    }
    else {
      uVar2 = _DAT_20103064 & 4;
    }
    if (uVar2 != 0) break;
    if ((_DAT_20103064 & 0x10) != 0) {
      _DAT_20103064 = _DAT_20103064 | 0x10;
      *param_3 = *param_3 + 1;
      return 0;
    }
  }
  _DAT_20103064 = _DAT_20103064 | 2;
  *param_2 = *param_2 + 1;
  iVar3 = (int)*(char *)(rx_frame + 0x10ad3);
  *param_4 = *param_4 + iVar3;
  if (*param_2 == 1) {
    *param_5 = iVar3;
    *param_6 = iVar3;
    return 0;
  }
  if (*param_5 < iVar3) {
    *param_5 = iVar3;
  }
  if (iVar3 < *param_6) {
    *param_6 = iVar3;
    return 0;
  }
  return 0;
}

