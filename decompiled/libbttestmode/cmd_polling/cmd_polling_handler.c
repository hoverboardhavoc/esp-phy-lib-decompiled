/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
  
  _DAT_6001f000 = _DAT_6001f000 | 0x400;
  pcVar1 = &cmd_queue;
  _DAT_6001f07c = _DAT_6001f07c | 1;
  do {
    if (*pcVar1 != '\0') {
      (**(code **)(pcVar1 + 8))(*(undefined4 *)(pcVar1 + 0xc),*(code **)(pcVar1 + 8));
    }
    pcVar1 = pcVar1 + 0x10;
  } while (pcVar1 != (char *)0x1034c);
  return;
}

