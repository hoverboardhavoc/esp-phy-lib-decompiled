/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_init.o -> register_chipv7_phy
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int register_chipv7_phy(undefined1 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_a0 [2];
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  memset(local_a0,0,0x80);
  local_a0[0] = 2;
  uStack_9e = 0x5252;
  uStack_9c = 0x484c4c50;
  uStack_98 = 0x4648484c;
  uStack_94 = 0x4446464a;
  DAT_00010dda = (undefined1)param_3;
  phy_get_romfunc_addr();
  (**(code **)(g_phyFuns + 0x228))(*(code **)(g_phyFuns + 0x228));
  ram_i2c_master_reset();
  if (DAT_00010e1d == '\0') {
    puVar2 = param_1;
    if (param_1 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    register_chipv7_phy_init_param(puVar2);
    if (DAT_00010e1d != '\0') goto _L74;
    iVar4 = 0;
    if (param_3 == 1) {
      uVar3 = phy_get_rf_cal_version();
      iVar4 = phy_rfcal_data_check(1,param_2,param_1,uVar3);
      if (iVar4 != 0) {
        param_3 = 2;
        goto _L75;
      }
      rf_cal_data_recovery(param_2);
      DAT_00010e58 = DAT_00010e58 & 0xfffefddf;
    }
    else {
_L75:
      DAT_00010e58 = 0;
    }
  }
  else {
_L74:
    iVar4 = 0;
  }
  if (efuse_cali_enable == '\x01') {
    esp_recover_efuse_data(0);
  }
  uVar1 = DAT_00010e58;
  rf_init();
  bb_init();
  get_temp_init((uVar1 >> 5 ^ 1) & 1,(uVar1 >> 0x14 ^ 1) & 1);
  if (DAT_00010e1d == '\0') {
    if (param_3 != 1) {
      rf_cal_data_backup(param_2);
      uVar3 = phy_get_rf_cal_version();
      phy_rfcal_data_check(0,param_2,param_1,uVar3);
      if (DAT_00010e1d != '\0') goto _L79;
    }
    if (DAT_00010e56 != '\0') {
      chip_v7_set_chan_offset(0);
    }
  }
_L79:
  rom_phy_bbpll_cal(0);
  _DAT_6001cd0c = 0x117;
  (**(code **)(g_phyFuns + 0x1ac))(99,1,0,*(code **)(g_phyFuns + 0x1ac));
  DAT_00010e1d = 1;
  (**(code **)(g_phyFuns + 0x224))(*(code **)(g_phyFuns + 0x224));
  return iVar4;
}

