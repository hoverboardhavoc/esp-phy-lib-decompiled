/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> ble_common_link.o -> capture_bredr_channel
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint capture_bredr_channel(void)

{
  uint uVar1;
  
  phy_printf("Capture current channel \n",0);
  uVar1 = _DAT_2010a060;
  _DAT_2010a060 = _DAT_2010a060 | 0x80000000;
  do {
  } while ((int)_DAT_2010a060 < 0);
  phy_printf("Capture done ! \n",0);
  phy_printf("CAPTED current channel %x \n",uVar1 & 0x7f);
  return uVar1 & 0x7f;
}

