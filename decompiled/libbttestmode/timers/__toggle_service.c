/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> timers.o -> __toggle_service
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void __toggle_service(int param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  
  while (param_1 != 0) {
    if (param_1 == 1) {
      puVar1 = (uint *)&DAT_60009000;
      goto _L34;
    }
    ebreak();
    param_1 = 0;
  }
  puVar1 = (uint *)&DAT_60008000;
_L34:
  *puVar1 = *puVar1 | 0x400;
  if (param_1 == 0) {
    puVar2 = &DAT_60008000;
  }
  else {
    if (param_1 != 1) {
      puVar1 = (uint *)&DAT_0000007c;
      goto _L36;
    }
    puVar2 = &DAT_60009000;
  }
  puVar1 = (uint *)(puVar2 + 0x7c);
_L36:
  *puVar1 = *puVar1 | 1;
  return;
}

