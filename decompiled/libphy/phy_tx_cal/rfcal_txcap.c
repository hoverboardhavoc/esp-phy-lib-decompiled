/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_tx_cal.o -> rfcal_txcap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rfcal_txcap(int param_1,byte *param_2)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = 0;
  do {
    iVar7 = 7;
    if (iVar1 != 1) {
      iVar7 = 0xf;
    }
    *param_2 = 0;
    uVar4 = 0;
    iVar6 = 0;
    do {
      uVar3 = 2;
      if (iVar1 == 1) {
        uVar3 = 4;
      }
      i2c_writeReg_Mask(0x6b,1,uVar3,3,0,uVar4 & 0xff);
      sVar2 = get_tone_sar_dout(1);
      iVar5 = (int)sVar2;
      if (param_1 != 0) {
        phy_printf("%d, %d; ",uVar4,iVar5);
      }
      if (iVar6 < iVar5) {
        *param_2 = (byte)uVar4;
        iVar6 = iVar5;
      }
      else if ((0x14 < iVar6 - iVar5) && ((int)uVar4 < (int)(uint)*param_2)) break;
      uVar4 = uVar4 + 1;
    } while ((int)(uVar4 * 0x1000000) >> 0x18 <= iVar7);
    if (param_1 != 0) {
      phy_printf("reg_i=%d, indata=%d\n",iVar1,*param_2);
    }
    uVar3 = 2;
    if (iVar1 == 1) {
      uVar3 = 4;
    }
    i2c_writeReg_Mask(0x6b,1,uVar3,3,0,*param_2);
    param_2 = param_2 + 1;
    if (iVar1 == 1) {
      return;
    }
    iVar1 = 1;
  } while( true );
}

