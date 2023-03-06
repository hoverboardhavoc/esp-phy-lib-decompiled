/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_init.o -> rf_cal_data_recovery
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rf_cal_data_recovery(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = &phy_param;
  iVar2 = 0x2b4;
  do {
    uVar3 = phy_byte_to_word(param_1 + iVar2);
    *(undefined4 *)(puVar1 + 0x28) = uVar3;
    iVar2 = iVar2 + 4;
    puVar1 = puVar1 + 4;
  } while (iVar2 != 0x2f0);
  return;
}

