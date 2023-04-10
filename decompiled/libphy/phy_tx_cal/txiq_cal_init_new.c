/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
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
  
  if (-1 < (int)(_DAT_000120b8 << 0x11)) {
    iVar1 = (int)(short)(char)txiq_set_reg;
    cVar3 = txiq_set_reg;
    if ((char)txiq_set_reg < '\0') {
      cVar3 = (code)0x0;
    }
    rfcal_txiq_new(0,&phy_param,&phy_param,0x80,(int)(char)cVar3,0);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    cVar2 = get_data_sat((iVar1 + -0x14) * 0x10000 >> 0x10,0x78,0);
    rfcal_txiq_new(0,auStack_18,&phy_param,0x80,(int)cVar2,2);
    _DAT_000120b8 = _DAT_000120b8 | 0x4000;
  }
  return;
}

