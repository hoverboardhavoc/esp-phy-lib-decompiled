/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_reg.o -> txiq_set_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txiq_set_reg(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0x1f;
    if (0x1f < (int)param_1) {
      param_1 = 0x1f;
      goto _L31;
    }
  }
  else {
    iVar1 = 0xf;
    if (0xf < (int)param_1) {
      param_1 = 0xf;
      goto _L33;
    }
  }
  if ((int)param_1 < -iVar1) {
    param_1 = iVar1 * -0x1000000 >> 0x18;
  }
  if (param_2 != 0) {
_L33:
    _DAT_6000607c = _DAT_6000607c & 0xffffffe0 | param_1 & 0x1f;
    return;
  }
_L31:
  _DAT_6000607c = (param_1 & 0x3f) << 5 | _DAT_6000607c & 0xfffff81f;
  return;
}

