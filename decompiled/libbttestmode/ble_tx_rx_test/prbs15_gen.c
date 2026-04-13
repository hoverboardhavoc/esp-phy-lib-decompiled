/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> ble_tx_rx_test.o -> prbs15_gen
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void prbs15_gen(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar3 = param_1 + 0x50;
  uVar5 = 0;
  uVar7 = 0xffff;
  do {
    uVar6 = 0;
    do {
      uVar4 = uVar7 << 1;
      uVar7 = (uVar7 ^ uVar4) >> 0xe & 1 | uVar4;
      uVar1 = uVar6 & 0x1f;
      uVar2 = uVar6 & 0x1f;
      uVar6 = uVar6 + 1;
      uVar5 = uVar5 & ~(1 << uVar1) | ((uVar4 & 0x8000) >> 0xf) << uVar2;
    } while (uVar6 != 0x20);
    *param_1 = uVar5;
    param_1 = param_1 + 1;
  } while (puVar3 != param_1);
  return;
}

