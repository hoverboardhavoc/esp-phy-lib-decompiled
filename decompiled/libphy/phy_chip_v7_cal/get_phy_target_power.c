/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> get_phy_target_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_phy_target_power(char *param_1,char param_2)

{
  short sVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uStack_14 = (undefined1)_pbus_set_dco;
  uStack_13 = (undefined1)_DAT_00014036;
  uStack_12 = (undefined1)_set_txclk_en;
  uStack_11 = (undefined1)_DAT_0001403a;
  sVar1 = set_chan_cal_interp(&uStack_14,phy_chan_pwr_index[0xd]);
  target_power_add_backoff(param_1,&chip7_sleep_params,(int)sVar1);
  pcVar2 = param_1;
  do {
    pcVar3 = pcVar2 + 1;
    *pcVar2 = (param_2 - target_power_backoff_qdb) + *pcVar2;
    pcVar2 = pcVar3;
  } while (param_1 + 6 != pcVar3);
  return;
}

