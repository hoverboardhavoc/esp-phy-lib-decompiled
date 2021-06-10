/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> phy_get_txpwr_param
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_get_txpwr_param(int param_1,undefined1 *param_2,ushort *param_3,int param_4,
                        undefined1 *param_5,undefined2 *param_6)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar4 = chip7_sleep_params;
  puVar2 = chip7_sleep_params;
  iVar3 = 0;
  do {
    puVar1 = (undefined2 *)(puVar4 + 4);
    puVar4 = puVar4 + 2;
    *(char *)(param_1 + iVar3) = (char)*puVar1;
    puVar5 = (undefined1 *)(param_4 + iVar3);
    iVar3 = iVar3 + 1;
    *puVar5 = puVar2[0x65];
    puVar2 = puVar2 + 6;
  } while (iVar3 != 4);
  *param_2 = 0;
  param_2[1] = 0;
  *param_3 = chip7_sleep_params._188_2_ << 9 | chip7_sleep_params._190_2_;
  *param_5 = chip7_sleep_params[0xb7];
  *param_6 = _phy_tx_pwr_error;
  return;
}

