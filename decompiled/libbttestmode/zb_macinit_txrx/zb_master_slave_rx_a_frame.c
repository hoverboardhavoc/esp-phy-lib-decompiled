/*
 * Last changed at upstream commit 1d4cd3aafa244a0adf5891f058b3519bc970d644
 * https://github.com/espressif/esp-phy-lib/commit/1d4cd3aafa244a0adf5891f058b3519bc970d644
 * Upstream date: 2025-08-01 19:50:02 +0800
 * Upstream subject: 1. fix C5ECO2 signaling test power 2. fix C5ECO2/C6ECO3/H2ECO5 coex problem
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
  int iVar2;
  uint uVar3;
  
  _DAT_600a3000 = 0x42;
  iVar1 = phy_time_now();
  while( true ) {
    iVar2 = GetStopCmd();
    if ((iVar2 == 0) ||
       ((param_1 != 0 && (iVar2 = phy_time_now(), param_1 < (uint)(iVar2 - iVar1))))) {
      _DAT_600a3000 = 0x45;
      return 1;
    }
    if (param_7 == 0) {
      uVar3 = _DAT_600a3064 & 2;
    }
    else {
      uVar3 = _DAT_600a3064 & 4;
    }
    if (uVar3 != 0) break;
    if ((_DAT_600a3064 & 0x10) != 0) {
      _DAT_600a3064 = _DAT_600a3064 | 0x10;
      *param_3 = *param_3 + 1;
      return 0;
    }
  }
  _DAT_600a3064 = _DAT_600a3064 | 2;
  *param_2 = *param_2 + 1;
  iVar1 = (int)*(char *)(rx_frame + 68999);
  *param_4 = *param_4 + iVar1;
  if (*param_2 == 1) {
    *param_5 = iVar1;
    *param_6 = iVar1;
    return 0;
  }
  if (*param_5 < iVar1) {
    *param_5 = iVar1;
  }
  if (iVar1 < *param_6) {
    *param_6 = iVar1;
    return 0;
  }
  return 0;
}

