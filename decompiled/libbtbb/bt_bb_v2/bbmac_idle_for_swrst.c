/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bbmac_idle_for_swrst
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool bbmac_idle_for_swrst(void)

{
  bool bVar1;
  
  bVar1 = false;
  if (((((_DAT_2010207c >> 0x14 & 0xf) == 0) && ((_DAT_2010207c >> 0xf & 3) == 0)) &&
      ((_DAT_20101550 & 0xf) == 0)) && ((_DAT_20103088 & 0xf) == 0)) {
    bVar1 = (_DAT_20102c38 & 7) == 1;
  }
  return bVar1;
}

