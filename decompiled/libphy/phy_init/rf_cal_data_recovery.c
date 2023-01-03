/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_init.o -> rf_cal_data_recovery
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x000107aa) */
/* WARNING: Removing unreachable block (ram,0x000107ac) */

void rf_cal_data_recovery(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = &phy_param;
  iVar2 = 0xc;
  do {
    uVar3 = phy_byte_to_word();
    *puVar1 = uVar3;
    iVar2 = iVar2 + 4;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0x1cc);
  return;
}

