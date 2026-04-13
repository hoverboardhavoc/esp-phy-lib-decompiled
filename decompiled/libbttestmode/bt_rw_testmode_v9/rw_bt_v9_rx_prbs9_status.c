/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_testmode_v9.o -> rw_bt_v9_rx_prbs9_status
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_bt_v9_rx_prbs9_status(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar5 = *(uint *)(param_1 + 4) >> 0x13;
  uVar7 = uVar5 & 0x3ff;
  uVar10 = *(uint *)(&_LANCHOR12 + (uVar5 & 3) * 4);
  uVar9 = uVar7 >> 2;
  puVar6 = (uint *)((*(uint *)(param_1 + 8) >> 0x10) + 0x3ffd0000);
  *param_3 = 0;
  puVar4 = (uint *)&PRBS9;
  uVar5 = 0;
  do {
    uVar3 = *puVar6 ^ *puVar4;
    if (uVar5 == uVar9) {
      uVar3 = uVar3 & uVar10;
    }
    iVar2 = *param_3;
    uVar8 = 0;
    do {
      uVar1 = uVar8 & 0x1f;
      uVar8 = uVar8 + 1;
      iVar2 = iVar2 + (uVar3 >> uVar1 & 1);
    } while (uVar8 != 0x20);
    *param_3 = iVar2;
    uVar5 = uVar5 + 1;
    puVar6 = puVar6 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar5 < uVar9 + 1);
  *param_2 = uVar7 << 3;
  return;
}

