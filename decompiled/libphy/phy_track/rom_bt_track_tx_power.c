/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_track.o -> rom_bt_track_tx_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x000101b0) */
/* WARNING: Removing unreachable block (ram,0x0001009c) */
/* WARNING: Removing unreachable block (ram,0x000100a6) */
/* WARNING: Removing unreachable block (ram,0x000101a0) */
/* WARNING: Removing unreachable block (ram,0x000101b6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_bt_track_tx_power(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  sVar1 = _DAT_00011212;
  if (DAT_00011208 != '\x10') {
    sVar1 = _DAT_00011214;
  }
  iVar3 = (int)sVar1;
  iVar4 = 2;
  iVar2 = (**(code **)(_g_phyFuns + 0x100))(_DAT_00011096 - iVar3,*(code **)(_g_phyFuns + 0x100));
  if (7 < iVar2) {
    iVar4 = 4;
  }
  sVar1 = (**(code **)(_g_phyFuns + 0x28))
                    ((int)_DAT_00011096,(int)_DAT_000110b8,(int)_DAT_000110b6,
                     *(code **)(_g_phyFuns + 0x28));
  iVar2 = (**(code **)(_g_phyFuns + 0x100))
                    ((int)sVar1 - (int)_DAT_0001109a,*(code **)(_g_phyFuns + 0x100));
  if (iVar2 < iVar4) {
    iVar2 = (int)DAT_000111fe;
  }
  else {
    iVar2 = ram_temp_to_power((int)sVar1,iVar3,1);
  }
  if ((param_1 != 0) && (DAT_00011200 != iVar2)) {
    rom_phy_bbpll_cal(1);
    DAT_000111fe = (char)iVar2;
    _DAT_0001109a = _DAT_00011096;
    DAT_00011200 = DAT_000111fe;
    ram_bt_set_tx_gain(0);
    if (param_2 != 0) {
      phy_printf("correct_power=%d,temp=%d %d\n",(int)DAT_000111fe,(int)_DAT_00011096,iVar3);
    }
    rom_phy_bbpll_cal(0);
    return;
  }
  return;
}

