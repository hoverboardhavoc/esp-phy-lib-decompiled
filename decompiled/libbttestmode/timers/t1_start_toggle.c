/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> timers.o -> t1_start_toggle
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x000100a0) */
/* WARNING: Removing unreachable block (ram,0x00010092) */
/* WARNING: Removing unreachable block (ram,0x00010084) */
/* WARNING: Removing unreachable block (ram,0x00010076) */
/* WARNING: Removing unreachable block (ram,0x0001006a) */
/* WARNING: Removing unreachable block (ram,0x00010044) */
/* WARNING: Removing unreachable block (ram,0x00010024) */
/* WARNING: Removing unreachable block (ram,0x0001002a) */
/* WARNING: Removing unreachable block (ram,0x000100b4) */
/* WARNING: Removing unreachable block (ram,0x000100c4) */
/* WARNING: Removing unreachable block (ram,0x000100d2) */
/* WARNING: Removing unreachable block (ram,0x000100e0) */
/* WARNING: Removing unreachable block (ram,0x000100ee) */
/* WARNING: Removing unreachable block (ram,0x000100fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void t1_start_toggle(undefined4 param_1)

{
  _DAT_60009070 = _DAT_60009070 | 1;
  _DAT_60009010 = param_1;
  _DAT_60009014 = 0;
  _DAT_60009018 = 0;
  _DAT_6000901c = 0;
  _DAT_60009020 = 0;
  _DAT_60009000 = _DAT_60009000 & 0xe0001fff | 0xe00a0400;
  return;
}

