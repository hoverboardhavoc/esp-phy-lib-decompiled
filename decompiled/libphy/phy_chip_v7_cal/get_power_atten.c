/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> get_power_atten
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint get_power_atten(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = 0;
  uVar1 = 0;
  iVar6 = 0;
  while( true ) {
    start_tx_tone_step(1,param_1,param_2 & 0xff,0,0,0);
    ets_delay_us(2);
    iVar2 = get_power_db(param_4);
    iVar2 = (int)(short)(iVar2 >> 2);
    uVar5 = iVar2 - param_3 & 0xffff;
    iVar4 = (int)(short)(iVar2 - param_3);
    if (((iVar3 != 0) && ((int)uVar1 < (int)param_2)) && (iVar6 < iVar2)) {
      param_2 = (int)((uVar1 - 0x14) * 0x10000) >> 0x10;
    }
    uVar1 = param_2;
    if (param_5 != 0) {
      phy_printf("%d, atten=%d, pwr=%d, %d, %d\n",iVar3,uVar1,iVar2,param_3,iVar4);
    }
    if ((uVar5 + 3 & 0xffff) < 7) {
      return uVar1;
    }
    if (iVar4 < 1) {
      uVar5 = (iVar4 * 3) / 4;
    }
    param_2 = (int)(((uVar1 & 0xffff) + uVar5) * 0x10000) >> 0x10;
    if ((int)param_2 < 0) break;
    if (0x78 < (int)param_2) {
      return 0x78;
    }
    iVar3 = iVar3 + 1;
    iVar6 = iVar2;
    if (iVar3 == 6) {
      return param_2;
    }
  }
  return 0;
}

