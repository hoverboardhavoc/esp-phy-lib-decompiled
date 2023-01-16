/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_init.o -> register_chipv7_phy
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

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
  undefined4 uStack_90;
  
  memset(auStack_a0,0,0x80);
  uStack_9e = 0x5454;
  uStack_9c = 0x4c505050;
  uStack_98 = 0x484c4c4c;
  uStack_94 = 0x4c4c4044;
  uStack_90 = 0x4044484c;
  phy_get_romfunc_addr();
  freq_module_resetn();
  phy_dis_hw_set_freq();
  i2c_master_reset();
  if (DAT_00010a71 == '\0') {
    puVar2 = param_1;
    if (param_1 == (undefined1 *)0x0) {
      puVar2 = auStack_a0;
    }
    register_chipv7_phy_init_param(puVar2);
  }
  phy_get_xtal_freq();
  uVar3 = phy_get_rf_cal_version();
  iVar4 = 0;
  if (DAT_00010a71 == '\0') {
    if (param_3 == 1) {
      iVar4 = phy_rfcal_data_check(1,param_2,param_1,uVar3);
      if (iVar4 == 0) {
        rf_cal_data_recovery(param_2);
        DAT_00010af0 = DAT_00010af0 & 0xfffefddf;
        goto _L66;
      }
      param_3 = 2;
    }
    DAT_00010af0 = 0;
  }
_L66:
  uVar1 = DAT_00010af0;
  rf_init();
  bb_init();
  get_temp_init_new((uVar1 >> 5 ^ 1) & 1,(uVar1 >> 0x14 ^ 1) & 1);
  if (DAT_00010a71 == '\0') {
    if (param_3 != 1) {
      rf_cal_data_backup(param_2);
      uVar3 = phy_get_rf_cal_version();
      phy_rfcal_data_check(0,param_2,param_1,uVar3);
      if (DAT_00010a71 != '\0') goto _L70;
    }
    if (DAT_00010aeb != '\0') {
      chip_v7_set_chan_offset(0);
    }
  }
_L70:
  phy_bbpll_cal(0);
  (**(code **)(g_phyFuns + 0x50))(99,1,0,*(code **)(g_phyFuns + 0x50));
  DAT_00010a71 = 1;
  phy_en_hw_set_freq();
  return iVar4;
}

