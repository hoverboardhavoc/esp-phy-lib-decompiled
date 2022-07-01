/*
 * Last changed at upstream commit 240e008e89a447f2f1edf990efefa45b870e6e8a
 * https://github.com/espressif/esp-phy-lib/commit/240e008e89a447f2f1edf990efefa45b870e6e8a
 * Upstream date: 2022-07-01 15:45:54 +0800
 * Upstream subject: Support 26M and 40M Crystal
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
  undefined1 auStack_a0 [2];
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  memset(auStack_a0,0,0x80);
  uStack_9e = 0x5454;
  uStack_9c = 0x4c505054;
  uStack_98 = 0x484c5050;
  uStack_94 = 0x484c5050;
  phy_get_romfunc_addr();
  _DAT_6004e930 = _DAT_6004e930 & 0xfffdffff | 0x20000;
  (**(code **)(g_phyFuns + 0x18))(*(code **)(g_phyFuns + 0x18));
  i2c_master_reset_new();
  if (DAT_00010885 == '\0') {
    puVar2 = param_1;
    if (param_1 == (undefined1 *)0x0) {
      puVar2 = auStack_a0;
    }
    register_chipv7_phy_init_param(puVar2);
  }
  phy_get_xtal_freq();
  uVar3 = phy_get_rf_cal_version();
  iVar4 = 0;
  if (DAT_00010885 == '\0') {
    if (param_3 == 1) {
      iVar4 = phy_rfcal_data_check(1,param_2,param_1,uVar3);
      if (iVar4 == 0) {
        rf_cal_data_recovery(param_2);
        DAT_000108e4 = DAT_000108e4 & 0xfffefddf;
        goto _L45;
      }
      param_3 = 2;
    }
    DAT_000108e4 = 0;
  }
_L45:
  if (efuse_cali_enable == '\x01') {
    esp_recover_efuse_data(0x60008860,0);
  }
  uVar1 = DAT_000108e4;
  rf_init();
  bb_init();
  get_temp_init_new((uVar1 >> 5 ^ 1) & 1,(uVar1 >> 0x14 ^ 1) & 1);
  if (DAT_00010885 == '\0') {
    if (param_3 != 1) {
      rf_cal_data_backup(param_2);
      uVar3 = phy_get_rf_cal_version();
      phy_rfcal_data_check(0,param_2,param_1,uVar3);
      if (DAT_00010885 != '\0') goto _L50;
    }
    if (DAT_000108e1 != '\0') {
      chip_v7_set_chan_offset(0);
    }
  }
_L50:
  (**(code **)(g_phyFuns + 0x144))(0,*(code **)(g_phyFuns + 0x144));
  _DAT_6004ad0c = 0x117;
  (**(code **)(g_phyFuns + 0x48))(99,1,0,*(code **)(g_phyFuns + 0x48));
  DAT_00010885 = 1;
  (**(code **)(g_phyFuns + 0x14))(*(code **)(g_phyFuns + 0x14));
  return iVar4;
}

