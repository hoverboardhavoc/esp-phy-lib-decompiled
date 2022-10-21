/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tx_cal.o -> bt_txdc_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_txdc_cal(void)

{
  ushort uVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  code *pcVar5;
  undefined *puVar6;
  
  uVar2 = 3;
  if (1 < (byte)(DAT_000120aa - 0x10U)) {
    uVar2 = 0xf;
  }
  if (-1 < (int)(_DAT_00012128 << 0x13)) {
    puVar6 = &phy_param;
    (**(code **)(_g_phyFuns + 0x1d4))(*(code **)(_g_phyFuns + 0x1d4));
    (**(code **)(_g_phyFuns + 0x1ec))(uVar2,0x20,*(code **)(_g_phyFuns + 0x1ec));
    pcVar5 = *(code **)(_g_phyFuns + 0x1cc);
    uVar1 = (**(code **)(_g_phyFuns + 0x1d0))(1,1,*(code **)(_g_phyFuns + 0x1d0));
    (*pcVar5)(1,1,uVar1 | 2);
    sVar3 = 0;
    do {
      sVar4 = sVar3 + 1;
      uVar2 = (**(code **)(_g_phyFuns + 0x34))(sVar3,*(code **)(_g_phyFuns + 0x34));
      (**(code **)(_g_phyFuns + 0x1cc))(1,2,uVar2,*(code **)(_g_phyFuns + 0x1cc));
      txdc_cal_v70(puVar6);
      puVar6 = puVar6 + 8;
      sVar3 = sVar4;
    } while (sVar4 != 3);
    (**(code **)(_g_phyFuns + 0x1e4))(0,*(code **)(_g_phyFuns + 0x1e4));
    (**(code **)(_g_phyFuns + 0x1d8))(*(code **)(_g_phyFuns + 0x1d8));
    _DAT_00012128 = _DAT_00012128 | 0x1000;
  }
  return;
}

