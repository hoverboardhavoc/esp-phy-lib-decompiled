/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
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
  } while (iVar2 != 0x2dc);
  return;
}

