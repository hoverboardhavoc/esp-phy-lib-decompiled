/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> timers.o -> t0_toggle_service
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x0001012c) */
/* WARNING: Removing unreachable block (ram,0x00010132) */
/* WARNING: Removing unreachable block (ram,0x00010118) */
/* WARNING: Removing unreachable block (ram,0x0001011e) */
/* WARNING: Removing unreachable block (ram,0x00010156) */
/* WARNING: Removing unreachable block (ram,0x00010150) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void t0_toggle_service(void)

{
  _DAT_60008000 = _DAT_60008000 | 0x400;
  uRam6000807c = uRam6000807c | 1;
  return;
}

