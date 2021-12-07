/*
 * Last changed at upstream commit 2d89c532ccba0bb9988d1d1c6d719bbe1d8b65b8
 * https://github.com/espressif/esp-phy-lib/commit/2d89c532ccba0bb9988d1d1c6d719bbe1d8b65b8
 * Upstream date: 2021-12-07 14:34:50 +0800
 * Upstream subject: Update esp32c3 and esp32s3 phy lib and bb lib Fix the ble task watchdog timeout issue caused by phy enable when exit modem sleep.
 * Source: libphy -> phy_chip_v7_newrom.o -> ram_tester_wifi_cali
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_tester_wifi_cali(undefined4 param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  char cVar5;
  uint uVar6;
  
  if ((DAT_00012210 & 0xf) != 1) {
    puVar1 = &phy_param;
    iVar2 = 0;
    do {
      puVar4 = (undefined1 *)(param_2 + iVar2);
      iVar2 = iVar2 + 1;
      *puVar4 = puVar1[0xf4];
      puVar1 = puVar1 + 1;
    } while (iVar2 != 0xe);
    return;
  }
  puVar1 = &phy_param;
  DAT_00012181 = 0x30;
  DAT_0001217b = 8;
  _DAT_0001217c = 0x808;
  iVar2 = (**(code **)(_g_phyFuns + 0x110))(&phy_param,param_1,*(code **)(_g_phyFuns + 0x110));
  iVar3 = (**(code **)(_g_phyFuns + 0x110))(&phy_param,param_1,*(code **)(_g_phyFuns + 0x110));
  DAT_00011d4d = (char)(((uint)(byte)(&DAT_00012100)[DAT_00012211 >> 4] - iVar3) * 0x1000000 >> 0x18
                       );
  cVar5 = (char)(((uint)(byte)(&DAT_00012100)[DAT_00012211 & 0xf] - iVar2) * 0x1000000 >> 0x18);
  wifi_cali_offset = cVar5;
  if ((DAT_00012211 & 0xe) == 0) {
    wifi_cali_offset = DAT_00011d4d;
    DAT_00011d4d = cVar5;
  }
  if (param_3 != 0) {
    ets_printf("interp_index=%d,%d,offset=%d %d\n",iVar2,iVar3,(int)wifi_cali_offset,
               (int)DAT_00011d4d);
  }
  uVar6 = 0;
  do {
    cVar5 = wifi_cali_offset;
    if (uVar6 < 2) {
      cVar5 = DAT_00011d4d;
    }
    *(char *)(param_2 + uVar6) = puVar1[0xf4] - cVar5;
    uVar6 = uVar6 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar6 != 0xe);
  return;
}

