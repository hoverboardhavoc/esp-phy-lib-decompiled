/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> rfcal_txcap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rfcal_txcap(undefined4 param_1,undefined4 param_2,int param_3,byte *param_4)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  
  start_tx_tone_step(1,param_1,param_2,0,0,0);
  *param_4 = 0xf;
  uVar1 = 0xf;
  iVar4 = 0;
  do {
    i2c_writeReg_Mask(0x6b,1,2,3,0,uVar1 & 0xff);
    sVar3 = read_sar2_code();
    iVar2 = (int)sVar3;
    if (param_3 != 0) {
      ets_printf("%d, %d; ",uVar1,iVar2);
    }
    if (iVar4 < iVar2) {
      *param_4 = (byte)uVar1;
      iVar4 = iVar2;
    }
    else if ((0x14 < iVar4 - iVar2) && ((int)uVar1 < (int)(uint)*param_4)) break;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0xffffffff);
  if (param_3 != 0) {
    ets_printf("reg_i=%d, indata=%d\n",0,*param_4);
  }
  i2c_writeReg_Mask(0x6b,1,2,3,0,*param_4);
  stop_tx_tone(1);
  return;
}

