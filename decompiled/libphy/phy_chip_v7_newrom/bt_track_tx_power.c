/*
 * Last changed at upstream commit 4779ddaaf29e1d6aa2d26980103a1c1bbaa29462
 * https://github.com/espressif/esp-phy-lib/commit/4779ddaaf29e1d6aa2d26980103a1c1bbaa29462
 * Upstream date: 2022-01-04 15:41:20 +0800
 * Upstream subject: fix the bug that phy libs still have ets_printf
 * Source: libphy -> phy_chip_v7_newrom.o -> bt_track_tx_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00010b28) */
/* WARNING: Removing unreachable block (ram,0x00010a40) */
/* WARNING: Removing unreachable block (ram,0x00010a4a) */
/* WARNING: Removing unreachable block (ram,0x00010d34) */
/* WARNING: Removing unreachable block (ram,0x00010000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_track_tx_power(int param_1,int param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = _DAT_000121ba;
  if (DAT_000121b0 != '\x10') {
    sVar1 = _phy_set_bbfreq_init;
  }
  iVar5 = (int)sVar1;
  iVar3 = 2;
  iVar4 = abs_temp((short)_DAT_0001206a - iVar5);
  if (7 < iVar4) {
    iVar3 = 4;
  }
  iVar4 = abs_temp((int)(short)_DAT_0001206a - (int)(short)_DAT_0001206e);
  if (((iVar3 <= iVar4) && (param_1 != 0)) &&
     (cVar2 = (char)(((int)(((uint)_DAT_0001206a - iVar5) * 0x10000) >> 0x10) / 8),
     DAT_000121a8 != cVar2)) {
    phy_bbpll_cal_part_0();
    _DAT_0001206e = _DAT_0001206a;
    DAT_000121a8 = cVar2;
    txpwr_correct(1,&phy_param,&phy_param,iVar5);
    if (param_2 != 0) {
      phy_printf("correct_power=%d,temp=%d %d\n",(int)DAT_000121a8,(int)(short)_DAT_0001206a,iVar5);
    }
    _DAT_6000e040 = _DAT_6000e040 & 0xfffffff3 | 4;
    return;
  }
  return;
}

