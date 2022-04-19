/*
 * Last changed at upstream commit 97e9e8992ea947fa46bc35545000b2c45d7b3060
 * https://github.com/espressif/esp-phy-lib/commit/97e9e8992ea947fa46bc35545000b2c45d7b3060
 * Upstream date: 2022-04-19 15:45:53 +0800
 * Upstream subject: BLE deinit phy_init_flag make wifi light sleep RX problem
 * Source: libphy -> phy_chip_v7.o -> phy_set_rate
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_set_rate(byte param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  if ((2 < (byte)(param_1 - 0x15)) && (cVar2 = -4, (param_1 & 0xfb) == 8)) {
    cVar2 = '\0';
  }
  if (phy_param != cVar2) {
    if (((byte)(param_1 - 0x15) < 3) || ((param_1 & 0xfb) == 8)) {
      (**(code **)(g_phyFuns + 0x1bc))(0x6b,0,3,3,0,8);
      (**(code **)(g_phyFuns + 0x1bc))(0x6b,0,3,7,4,0,*(code **)(g_phyFuns + 0x1bc));
      (**(code **)(g_phyFuns + 0x1bc))(0x6b,0,4,3,0,4,*(code **)(g_phyFuns + 0x1bc));
      (**(code **)(g_phyFuns + 0x1bc))(0x6b,0,4,7,4,6,*(code **)(g_phyFuns + 0x1bc));
      DAT_0001453b = 8;
      DAT_0001453c = 100;
    }
    else {
      (**(code **)(g_phyFuns + 0x1bc))(0x6b,0,3,3,0,6);
      (**(code **)(g_phyFuns + 0x1bc))(0x6b,0,3,7,4,0,*(code **)(g_phyFuns + 0x1bc));
      (**(code **)(g_phyFuns + 0x1bc))(0x6b,0,4,3,0,6,*(code **)(g_phyFuns + 0x1bc));
      (**(code **)(g_phyFuns + 0x1bc))(0x6b,0,4,7,4,3,*(code **)(g_phyFuns + 0x1bc));
      DAT_0001453b = 6;
      DAT_0001453c = 0x36;
    }
    iVar1 = 0;
    do {
      (&phy_param)[iVar1] = cVar2;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0xe);
    ram_wifi_tx_dig_gain(&DAT_00014636);
    return;
  }
  return;
}

