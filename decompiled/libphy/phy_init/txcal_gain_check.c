/*
 * Last changed at upstream commit a83c216dd2de6418cb26ee42d80433b0badd4aea
 * https://github.com/espressif/esp-phy-lib/commit/a83c216dd2de6418cb26ee42d80433b0badd4aea
 * Upstream date: 2023-05-10 18:09:34 +0800
 * Upstream subject: esp32c3: update libphy for ble 1M/2M switch
 * Source: libphy -> phy_init.o -> txcal_gain_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txcal_gain_check(void)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  sVar1 = *(short *)((DAT_00010e6b + 0x20) * 2 + 0x10dcc);
  puVar2 = &phy_param;
  do {
    puVar3 = (undefined4 *)((int)puVar2 + 2);
    *(short *)(puVar2 + 0x11) = *(short *)(puVar2 + 0x11) - sVar1;
    puVar2 = puVar3;
  } while (puVar3 != (undefined4 *)0x10dec);
  sVar1 = *(short *)((DAT_00010e6c + 0x38) * 2 + 0x10dce);
  puVar2 = &phy_param;
  do {
    puVar3 = (undefined4 *)((int)puVar2 + 2);
    *(short *)((int)puVar2 + 0x76) = *(short *)((int)puVar2 + 0x76) - sVar1;
    puVar2 = puVar3;
  } while (puVar3 != (undefined4 *)0x10de4);
  return;
}

