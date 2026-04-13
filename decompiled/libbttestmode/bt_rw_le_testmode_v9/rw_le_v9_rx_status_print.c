/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_le_v9_rx_status_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_le_v9_rx_status_print(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_20 [4];
  char local_1c [4];
  undefined1 auStack_18 [4];
  char acStack_14 [8];
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  if (((int)(*param_1 << 0x10) < 0) && (-1 < (int)(uVar2 << 0xf))) {
    rw_le_v9_rx_phyinfo(auStack_20,local_1c,auStack_18,acStack_14);
    phy_printf("%3x %d %d %d\n",uVar2 >> 0x10 & 0x3ff,(int)(char)(uVar1 >> 0x10),(int)local_1c[0],
               (int)acStack_14[0]);
  }
  return;
}

