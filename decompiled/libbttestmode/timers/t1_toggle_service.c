/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> timers.o -> t1_toggle_service
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void t1_toggle_service(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  
  bVar1 = true;
  while (bVar1) {
    if (bVar1) {
      puVar2 = (uint *)&DAT_60020000;
      goto _L34;
    }
    ebreak();
    bVar1 = false;
  }
  puVar2 = (uint *)&DAT_6001f000;
_L34:
  *puVar2 = *puVar2 | 0x400;
  if (bVar1) {
    if (!bVar1) {
      puVar2 = (uint *)&DAT_0000007c;
      goto _L36;
    }
    puVar3 = &DAT_60020000;
  }
  else {
    puVar3 = &DAT_6001f000;
  }
  puVar2 = (uint *)(puVar3 + 0x7c);
_L36:
  *puVar2 = *puVar2 | 1;
  return;
}

