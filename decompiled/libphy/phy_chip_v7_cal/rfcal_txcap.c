/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
 * Source: libphy -> phy_chip_v7_cal.o -> rfcal_txcap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rfcal_txcap(undefined4 param_1,undefined4 param_2,int param_3,byte *param_4)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  
  cVar5 = '\0';
  start_tx_tone_step(1,param_1,param_2,0,0,0);
  do {
    *param_4 = 0xf;
    uVar1 = 0xf;
    iVar6 = 0;
    do {
      uVar3 = 2;
      if (cVar5 == '\x01') {
        uVar3 = 4;
      }
      i2c_writeReg_Mask(0x6b,1,uVar3,3,0,uVar1 & 0xff);
      sVar2 = read_sar2_code();
      iVar4 = (int)sVar2;
      if (param_3 != 0) {
        ets_printf("%d, %d; ",uVar1,iVar4);
      }
      if (iVar6 < iVar4) {
        *param_4 = (byte)uVar1;
        iVar6 = iVar4;
      }
      else if ((0x14 < iVar6 - iVar4) && ((int)uVar1 < (int)(uint)*param_4)) break;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0xffffffff);
    if (param_3 != 0) {
      ets_printf("reg_i=%d, indata=%d\n",cVar5,*param_4);
    }
    uVar3 = 2;
    if (cVar5 == '\x01') {
      uVar3 = 4;
    }
    i2c_writeReg_Mask(0x6b,1,uVar3,3,0,*param_4);
    param_4 = param_4 + 1;
    if (cVar5 == '\x01') {
      stop_tx_tone(1);
      return;
    }
    cVar5 = '\x01';
  } while( true );
}

