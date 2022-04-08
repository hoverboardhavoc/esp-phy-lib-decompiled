/*
 * Last changed at upstream commit dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * https://github.com/espressif/esp-phy-lib/commit/dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * Upstream date: 2022-04-07 23:37:47 -0400
 * Upstream subject: C3/S3 fix "i2c critical" and iram functions
 * Source: libphy -> phy_chip_v7_newrom.o -> ram_txpwr_correct
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_txpwr_correct(int param_1,char *param_2,short *param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  cVar1 = *param_2;
  if ((param_3[1] < param_4) || (param_4 < *param_3)) {
    cVar3 = (**(code **)(_g_phyFuns + 0x168))(param_5,*(code **)(_g_phyFuns + 0x168));
    *param_2 = cVar3;
  }
  else {
    *param_2 = phy_param;
  }
  if (*param_2 == cVar1) {
    return;
  }
  if (param_1 == 0) {
    uVar4 = _phy_param & 0xff;
    iVar2 = (int)DAT_000121ff;
    iVar5 = (int)DAT_0001209e;
    ram_tester_wifi_cali(auStack_30,0);
    if (DAT_0001209d == '\0') {
      ram_get_chan_target_power
                (uVar4,(int)DAT_0001209c,auStack_40,auStack_30,DAT_00012108,&chip7_phy_init_ctrl,
                 &phy_param);
      ram_wifi_get_tx_gain
                (uVar4,&phy_param,auStack_40,(int)DAT_00012179,(iVar2 - iVar5) * 0x1000000 >> 0x18,
                 &phy_param,&phy_param,&phy_param);
      rom_set_tx_gain_mem(0,0xe,&phy_param,&phy_param,&phy_param,&phy_param);
      ram_wifi_tx_dig_gain(&phy_param);
    }
    return;
  }
  uStack_1c = 3;
  uStack_20 = 0xffffffa0;
  ram_bt_get_tx_gain(&phy_param,(int)DAT_00012180,(int)DAT_00012200,&phy_param,&phy_param,&phy_param
                     ,&phy_param,&phy_param);
  rom_set_tx_gain_mem(1,0x10,&phy_param,&phy_param,&phy_param,&phy_param);
  _DAT_60006014 = _phy_param;
  _DAT_60006018 = _phy_printf;
  _DAT_6000601c = _phy_i2c_enter_critical;
  _DAT_60006020 = _phy_i2c_exit_critical;
  return;
}

