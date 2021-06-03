/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> bt_txdc_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_txdc_cal(void)

{
  ushort uVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  code *pcVar5;
  undefined2 *puVar6;
  
  if (-1 < (int)(DAT_00014050 << 0x13)) {
    puVar6 = &DAT_000140b2;
    (**(code **)(g_phyFuns + 0x1d4))(*(code **)(g_phyFuns + 0x1d4));
    (**(code **)(g_phyFuns + 0x1ec))(0xf,0x20,*(code **)(g_phyFuns + 0x1ec));
    pcVar5 = *(code **)(g_phyFuns + 0x1cc);
    uVar1 = (**(code **)(g_phyFuns + 0x1d0))(1,1,*(code **)(g_phyFuns + 0x1d0));
    (*pcVar5)(1,1,uVar1 | 2);
    sVar3 = 0;
    do {
      sVar4 = sVar3 + 1;
      uVar2 = (**(code **)(g_phyFuns + 0x34))(sVar3,*(code **)(g_phyFuns + 0x34));
      (**(code **)(g_phyFuns + 0x1cc))(1,2,uVar2,*(code **)(g_phyFuns + 0x1cc));
      txdc_cal_v70(puVar6);
      puVar6 = puVar6 + 4;
      sVar3 = sVar4;
    } while (sVar4 != 3);
    (**(code **)(g_phyFuns + 0x1e4))(0,*(code **)(g_phyFuns + 0x1e4));
    (**(code **)(g_phyFuns + 0x1d8))(*(code **)(g_phyFuns + 0x1d8));
    DAT_00014050 = DAT_00014050 | 0x1000;
  }
  return;
}

