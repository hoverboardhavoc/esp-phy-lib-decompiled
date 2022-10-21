/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_track.o -> ram_txpwr_cal_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_txpwr_cal_track(int param_1,int param_2,int param_3)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 == 0) {
    if (DAT_00011208 == '\x01') {
      iVar5 = (int)_DAT_00011210;
      goto _L8;
    }
  }
  else if ((param_1 == 1) && (DAT_00011208 == '\x10')) {
    iVar5 = (int)_DAT_00011212;
    goto _L8;
  }
  iVar5 = (int)_DAT_00011214;
_L8:
  iVar6 = 2;
  iVar4 = (**(code **)(_g_phyFuns + 0x100))(_DAT_00011096 - iVar5,*(code **)(_g_phyFuns + 0x100));
  if (7 < iVar4) {
    iVar6 = 4;
  }
  sVar3 = _DAT_000110b4;
  sVar2 = _DAT_000110b2;
  if (param_1 != 0) {
    sVar3 = _DAT_000110b8;
    sVar2 = _DAT_000110b6;
  }
  sVar3 = (**(code **)(_g_phyFuns + 0x28))
                    ((int)_DAT_00011096,(int)sVar3,(int)sVar2,*(code **)(_g_phyFuns + 0x28));
  iVar4 = (**(code **)(_g_phyFuns + 0x100))
                    ((int)sVar3 - (int)_DAT_0001109a,*(code **)(_g_phyFuns + 0x100));
  if (iVar4 < iVar6) {
    iVar4 = (int)DAT_000111fe;
  }
  else {
    iVar4 = ram_temp_to_power((int)sVar3,iVar5,param_1);
  }
  if (param_2 != 0) {
    cVar1 = DAT_000111ff;
    if (param_1 != 0) {
      cVar1 = DAT_00011200;
    }
    if (cVar1 != iVar4) {
      rom_phy_bbpll_cal(1);
      DAT_000111fe = (char)iVar4;
      _DAT_0001109a = _DAT_00011096;
      if (param_1 == 0) {
        DAT_000111ff = DAT_000111fe;
        ram_wifi_set_tx_gain(DAT_000111f6,0);
      }
      else {
        DAT_00011200 = DAT_000111fe;
        ram_bt_set_tx_gain(0);
      }
      if (param_3 != 0) {
        phy_printf("correct_power=%d,temp=%d %d\n",(int)DAT_000111fe,(int)_DAT_00011096,iVar5);
      }
      rom_phy_bbpll_cal(0);
      return;
    }
  }
  return;
}

