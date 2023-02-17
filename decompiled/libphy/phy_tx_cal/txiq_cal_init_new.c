/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
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
  
  if (-1 < (int)(_DAT_000120b4 << 0x11)) {
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
    _DAT_000120b4 = _DAT_000120b4 | 0x4000;
  }
  return;
}

