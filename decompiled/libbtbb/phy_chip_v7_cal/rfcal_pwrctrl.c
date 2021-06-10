/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> rfcal_pwrctrl
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rfcal_pwrctrl(undefined4 param_1,int param_2,int param_3,int param_4,char *param_5,
                  undefined4 param_6,int param_7,int param_8)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  iVar11 = (param_3 + -1) * 0x1000000 >> 0x18;
  iVar3 = 0;
  do {
    if ((char)iVar11 < '\0') {
      if (0x32 < (int)param_5[param_3 + -1] - (int)*param_5) {
        *param_5 = param_5[param_3 + -1] + -0x32;
      }
      stop_tx_tone(1);
      return;
    }
    uVar7 = (uint)*(byte *)(param_2 + iVar11);
    if (iVar11 < param_3 + -1) {
      iVar3 = (int)(((iVar3 + (uint)((byte *)(param_2 + iVar11))[1]) - uVar7) * 0x10000) >> 0x10;
    }
    iVar12 = 0;
    uVar10 = 2;
    do {
      iVar8 = (iVar3 + param_7) * 0x1000000;
      iVar9 = iVar8 >> 0x18;
      cVar6 = (char)((uint)iVar8 >> 0x18);
      if (iVar9 < 0) {
        cVar6 = '\0';
      }
      if ('d' < cVar6) {
        cVar6 = 'd';
      }
      start_tx_tone_step(1,param_1,0,0,0);
      ets_delay_us(2);
      iVar4 = get_power_db(param_6);
      iVar5 = get_power_db(param_6);
      iVar8 = (int)cVar6;
      iVar4 = ((iVar4 + iVar5) * 0x10000 >> 0x10) + 4 >> 3;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      uVar1 = iVar4 - uVar7;
      if ((int)uVar1 < 0x19) {
        if ((int)uVar1 < -0x18) {
          uVar1 = 0xffffffe8;
          goto _L375;
        }
        if (param_8 != 0) goto _L389;
_L376:
        if (uVar1 == 0) {
          if (iVar12 != 0) break;
        }
        else if ((uVar1 == 0xffffffff) && (uVar10 == 1)) break;
      }
      else {
        uVar1 = 0x18;
_L375:
        if (param_8 != 0) {
_L389:
          ets_printf("i=%02d  acc=%03d  tgt=%03d  err=%03d  ser=%03d att=%03d\n",iVar12,uVar7,uVar1,
                     iVar3,iVar8);
          goto _L376;
        }
      }
      if (uVar10 == 0) break;
      if (iVar9 < 1) {
        if ((int)uVar1 < 0) {
          iVar8 = 0;
          break;
        }
      }
      else if ((99 < iVar9) && (0 < (int)uVar1)) {
        iVar8 = 100;
        break;
      }
      sVar2 = (short)iVar3 + (short)uVar1;
      if (4 < ((uVar1 & 0xffff) + 2 & 0xffff)) {
        sVar2 = sVar2 - (short)((int)uVar1 >> 2);
      }
      iVar12 = iVar12 + 1;
      iVar3 = (int)sVar2;
      uVar10 = uVar1;
    } while (iVar12 != 10);
    iVar12 = (iVar8 - param_4) * 0x1000000;
    if (iVar12 >> 0x18 < -0x18) {
      param_5[iVar11] = -0x18;
    }
    else {
      param_5[iVar11] = (char)((uint)iVar12 >> 0x18);
    }
    iVar11 = iVar11 + -1;
  } while( true );
}

