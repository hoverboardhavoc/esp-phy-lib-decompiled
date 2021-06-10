/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> set_most_pwr_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 set_most_pwr_reg(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  byte bStack_18;
  byte bStack_17;
  byte bStack_16;
  byte bStack_15;
  byte bStack_14;
  byte bStack_13;
  
  get_phy_target_power(&bStack_18,(int)phy_in_vdd33_offset);
  iVar2 = (int)phy_in_most_power;
  if (iVar2 < (int)(uint)bStack_13) {
    phy_set_most_tpw_disbg = '\x01';
    uVar3 = (uint)bStack_13 - iVar2 & 0xff;
    if (uVar3 < 9) {
      set_most_tpw = bStack_13 - 8;
      uVar1 = 5;
      uVar4 = 0xe;
    }
    else if (uVar3 < 0x13) {
      set_most_tpw = bStack_13 - 0x12;
      uVar1 = 5;
      uVar4 = 10;
    }
    else if (uVar3 < 0x19) {
      set_most_tpw = bStack_13 - 0x18;
      uVar1 = 5;
      uVar4 = 7;
    }
    else if (uVar3 < 0x21) {
      set_most_tpw = bStack_13 - 0x20;
      uVar1 = 5;
      uVar4 = 6;
    }
    else if (uVar3 < 0x2d) {
      set_most_tpw = bStack_13 - 0x2c;
      uVar1 = 5;
      uVar4 = 5;
    }
    else if (uVar3 < 0x39) {
      set_most_tpw = bStack_13 - 0x38;
      uVar1 = 5;
      uVar4 = 2;
    }
    else if (uVar3 < 0x45) {
      set_most_tpw = bStack_13 + 0xbc;
      uVar1 = 5;
      uVar4 = 1;
    }
    else {
      set_most_tpw = bStack_13 + 0xa4;
      uVar1 = 5;
      uVar4 = 0;
    }
  }
  else {
    set_most_tpw = bStack_14;
    phy_set_most_tpw_disbg = '\0';
    if (iVar2 < (int)(uint)bStack_14) {
      set_most_tpw = bStack_13;
      uVar1 = 5;
    }
    else if (iVar2 < (int)(uint)bStack_15) {
      uVar1 = 4;
    }
    else if (iVar2 < (int)(uint)bStack_16) {
      set_most_tpw = bStack_15;
      uVar1 = 3;
    }
    else if (iVar2 < (int)(uint)bStack_17) {
      set_most_tpw = bStack_16;
      uVar1 = 2;
    }
    else if (iVar2 < (int)(uint)bStack_18) {
      set_most_tpw = bStack_17;
      uVar1 = 1;
    }
    else {
      set_most_tpw = bStack_18;
      uVar1 = 0;
    }
    uVar4 = 0xf;
  }
  if (phy_set_most_tpw_disbg == '\0') {
    tx_rf_ana_gain = chip7_sleep_params._0_2_ & 0xff | 0xf;
  }
  else {
    tx_rf_ana_gain = uVar4 | chip7_sleep_params._0_2_ & 0xf0;
  }
  set_tx_gain_table(tx_rf_ana_gain,DAT_00015e22);
  return uVar1;
}

