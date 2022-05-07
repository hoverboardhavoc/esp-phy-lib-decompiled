/*
 * Last changed at upstream commit 478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * https://github.com/espressif/esp-phy-lib/commit/478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * Upstream date: 2022-05-07 21:35:33 +0800
 * Upstream subject: add phy for esp32c2
 * Source: libphy -> phy_init.o -> register_chipv7_phy
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int register_chipv7_phy(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
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
  i2c_master_reset();
  if (DAT_00010659 == '\0') {
    puVar1 = param_1;
    if (param_1 == (undefined1 *)0x0) {
      puVar1 = auStack_a0;
    }
    register_chipv7_phy_init_param(puVar1);
  }
  uVar2 = phy_get_rf_cal_version();
  iVar3 = 0;
  if (((DAT_00010659 == '\0') && (param_3 == 1)) &&
     (iVar3 = phy_rfcal_data_check(1,param_2,param_1,uVar2), iVar3 != 0)) {
    param_3 = 2;
  }
  if (efuse_cali_enable == '\x01') {
    esp_recover_efuse_data(0x60008860,0);
  }
  if (DAT_00010659 == '\0') {
    if (param_3 == 0) {
      DAT_000106b8 = 0x200000;
      DAT_000106fc = 0xfe80;
    }
    else if (param_3 == 1) {
      if (DAT_000106b8 != 0) {
        DAT_000106b8 = 0x71ed900;
      }
    }
    else {
      DAT_000106b8 = 0;
    }
    DAT_000106b8 = DAT_000106b8 | 0x10;
  }
  rf_init();
  bb_init();
  if ((DAT_00010659 == '\0') && (get_temp_init(), DAT_00010659 == '\0')) {
    if (param_3 != 1) {
      uVar2 = phy_get_rf_cal_version();
      phy_rfcal_data_check(0,param_2,param_1,uVar2);
      if (DAT_00010659 != '\0') goto _L37;
    }
    if (DAT_000106b5 != '\0') {
      chip_v7_set_chan_offset(0);
    }
  }
_L37:
  (**(code **)(g_phyFuns + 0x144))(0,*(code **)(g_phyFuns + 0x144));
  _DAT_6004ad0c = 0x117;
  (**(code **)(g_phyFuns + 0x48))(99,1,0,*(code **)(g_phyFuns + 0x48));
  DAT_00010659 = 1;
  (**(code **)(g_phyFuns + 0x14))(*(code **)(g_phyFuns + 0x14));
  return iVar3;
}

