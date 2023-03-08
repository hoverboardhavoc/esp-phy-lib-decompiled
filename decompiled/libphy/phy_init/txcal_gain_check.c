/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libphy -> phy_init.o -> txcal_gain_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txcal_gain_check(void)

{
  short sVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  sVar1 = *(short *)((DAT_00010dbf + 0x20) * 2 + 0x10d20);
  puVar2 = &phy_param;
  do {
    puVar3 = puVar2 + 2;
    *(short *)(puVar2 + 0x44) = *(short *)(puVar2 + 0x44) - sVar1;
    puVar2 = puVar3;
  } while (puVar3 != (undefined1 *)0x10d40);
  sVar1 = *(short *)((DAT_00010dc0 + 0x38) * 2 + 0x10d22);
  puVar2 = &phy_param;
  do {
    puVar3 = puVar2 + 2;
    *(short *)(puVar2 + 0x76) = *(short *)(puVar2 + 0x76) - sVar1;
    puVar2 = puVar3;
  } while (puVar3 != (undefined1 *)0x10d38);
  return;
}

