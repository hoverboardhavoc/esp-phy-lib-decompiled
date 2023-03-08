/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> timers.o -> __toggle_service
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void __toggle_service(int param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  
  while (param_1 != 0) {
    if (param_1 == 1) {
      puVar1 = (uint *)&DAT_60020000;
      goto _L34;
    }
    ebreak();
    param_1 = 0;
  }
  puVar1 = (uint *)&DAT_6001f000;
_L34:
  *puVar1 = *puVar1 | 0x400;
  if (param_1 == 0) {
    puVar2 = &DAT_6001f000;
  }
  else {
    if (param_1 != 1) {
      puVar1 = (uint *)&DAT_0000007c;
      goto _L36;
    }
    puVar2 = &DAT_60020000;
  }
  puVar1 = (uint *)(puVar2 + 0x7c);
_L36:
  *puVar1 = *puVar1 | 1;
  return;
}

