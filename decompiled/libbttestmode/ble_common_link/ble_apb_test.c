/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> ble_common_link.o -> ble_apb_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_apb_test(void)

{
  phy_printf("APB REG READ OUT %x \n",_DAT_20101ffc & 0xfffffff);
  _DAT_20101ffc = _DAT_20101ffc & 0xf0000000 | 0x7654321;
  phy_printf("APB REG READ OUT %x \n",0x7654321);
  return;
}

