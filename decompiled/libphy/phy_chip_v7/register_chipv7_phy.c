/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
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
  uStack_9e = 0x5252;
  uStack_9c = 0x484c4c50;
  uStack_98 = 0x4648484c;
  uStack_94 = 0x4446464a;
  phy_get_romfunc_addr();
  (**(code **)(g_phyFuns + 0x228))(*(code **)(g_phyFuns + 0x228));
  ram_i2c_master_reset();
  if (DAT_00014561 == '\0') {
    puVar1 = param_1;
    if (param_1 == (undefined1 *)0x0) {
      puVar1 = auStack_a0;
    }
    register_chipv7_phy_init_param(puVar1);
    if ((DAT_00014561 != '\0') || (param_3 != 1)) goto _L439;
    iVar2 = phy_rfcal_data_check(1,param_2,param_1);
    if (iVar2 == 0) {
      rf_cal_data_recovery(param_2);
    }
    else {
      param_3 = 2;
    }
  }
  else {
_L439:
    iVar2 = 0;
  }
  if (efuse_cali_enable == '\x01') {
    esp_recover_efuse_data(0);
  }
  if (DAT_00014561 == '\0') {
    if (param_3 == 0) {
      DAT_0001459c = 0x200000;
      DAT_000145e0 = 0xfe80;
    }
    else {
      DAT_0001459c = 0;
    }
  }
  rf_init();
  bb_init();
  if ((DAT_00014561 == '\0') && (get_temp_init(), DAT_00014561 == '\0')) {
    if (param_3 != 1) {
      rf_cal_data_backup(param_2);
      phy_rfcal_data_check(0,param_2,param_1);
      if (DAT_00014561 != '\0') goto _L449;
    }
    if (DAT_0001459a != '\0') {
      chip_v7_set_chan_offset(0);
    }
  }
_L449:
  rom_phy_bbpll_cal(0);
  _DAT_6001cd0c = 0x117;
  (**(code **)(g_phyFuns + 0x1ac))(99,1,0,*(code **)(g_phyFuns + 0x1ac));
  DAT_00014561 = 1;
  (**(code **)(g_phyFuns + 0x224))(*(code **)(g_phyFuns + 0x224));
  return iVar2;
}

