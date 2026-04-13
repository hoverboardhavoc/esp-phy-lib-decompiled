/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode.o -> rw_le_et_on_mask
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_et_on_mask(uint param_1)

{
  undefined4 *puVar1;
  
  _DAT_6003122c = _DAT_6003122c & 0xffff;
  puVar1 = (undefined4 *)&DAT_3ffb0000;
  do {
    if ((param_1 & 1) == 0) {
      *puVar1 = 0;
    }
    else {
      *puVar1 = 0x2000302;
    }
    puVar1 = puVar1 + 1;
    param_1 = param_1 >> 1;
  } while (puVar1 != (undefined4 *)0x3ffb0040);
  return;
}

