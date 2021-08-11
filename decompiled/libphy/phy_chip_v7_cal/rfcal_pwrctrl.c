/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> rfcal_pwrctrl
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rfcal_pwrctrl(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  uVar7 = ((param_6 << 0x11) >> 0x10) + 4 >> 3;
  if ((int)uVar7 < 0) {
    uVar7 = 0;
  }
  iVar12 = (param_3 + -1) * 0x1000000 >> 0x18;
  iVar2 = 0;
  do {
    if ((char)iVar12 < '\0') {
      stop_tx_tone(1);
      return;
    }
    uVar6 = (uint)*(byte *)(param_2 + iVar12);
    if (iVar12 < param_3 + -1) {
      iVar2 = (int)(((iVar2 + (uint)((byte *)(param_2 + iVar12))[1]) - uVar6) * 0x10000) >> 0x10;
    }
    sVar5 = -0x18;
    uVar11 = (int)(((uVar7 & 0xffff) - uVar6) * 0x10000) >> 0x10;
    if (0x18 < (int)uVar11) {
      sVar5 = 0x18;
    }
    iVar13 = 0;
    uVar8 = 2;
    do {
      iVar9 = (iVar2 + param_7) * 0x1000000;
      iVar10 = iVar9 >> 0x18;
      cVar4 = (char)((uint)iVar9 >> 0x18);
      if (iVar10 < 0) {
        cVar4 = '\0';
      }
      if ('d' < cVar4) {
        cVar4 = 'd';
      }
      start_tx_tone_step(1,param_1,0,0,0);
      get_tone_sar_dout(2);
      get_tone_sar_dout(2);
      iVar9 = (int)cVar4;
      if (((int)uVar11 < 0x19) && (-0x19 < (int)uVar11)) {
        uVar3 = uVar11;
        if (param_8 != 0) {
_L266:
          ets_printf("i=%02d  acc=%03d  tgt=%03d  err=%03d  ser=%03d att=%03d\n",iVar13,uVar7,uVar6,
                     uVar3,iVar2,iVar9);
        }
        if (uVar3 == 0) {
          if (iVar13 != 0) break;
        }
        else if ((uVar3 == 0xffffffff) && (uVar8 == 1)) break;
      }
      else {
        uVar3 = (int)sVar5;
        if (param_8 != 0) goto _L266;
      }
      if (uVar8 == 0) break;
      if (iVar10 < 1) {
        if ((int)uVar3 < 0) {
          iVar9 = 0;
          break;
        }
      }
      else if ((99 < iVar10) && (0 < (int)uVar3)) {
        iVar9 = 100;
        break;
      }
      sVar1 = (short)iVar2 + (short)uVar3;
      if (4 < ((uVar3 & 0xffff) + 2 & 0xffff)) {
        sVar1 = sVar1 - (short)((int)uVar3 >> 2);
      }
      iVar13 = iVar13 + 1;
      iVar2 = (int)sVar1;
      uVar8 = uVar3;
    } while (iVar13 != 10);
    iVar13 = (iVar9 - param_4) * 0x1000000;
    if (iVar13 >> 0x18 < -0x18) {
      *(undefined1 *)(param_5 + iVar12) = 0xe8;
    }
    else {
      *(undefined1 *)(param_5 + iVar12) = (char)((uint)iVar13 >> 0x18);
    }
    iVar12 = iVar12 + -1;
  } while( true );
}

