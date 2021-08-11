/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> get_power_atten
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint get_power_atten(undefined4 param_1,uint param_2,int param_3,short param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar5 = (int)param_4 >> 2;
  uVar2 = iVar5 - param_3 & 0xffff;
  iVar3 = (int)(short)(iVar5 - param_3);
  iVar6 = 0;
  iVar1 = 0;
  uVar7 = 0;
  while( true ) {
    start_tx_tone_step(1,param_1,param_2 & 0xff,0,0,0);
    ets_delay_us(2);
    get_tone_sar_dout(2);
    uVar4 = param_2;
    if (((iVar6 != 0) && ((int)uVar7 < (int)param_2)) && (iVar1 < iVar5)) {
      uVar4 = (int)((uVar7 - 0x14) * 0x10000) >> 0x10;
    }
    if (param_5 != 0) {
      ets_printf("%d, atten=%d, pwr=%d, %d, %d\n",iVar6,uVar4,iVar5,param_3,iVar3);
    }
    if ((uVar2 + 3 & 0xffff) < 7) {
      return uVar4;
    }
    uVar7 = (iVar3 * 3) / 4 & 0xffff;
    if (0 < iVar3) {
      uVar7 = uVar2;
    }
    param_2 = (int)(((uVar4 & 0xffff) + uVar7) * 0x10000) >> 0x10;
    if ((int)param_2 < 0) break;
    if (0x78 < (int)param_2) {
      return 0x78;
    }
    iVar6 = iVar6 + 1;
    iVar1 = iVar5;
    uVar7 = uVar4;
    if (iVar6 == 6) {
      return param_2;
    }
  }
  return 0;
}

