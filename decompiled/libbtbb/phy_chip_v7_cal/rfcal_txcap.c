/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> rfcal_txcap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rfcal_txcap(undefined4 param_1,undefined4 param_2,int param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  uVar8 = 0;
  start_tx_tone_step(1,param_1,param_2,0,0,0);
  do {
    bVar1 = (&CSWTCH_278)[uVar8];
    uVar9 = uVar8 & 0xff;
    *param_4 = '\0';
    iVar10 = 0;
    uVar2 = 0;
    do {
      if (uVar9 == 1) {
        uVar6 = 0;
        uVar5 = 3;
_L233:
        uVar4 = 2;
        uVar7 = uVar2;
      }
      else {
        if (uVar9 == 2) {
          uVar6 = 4;
          uVar5 = 6;
          goto _L233;
        }
        uVar6 = 0;
        uVar5 = 3;
        uVar4 = 1;
        uVar7 = uVar2 * 2 + 1 & 0xff;
      }
      i2c_writeReg_Mask(0x6b,1,uVar4,uVar5,uVar6,uVar7);
      iVar3 = txtone_linear_pwr(0);
      if (param_3 != 0) {
        ets_printf("%d, %d; ",uVar2,iVar3);
      }
      if (iVar10 < iVar3) {
        iVar10 = iVar3;
        if (uVar8 == 0) {
          *param_4 = (char)(uVar2 << 1) + '\x01';
        }
        else {
          *param_4 = (char)uVar2;
        }
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 <= bVar1);
    if (param_3 != 0) {
      ets_printf("reg_i=%d, indata=%d\n",uVar8,*param_4);
    }
    if (uVar9 == 1) {
      uVar6 = 0;
      uVar5 = 3;
_L236:
      uVar4 = 2;
    }
    else {
      if (uVar9 == 2) {
        uVar6 = 4;
        uVar5 = 6;
        goto _L236;
      }
      uVar6 = 0;
      uVar5 = 3;
      uVar4 = 1;
    }
    i2c_writeReg_Mask(0x6b,1,uVar4,uVar5,uVar6,*param_4);
    uVar8 = uVar8 + 1;
    param_4 = param_4 + 1;
    if (uVar8 == 3) {
      stop_tx_tone(1);
      return;
    }
  } while( true );
}

