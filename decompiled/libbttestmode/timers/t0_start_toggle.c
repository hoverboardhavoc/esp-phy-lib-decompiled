/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
  uRam6001f070 = uRam6001f070 | 1;
  uRam6001f010 = param_1;
  uRam6001f014 = 0;
  uRam6001f018 = 0;
  uRam6001f01c = 0;
  uRam6001f020 = 0;
  _DAT_6001f000 = _DAT_6001f000 & 0xe0001fff | 0xe00a0400;
  return;
}

