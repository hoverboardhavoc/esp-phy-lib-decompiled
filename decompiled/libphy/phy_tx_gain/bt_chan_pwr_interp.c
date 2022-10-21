/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tx_gain.o -> bt_chan_pwr_interp
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int bt_chan_pwr_interp(char *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = param_1[1];
  if (param_2 < 0xd) {
    iVar2 = -0xc;
  }
  else {
    iVar2 = 0xc;
    if (0x25 < param_2) {
      cVar1 = (char)((int)(((int)param_1[2] - (int)cVar1) * (param_2 - 0x25) + 0xc) / 0x19) + cVar1;
      goto _L90;
    }
  }
  cVar1 = (char)((int)(((int)cVar1 - (int)*param_1) * (param_2 - 0xc) + iVar2) / 0x19) + *param_1;
_L90:
  return (int)cVar1;
}

