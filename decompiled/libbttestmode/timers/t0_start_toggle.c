/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> timers.o -> t0_start_toggle
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x0001009a) */
/* WARNING: Removing unreachable block (ram,0x000100a0) */
/* WARNING: Removing unreachable block (ram,0x0001008c) */
/* WARNING: Removing unreachable block (ram,0x00010092) */
/* WARNING: Removing unreachable block (ram,0x0001007e) */
/* WARNING: Removing unreachable block (ram,0x00010084) */
/* WARNING: Removing unreachable block (ram,0x00010070) */
/* WARNING: Removing unreachable block (ram,0x00010076) */
/* WARNING: Removing unreachable block (ram,0x00010064) */
/* WARNING: Removing unreachable block (ram,0x0001006a) */
/* WARNING: Removing unreachable block (ram,0x0001003e) */
/* WARNING: Removing unreachable block (ram,0x00010044) */
/* WARNING: Removing unreachable block (ram,0x0001001a) */
/* WARNING: Removing unreachable block (ram,0x00010024) */
/* WARNING: Removing unreachable block (ram,0x000100be) */
/* WARNING: Removing unreachable block (ram,0x000100cc) */
/* WARNING: Removing unreachable block (ram,0x000100da) */
/* WARNING: Removing unreachable block (ram,0x000100e8) */
/* WARNING: Removing unreachable block (ram,0x000100f6) */
/* WARNING: Removing unreachable block (ram,0x00010106) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void t0_start_toggle(undefined4 param_1)

{
  uRam60008070 = uRam60008070 | 1;
  uRam60008010 = param_1;
  uRam60008014 = 0;
  uRam60008018 = 0;
  uRam6000801c = 0;
  uRam60008020 = 0;
  _DAT_60008000 = _DAT_60008000 & 0xe0001fff | 0xe00a0400;
  return;
}

