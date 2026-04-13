/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> ble_common_link.o -> enable_rxlink
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void enable_rxlink(int param_1,uint param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    uVar2 = (uint)param_4 >> 2 & 0xfffff;
    uVar1 = *(uint *)(param_3 + 0x10);
    *(uint *)(param_3 + 0x10) = uVar1 & 0xfff00000 | uVar2;
    *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) & 0xfff00000 | *param_4 & 0xfffff;
    *(uint *)(param_3 + 0x10) = uVar1 & 0xff800000 | uVar2 | 0x800000 | (param_2 & 7) << 0x14;
    return;
  }
  if (param_1 == 1) {
    uVar2 = (uint)param_4 >> 2 & 0xfffff;
    uVar1 = *(uint *)(param_3 + 0x18);
    *(uint *)(param_3 + 0x18) = uVar1 & 0xfff00000 | uVar2;
    *(uint *)(param_3 + 0x1c) = *(uint *)(param_3 + 0x1c) & 0xfff00000 | *param_4 & 0xfffff;
    *(uint *)(param_3 + 0x18) = uVar1 & 0xff800000 | uVar2 | 0x800000 | (param_2 & 7) << 0x14;
    return;
  }
  phy_printf("Invalid RX link index !");
  return;
}

