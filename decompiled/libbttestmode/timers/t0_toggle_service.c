/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
  _DAT_6001f000 = _DAT_6001f000 | 0x400;
  uRam6001f07c = uRam6001f07c | 1;
  return;
}

