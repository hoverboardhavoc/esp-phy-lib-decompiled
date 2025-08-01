/*
 * Last changed at upstream commit 1d4cd3aafa244a0adf5891f058b3519bc970d644
 * https://github.com/espressif/esp-phy-lib/commit/1d4cd3aafa244a0adf5891f058b3519bc970d644
 * Upstream date: 2025-08-01 19:50:02 +0800
 * Upstream subject: 1. fix C5ECO2 signaling test power 2. fix C5ECO2/C6ECO3/H2ECO5 coex problem
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_get_tx_pwr_table
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 * bt_bb_get_tx_pwr_table(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = &_LANCHOR0;
  iVar1 = -0x18;
  do {
    uVar2 = phy_get_data_sat(iVar1,0x50,0xffffffc4);
    *puVar3 = uVar2;
    iVar1 = iVar1 + 3;
    puVar3 = puVar3 + 1;
  } while (iVar1 != 0x18);
  return &_LANCHOR0;
}

