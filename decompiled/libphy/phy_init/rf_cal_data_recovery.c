/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_init.o -> rf_cal_data_recovery
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rf_cal_data_recovery(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = &phy_param;
  iVar2 = 0x2b4;
  do {
    uVar3 = phy_byte_to_word(param_1 + iVar2);
    puVar1[0xd] = uVar3;
    iVar2 = iVar2 + 4;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0x2ec);
  return;
}

