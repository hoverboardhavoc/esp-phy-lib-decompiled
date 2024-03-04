/*
 * Last changed at upstream commit 603b69583635ffcedf2a5e1d0f70da77edf82d10
 * https://github.com/espressif/esp-phy-lib/commit/603b69583635ffcedf2a5e1d0f70da77edf82d10
 * Upstream date: 2024-03-04 14:31:40 +0800
 * Upstream subject: feat: add esp32c5 beta3 support wifi
 * Source: librftest -> phy_test.o -> rx_spur_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint rx_spur_cal(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_50 [8];
  int iStack_48;
  int iStack_44;
  
  adc_rate_set(param_1 != 0x960);
  uVar3 = i2c_readReg_Mask(0x6a,1,0,7,4);
  chip_v7_set_chan(param_1 + 5U & 0xffff,0);
  force_rx_gain(1,param_2,0);
  start_tx_tone_step(1,0x80,0,0,0,0);
  uVar9 = 6;
  uVar7 = 0;
  iVar10 = 0;
  uVar6 = 0;
  do {
    uVar8 = uVar9 & 0xff;
    i2c_writeReg_Mask(0x6a,1,0,7,4,uVar8);
    ets_delay_us(10);
    cVar4 = '\x04';
    iVar1 = 0;
    uVar2 = 0;
    do {
      rxiq_get_pwr(10,auStack_50);
      uVar5 = iStack_48 + uVar2;
      cVar4 = cVar4 + -1;
      iVar1 = (uint)(uVar5 < uVar2) + iVar1 + iStack_44;
      uVar2 = uVar5;
    } while (cVar4 != '\0');
    if (uVar8 == 6) {
      uVar6 = 6;
      uVar7 = uVar5;
      iVar10 = iVar1;
    }
    else if ((iVar1 < iVar10) || ((iVar10 == iVar1 && (uVar5 < uVar7)))) {
      uVar6 = uVar8;
      uVar7 = uVar5;
      iVar10 = iVar1;
    }
    if (param_3 != 0) {
      phy_printf("%d,%d,%lld,%lld,%d\n",param_1,uVar9,uVar7,iVar10);
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 != 0xd);
  i2c_writeReg_Mask(0x6a,1,0,7,4,uVar3);
  force_rx_gain(0,0x28,0);
  start_tx_tone_step(0,0x80,0,0,0,0);
  adc_rate_set(1);
  return uVar6;
}

