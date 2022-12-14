/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_tx_cal.o -> txiq_cal_init_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txiq_cal_init_new(void)

{
  int iVar1;
  char cVar2;
  code cVar3;
  undefined1 auStack_18 [12];
  
  if (-1 < (int)(_DAT_000110ac << 0x11)) {
    iVar1 = (int)(short)(char)get_power_atten;
    cVar3 = get_power_atten;
    if ((char)get_power_atten < '\0') {
      cVar3 = (code)0x0;
    }
    rfcal_txiq_new(0,&phy_param,&phy_param,0x80,(int)(char)cVar3,0);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    cVar2 = get_data_sat((iVar1 + -0x14) * 0x10000 >> 0x10,0x78,0);
    rfcal_txiq_new(0,auStack_18,&phy_param,0x80,(int)cVar2,2);
    _DAT_000110ac = _DAT_000110ac | 0x4000;
  }
  return;
}

