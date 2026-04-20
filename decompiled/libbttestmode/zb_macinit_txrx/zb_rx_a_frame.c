/*
 * Last changed at upstream commit 6b304ed9f5ba7f70b2bde6549f24f18f6b634f23
 * https://github.com/espressif/esp-phy-lib/commit/6b304ed9f5ba7f70b2bde6549f24f18f6b634f23
 * Upstream date: 2026-04-20 19:43:28 +0800
 * Upstream subject: S31 support 154 api and light sleep
 * Source: libbttestmode -> zb_macinit_txrx.o -> zb_rx_a_frame
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
zb_rx_a_frame(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6,
             int *param_7,int *param_8)

{
  int iVar1;
  uint uVar2;
  int *in_stack_00000000;
  int *in_stack_00000004;
  
  _DAT_20103000 = 0x42;
  while( true ) {
    if ((_DAT_20103064 & 2) != 0) {
      _DAT_20103064 = _DAT_20103064 | 2;
      *param_1 = *param_1 + 1;
      *param_2 = *param_2 + (int)*(char *)(rx_frame + 0x10adb);
      *param_3 = *param_3 + ((int)_DAT_201020b0 >> 0x18);
      *param_4 = (_DAT_201020b0 >> 8 & 0xff) + *param_4;
      return 0;
    }
    if ((_DAT_20103064 & 0x10) != 0) break;
    iVar1 = GetStopCmd();
    if (iVar1 == 0) {
      return 1;
    }
  }
  _DAT_20103064 = _DAT_20103064 | 0x10;
  uVar2 = _DAT_20103080 >> 4 & 0x1f;
  *param_5 = *param_5 + 1;
  if (uVar2 == 2) {
    *param_6 = *param_6 + 1;
    return 0;
  }
  if (uVar2 == 3) {
    *param_7 = *param_7 + 1;
    *param_8 = *param_8 + (int)*(char *)(rx_frame + 0x10adb);
    return 0;
  }
  if ((uVar2 != 6) && (uVar2 != 9)) {
    *in_stack_00000004 = *in_stack_00000004 + 1;
    return 0;
  }
  *in_stack_00000000 = *in_stack_00000000 + 1;
  return 0;
}

