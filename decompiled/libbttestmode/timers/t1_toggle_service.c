/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> timers.o -> t1_toggle_service
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void t1_toggle_service(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  
  bVar1 = true;
  while (bVar1) {
    if (bVar1) {
      puVar2 = (uint *)&DAT_60009000;
      goto _L34;
    }
    ebreak();
    bVar1 = false;
  }
  puVar2 = (uint *)&DAT_60008000;
_L34:
  *puVar2 = *puVar2 | 0x400;
  if (bVar1) {
    if (!bVar1) {
      puVar2 = (uint *)&DAT_0000007c;
      goto _L36;
    }
    puVar3 = &DAT_60009000;
  }
  else {
    puVar3 = &DAT_60008000;
  }
  puVar2 = (uint *)(puVar3 + 0x7c);
_L36:
  *puVar2 = *puVar2 | 1;
  return;
}

