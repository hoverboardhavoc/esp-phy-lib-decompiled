/*
 * Last changed at upstream commit 8608fcf54d51e81f2e74ebf335fa33f61953f7c8
 * https://github.com/espressif/esp-phy-lib/commit/8608fcf54d51e81f2e74ebf335fa33f61953f7c8
 * Upstream date: 2024-09-14 10:30:08 +0800
 * Upstream subject: update ESP32, S2 and H2 librftest.a to support RF cert_test
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
  iVar1 = (int)*(char *)(rx_frame + 0x10d33);
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

