/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> rf_cal_data_recovery
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rf_cal_data_recovery(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  puVar2 = chip7_sleep_params;
  iVar1 = 0x40c;
  do {
    uVar3 = phy_byte_to_word(param_1 + iVar1);
    *(undefined4 *)puVar2 = uVar3;
    iVar1 = iVar1 + 4;
    puVar2 = (undefined1 *)((int)puVar2 + 4);
  } while (iVar1 != 0x4d0);
  puVar2 = phy_rx_gain_gen;
  iVar1 = 0x4d0;
  do {
    uVar3 = phy_byte_to_word(param_1 + iVar1);
    *(undefined4 *)puVar2 = uVar3;
    iVar1 = iVar1 + 4;
    puVar2 = (undefined1 *)((int)puVar2 + 4);
  } while (iVar1 != 0x638);
  puVar2 = phy_rxrf_dc;
  iVar1 = 0x638;
  do {
    uVar3 = phy_byte_to_word(param_1 + iVar1);
    *(undefined4 *)puVar2 = uVar3;
    iVar1 = iVar1 + 4;
    puVar2 = (undefined1 *)((int)puVar2 + 4);
  } while (iVar1 != 0x6cc);
  puVar2 = phy_rxbb_dc;
  iVar1 = 0x6cc;
  do {
    uVar3 = phy_byte_to_word(param_1 + iVar1);
    *(undefined4 *)puVar2 = uVar3;
    iVar1 = iVar1 + 4;
    puVar2 = (undefined1 *)((int)puVar2 + 4);
  } while (iVar1 != 0x6e4);
  return;
}

