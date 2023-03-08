/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
  _DAT_60020070 = _DAT_60020070 | 1;
  _DAT_60020010 = param_1;
  _DAT_60020014 = 0;
  _DAT_60020018 = 0;
  _DAT_6002001c = 0;
  _DAT_60020020 = 0;
  _DAT_60020000 = _DAT_60020000 & 0xe0001fff | 0xe00a0400;
  return;
}

