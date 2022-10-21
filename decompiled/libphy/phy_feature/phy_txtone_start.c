/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_feature.o -> phy_txtone_start
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_txtone_start(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar1 = (param_3 + -0xc) * 0x10000 >> 0x10;
  set_rf_freq_offset(DAT_000110ff,param_1,param_2);
  iVar3 = 0x7f;
  if (iVar1 < 0x80) {
    iVar3 = iVar1;
  }
  target_power_backoff((int)(char)iVar3);
  _DAT_60006000 =
       ((_DAT_60006000 >> 0x12 & 0xff) + 9) * 0x400 & 0x3fc00 | _DAT_60006000 & 0xfffc03ff | 2;
  (**(code **)(_g_phyFuns + 200))(0,*(code **)(_g_phyFuns + 200));
  (**(code **)(_g_phyFuns + 200))(1,*(code **)(_g_phyFuns + 200));
  uVar2 = (**(code **)(_g_phyFuns + 0x28))
                    ((0x28 - DAT_000111cf) * 0x10000 >> 0x10,0x78,0,*(code **)(_g_phyFuns + 0x28));
  start_tx_tone_step(1,0,uVar2,0,0,0);
  return;
}

