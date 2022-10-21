/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tx_cal.o -> get_power_atten
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint get_power_atten(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  uVar1 = 0;
  iVar3 = 0;
  while( true ) {
    start_tx_tone_step(1,param_1,param_2 & 0xff,0,0,0);
    iVar2 = get_power_db(param_4);
    iVar2 = (int)(short)(iVar2 >> 2);
    iVar5 = (int)(short)(iVar2 - param_3);
    if (((iVar4 != 0) && ((int)uVar1 < (int)param_2)) && (iVar3 < iVar2)) {
      param_2 = (int)((uVar1 - 0x14) * 0x10000) >> 0x10;
    }
    uVar1 = param_2;
    if (param_5 != 0) {
      phy_printf("%d, atten=%d, pwr=%d, %d, %d\n",iVar4,uVar1,iVar2,param_3,iVar5);
    }
    if (((iVar2 - param_3 & 0xffffU) + 3 & 0xffff) < 7) {
      return uVar1;
    }
    iVar3 = (**(code **)(_g_phyFuns + 0x28))(iVar5,0x14,0xffffffec,*(code **)(_g_phyFuns + 0x28));
    if ((short)iVar3 < 1) {
      iVar3 = ((short)iVar3 * 3) / 4;
    }
    param_2 = (int)((iVar3 + (uVar1 & 0xffff)) * 0x10000) >> 0x10;
    if ((int)param_2 < 0) break;
    if (0x78 < (int)param_2) {
      return 0x78;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar2;
    if (iVar4 == 6) {
      return param_2;
    }
  }
  return 0;
}

