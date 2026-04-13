/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode.o -> rw_evt_refresh_check_rx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_evt_refresh_check_rx(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  if ((_DAT_60031214 & 8) != 0) {
    _DAT_60031218 = _DAT_60031218 | 8;
    puVar4 = (uint *)&DAT_3ffb0000;
    do {
      puVar5 = puVar4 + 1;
      *puVar4 = *puVar4 & 0xffffffcf;
      puVar4 = puVar5;
    } while (puVar5 != (uint *)0x3ffb0040);
    if (param_1 != 0) {
      _DAT_3ffb02a0 = _DAT_3ffb02a0 & 0xffff7fff;
      _DAT_3ffb02b0 = _DAT_3ffb02b0 & 0xffff7fff;
    }
    evt_refresh_ind = 1;
  }
  if ((int)(_DAT_3ffb02c0 << 0x10) < 0) {
    uVar1 = _DAT_3ffb02c0 >> 0x10 & 0x37f;
    rw_le_rxundone(&DAT_3ffb02c0);
  }
  else {
    uVar1 = 0xdead;
  }
  if ((int)(_DAT_3ffb02d0 << 0x10) < 0) {
    uVar2 = _DAT_3ffb02d0 >> 0x10 & 0x37f;
    rw_le_rxundone(&DAT_3ffb02d0);
    if (uVar1 != 0) goto joined_r0x000105f4;
  }
  else {
    uVar2 = uVar1;
    if (uVar1 == 0xdead) {
      return;
    }
joined_r0x000105f4:
    if (uVar2 != 0) {
      puVar3 = &_LC1;
      goto _L67;
    }
  }
  puVar3 = &_LC2;
_L67:
  phy_printf(puVar3);
  return;
}

