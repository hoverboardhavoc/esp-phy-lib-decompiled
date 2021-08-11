/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> rf_cal_data_recovery
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rf_cal_data_recovery(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = &phy_param;
  iVar2 = 0x2b4;
  do {
    uVar3 = phy_byte_to_word(param_1 + iVar2);
    *(undefined4 *)(puVar1 + 0x7a) = uVar3;
    iVar2 = iVar2 + 4;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0x350);
  return;
}

