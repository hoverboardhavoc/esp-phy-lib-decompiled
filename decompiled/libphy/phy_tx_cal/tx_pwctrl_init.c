/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tx_cal.o -> tx_pwctrl_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_pwctrl_init(void)

{
  if (-1 < (int)(_DAT_00012128 << 0xb)) {
    txcal_debuge_mode();
    set_channel_rfpll_freq(1,DAT_000120fb,0);
    (**(code **)(_g_phyFuns + 0x114))(&phy_param,1,*(code **)(_g_phyFuns + 0x114));
    pwdet_ref_code(0x50);
    if ((DAT_0001220c & 0xf) != 1) {
      tx_pwctrl_init_cal(0,&phy_param,&phy_param,&phy_param);
    }
    txcal_work_mode();
    _DAT_00012128 = _DAT_00012128 | 0x100000;
    DAT_000121fa = 0xb;
  }
  return;
}

