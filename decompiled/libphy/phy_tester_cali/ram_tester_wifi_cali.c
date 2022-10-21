/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tester_cali.o -> ram_tester_wifi_cali
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
  
  if ((DAT_00011204 & 0xf) != 1) {
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
  DAT_00011175 = 0x30;
  DAT_0001116f = 8;
  _DAT_00011170 = 0x808;
  iVar2 = (**(code **)(_g_phyFuns + 0x110))(&phy_param,param_1,*(code **)(_g_phyFuns + 0x110));
  iVar3 = (**(code **)(_g_phyFuns + 0x110))(&phy_param,param_1,*(code **)(_g_phyFuns + 0x110));
  DAT_0001025d = (char)(((uint)(byte)(&DAT_000110f4)[DAT_00011205 >> 4] - iVar3) * 0x1000000 >> 0x18
                       );
  cVar5 = (char)(((uint)(byte)(&DAT_000110f4)[DAT_00011205 & 0xf] - iVar2) * 0x1000000 >> 0x18);
  wifi_cali_offset = cVar5;
  if ((DAT_00011205 & 0xe) == 0) {
    wifi_cali_offset = DAT_0001025d;
    DAT_0001025d = cVar5;
  }
  if (param_3 != 0) {
    phy_printf("interp_index=%d,%d,offset=%d %d\n",iVar2,iVar3,(int)wifi_cali_offset,
               (int)DAT_0001025d);
  }
  uVar6 = 0;
  do {
    cVar5 = wifi_cali_offset;
    if (uVar6 < 2) {
      cVar5 = DAT_0001025d;
    }
    *(char *)(param_2 + uVar6) = puVar1[0xf4] - cVar5;
    uVar6 = uVar6 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar6 != 0xe);
  return;
}

