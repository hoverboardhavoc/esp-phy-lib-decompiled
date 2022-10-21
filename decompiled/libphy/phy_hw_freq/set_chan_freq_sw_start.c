/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_hw_freq.o -> set_chan_freq_sw_start
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_chan_freq_sw_start(uint param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  _DAT_6000e0c4 = _DAT_6000e0c4 & 0xfffffeff;
  correct_rfpll_offset(param_2,param_3,&phy_param);
  _DAT_6000e150 = _DAT_6000e150 & 0xf00fffff | param_1 << 0x14;
  _DAT_6000e0c4 = (param_1 & 0x7f) << 1 | _DAT_6000e0c4 & 0xffffff00;
  cVar1 = '\x03';
  do {
    do {
    } while (_DAT_6000e168 < 0);
    _DAT_6000e0c4 = _DAT_6000e0c4 & 0xfffffeff;
    ets_delay_us(1);
    do {
    } while (_DAT_6000e168 < 0);
  } while ((param_1 != (_DAT_6000e170 >> 0x11 & 0x7f)) && (cVar1 = cVar1 + -1, cVar1 != '\0'));
  if (DAT_000110a0 != '\0') {
    cVar1 = '\n';
    do {
      ets_delay_us(0x14);
      iVar2 = rfpll_cap_correct(DAT_0001109f);
      if (iVar2 == 0) {
        return;
      }
      cVar1 = cVar1 + -1;
    } while (cVar1 != '\0');
  }
  return;
}

