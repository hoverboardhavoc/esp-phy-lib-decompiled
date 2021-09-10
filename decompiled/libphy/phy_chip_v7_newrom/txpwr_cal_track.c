/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
 * Source: libphy -> phy_chip_v7_newrom.o -> txpwr_cal_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00010d34) */
/* WARNING: Removing unreachable block (ram,0x00010000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txpwr_cal_track(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    if (DAT_000121b0 == '\x01') {
      iVar4 = (int)_DAT_000121b8;
      goto _L125;
    }
  }
  else if ((param_1 == 1) && (DAT_000121b0 == '\x10')) {
    iVar4 = (int)_DAT_000121ba;
    goto _L125;
  }
  iVar4 = (int)_phy_set_bbfreq_init;
_L125:
  iVar2 = 2;
  iVar3 = abs_temp((short)_DAT_0001206a - iVar4);
  if (7 < iVar3) {
    iVar2 = 4;
  }
  iVar3 = abs_temp((int)(short)_DAT_0001206a - (int)(short)_DAT_0001206e);
  if (((iVar2 <= iVar3) && (param_2 != 0)) &&
     (cVar1 = (char)(((int)(((uint)_DAT_0001206a - iVar4) * 0x10000) >> 0x10) / 8),
     DAT_000121a8 != cVar1)) {
    phy_bbpll_cal_part_0();
    _DAT_0001206e = _DAT_0001206a;
    DAT_000121a8 = cVar1;
    txpwr_correct(param_1 != 0,&phy_param,&phy_param,iVar4);
    if (param_3 != 0) {
      ets_printf("correct_power=%d,temp=%d %d\n",(int)DAT_000121a8,(int)(short)_DAT_0001206a,iVar4);
    }
    _DAT_6000e040 = _DAT_6000e040 & 0xfffffff3 | 4;
    return;
  }
  return;
}

