/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_feature.o -> phy_set_rate
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_set_rate(byte param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,0,3,0,2,*(code **)(_g_phyFuns + 0x1bc));
  cVar1 = '\0';
  if (((2 < (byte)(param_1 - 0x15)) && ((param_1 & 0xfb) != 8)) &&
     (cVar1 = -5, chip_eco_ver != '\x05')) {
    cVar1 = -4;
  }
  if (phy_param != cVar1) {
    if (((byte)(param_1 - 0x15) < 3) || ((param_1 & 0xfb) == 8)) {
      (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,3,3,0,8);
      (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,3,7,4,0,*(code **)(_g_phyFuns + 0x1bc));
      (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,4,3,0,4,*(code **)(_g_phyFuns + 0x1bc));
      uVar3 = 6;
      if (chip_eco_ver != '\x05') {
        uVar3 = 10;
      }
      (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,4,7,4,uVar3,*(code **)(_g_phyFuns + 0x1bc));
      DAT_000110cb = 8;
      DAT_000110cc = 100;
      if (chip_eco_ver != '\x05') {
        DAT_000110cc = 0xa4;
      }
      uVar2 = 0;
    }
    else {
      uVar3 = 4;
      if (chip_eco_ver != '\x05') {
        uVar3 = 6;
      }
      (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,3,3,0,uVar3);
      (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,3,7,4,0,*(code **)(_g_phyFuns + 0x1bc));
      uVar3 = 8;
      if (chip_eco_ver != '\x05') {
        uVar3 = 6;
      }
      (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,4,3,0,uVar3,*(code **)(_g_phyFuns + 0x1bc));
      (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,4,7,4,3,*(code **)(_g_phyFuns + 0x1bc));
      DAT_000110cb = 4;
      if (chip_eco_ver != '\x05') {
        DAT_000110cb = 6;
      }
      DAT_000110cc = 0x38;
      if (chip_eco_ver != '\x05') {
        DAT_000110cc = 0x36;
      }
      uVar2 = 0xfa;
      if (chip_eco_ver != '\x05') {
        uVar2 = 0xfc;
      }
    }
    iVar4 = 0;
    do {
      (&phy_param)[iVar4] = uVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0xe);
    ram_wifi_tx_dig_gain(&phy_param);
    return;
  }
  return;
}

