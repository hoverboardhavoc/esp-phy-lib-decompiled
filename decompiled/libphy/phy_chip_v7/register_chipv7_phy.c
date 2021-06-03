/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> register_chipv7_phy
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int register_chipv7_phy(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_a0 [2];
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  memset(auStack_a0,0,0x80);
  uStack_9e = 0x5050;
  uStack_9c = 0x484c4c50;
  uStack_98 = 0x4448484c;
  uStack_94 = 0x4246464a;
  phy_get_romfunc_addr();
  _DAT_6000e130 = _DAT_6000e130 & 0xfffdffff | 0x20000;
  (**(code **)(g_phyFuns + 0x228))(*(code **)(g_phyFuns + 0x228));
  rom_i2c_master_reset();
  if (DAT_00014015 == '\0') {
    puVar1 = param_1;
    if (param_1 == (undefined1 *)0x0) {
      puVar1 = auStack_a0;
    }
    register_chipv7_phy_init_param(puVar1);
    if ((DAT_00014015 != '\0') || (param_3 != 1)) goto _L454;
    iVar2 = phy_rfcal_data_check(1,param_2,param_1);
    if (iVar2 == 0) {
      rf_cal_data_recovery(param_2);
    }
    else {
      param_3 = 2;
    }
  }
  else {
_L454:
    iVar2 = 0;
  }
  if (DAT_00014015 == '\0') {
    if (param_3 == 0) {
      DAT_00014050 = 0x200000;
      DAT_00014094 = 0xfe80;
    }
    else {
      DAT_00014050 = 0;
    }
    DAT_00014050 = DAT_00014050 | 0x10;
  }
  rf_init();
  bb_init();
  if ((DAT_00014015 == '\0') && (get_temp_init(), DAT_00014015 == '\0')) {
    if (param_3 == 1) {
      chip_v7_set_chan((int)DAT_00014122,(int)DAT_00014124);
    }
    else {
      rf_cal_data_backup(param_2);
      phy_rfcal_data_check(0,param_2,param_1);
      if (DAT_00014015 != '\0') goto _L463;
    }
    if (DAT_0001404e != '\0') {
      chip_v7_set_chan_offset(0);
    }
  }
_L463:
  rom_phy_bbpll_cal(0);
  _DAT_6001cd0c = 0x117;
  (**(code **)(g_phyFuns + 0x1ac))(99,1,0,*(code **)(g_phyFuns + 0x1ac));
  DAT_00014015 = 1;
  (**(code **)(g_phyFuns + 0x224))(*(code **)(g_phyFuns + 0x224));
  return iVar2;
}

