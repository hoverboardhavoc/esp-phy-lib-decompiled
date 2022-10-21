/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tx_cal.o -> txiq_cal_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txiq_cal_init(void)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_18 [12];
  
  if (-1 < (int)(_DAT_00012128 << 0x11)) {
    iVar1 = (int)(short)DAT_000120e0;
    cVar2 = DAT_000120e0;
    if (DAT_000120e0 < '\0') {
      cVar2 = '\0';
    }
    rfcal_txiq(0,&phy_param,&phy_param,0x80,(int)cVar2,0);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    iVar1 = (iVar1 + -0x14) * 0x10000 >> 0x10;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    rfcal_txiq(0,auStack_18,&phy_param,0x80,(int)(char)iVar1,2);
    _DAT_00012128 = _DAT_00012128 | 0x4000;
  }
  return;
}

