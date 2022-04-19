/*
 * Last changed at upstream commit 97e9e8992ea947fa46bc35545000b2c45d7b3060
 * https://github.com/espressif/esp-phy-lib/commit/97e9e8992ea947fa46bc35545000b2c45d7b3060
 * Upstream date: 2022-04-19 15:45:53 +0800
 * Upstream subject: BLE deinit phy_init_flag make wifi light sleep RX problem
 * Source: libphy -> phy_chip_v7.o -> bt_txdc_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_txdc_cal(void)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  
  (**(code **)(g_phyFuns + 0x1bc))(0x6a,0,0,3,0,0xc,*(code **)(g_phyFuns + 0x1bc));
  if (-1 < (int)(DAT_0001459c << 0x13)) {
    puVar6 = &DAT_000145fe;
    (**(code **)(g_phyFuns + 0x1d4))(*(code **)(g_phyFuns + 0x1d4));
    (**(code **)(g_phyFuns + 0x1ec))(0xf,0x20,*(code **)(g_phyFuns + 0x1ec));
    pcVar3 = *(code **)(g_phyFuns + 0x1cc);
    uVar4 = (**(code **)(g_phyFuns + 0x1d0))(1,1,*(code **)(g_phyFuns + 0x1d0));
    (*pcVar3)(1,1,uVar4 | 2);
    sVar1 = 0;
    do {
      sVar2 = sVar1 + 1;
      uVar5 = (**(code **)(g_phyFuns + 0x34))(sVar1,*(code **)(g_phyFuns + 0x34));
      (**(code **)(g_phyFuns + 0x1cc))(1,2,uVar5,*(code **)(g_phyFuns + 0x1cc));
      txdc_cal_v70(puVar6);
      puVar6 = puVar6 + 4;
      sVar1 = sVar2;
    } while (sVar2 != 3);
    (**(code **)(g_phyFuns + 0x1e4))(0,*(code **)(g_phyFuns + 0x1e4));
    (**(code **)(g_phyFuns + 0x1d8))(*(code **)(g_phyFuns + 0x1d8));
    DAT_0001459c = DAT_0001459c | 0x1000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(g_phyFuns + 0x1bc))(0x6a,0,0,3,0,2);
  return;
}

