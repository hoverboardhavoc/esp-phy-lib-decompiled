/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_tx_cal.o -> rfcal_txcap
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
      sVar2 = get_tone_sar_dout(1);
      iVar4 = (int)sVar2;
      if (param_3 != 0) {
        phy_printf("%d, %d; ",uVar1,iVar4);
      }
      if (iVar6 < iVar4) {
        *param_4 = (byte)uVar1;
        iVar6 = iVar4;
      }
      else if ((0x14 < iVar6 - iVar4) && ((int)uVar1 < (int)(uint)*param_4)) break;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0xffffffff);
    if (param_3 != 0) {
      phy_printf("reg_i=%d, indata=%d\n",cVar5,*param_4);
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

