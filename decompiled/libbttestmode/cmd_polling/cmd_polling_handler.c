/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> cmd_polling.o -> cmd_polling_handler
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cmd_polling_handler(void)

{
  char *pcVar1;
  
  _DAT_60008000 = _DAT_60008000 | 0x400;
  pcVar1 = &cmd_queue;
  _DAT_6000807c = _DAT_6000807c | 1;
  do {
    if (*pcVar1 != '\0') {
      (**(code **)(pcVar1 + 8))(*(undefined4 *)(pcVar1 + 0xc),*(code **)(pcVar1 + 8));
    }
    pcVar1 = pcVar1 + 0x10;
  } while (pcVar1 != (char *)0x1034c);
  return;
}

