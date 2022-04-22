/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7_cal.o -> rfcal_pwrctrl
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rfcal_pwrctrl(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
                  undefined4 param_6,int param_7,int param_8)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar10 = (param_3 + -1) * 0x1000000 >> 0x18;
  iVar9 = 0;
  do {
    if ((char)iVar10 < '\0') {
      stop_tx_tone(1);
      return;
    }
    uVar2 = (uint)*(byte *)(param_2 + iVar10);
    if (iVar10 < param_3 + -1) {
      iVar9 = (int)(((iVar9 + (uint)((byte *)(param_2 + iVar10))[1]) - uVar2) * 0x10000) >> 0x10;
    }
    iVar11 = 0;
    uVar6 = 2;
    do {
      iVar7 = (iVar9 + param_7) * 0x1000000;
      iVar8 = iVar7 >> 0x18;
      cVar5 = (char)((uint)iVar7 >> 0x18);
      if (iVar8 < 0) {
        cVar5 = '\0';
      }
      if ('d' < cVar5) {
        cVar5 = 'd';
      }
      start_tx_tone_step(1,param_1,0,0,0);
      iVar7 = (int)cVar5;
      _DAT_60006040 = _DAT_60006040 & 0xfffbffff;
      iVar3 = get_power_db(param_6);
      iVar4 = get_power_db(param_6);
      iVar3 = ((iVar3 + iVar4) * 0x10000 >> 0x10) + 4 >> 3;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      uVar12 = iVar3 - uVar2;
      if ((int)uVar12 < 0x19) {
        if ((int)uVar12 < -0x18) {
          uVar12 = 0xffffffe8;
          goto _L345;
        }
        if (param_8 != 0) goto _L358;
_L346:
        if (uVar12 == 0) {
          if (iVar11 != 0) break;
        }
        else if ((uVar12 == 0xffffffff) && (uVar6 == 1)) break;
      }
      else {
        uVar12 = 0x18;
_L345:
        if (param_8 != 0) {
_L358:
          phy_printf("i=%02d  acc=%03d  tgt=%03d  err=%03d  ser=%03d att=%03d\n",iVar11,uVar2,uVar12
                     ,iVar9,iVar7);
          goto _L346;
        }
      }
      if (uVar6 == 0) break;
      if (iVar8 < 1) {
        if ((int)uVar12 < 0) {
          iVar7 = 0;
          break;
        }
      }
      else if ((99 < iVar8) && (0 < (int)uVar12)) {
        iVar7 = 100;
        break;
      }
      sVar1 = (short)uVar12 + (short)iVar9;
      if (4 < ((uVar12 & 0xffff) + 2 & 0xffff)) {
        sVar1 = sVar1 - (short)((int)uVar12 >> 2);
      }
      iVar11 = iVar11 + 1;
      iVar9 = (int)sVar1;
      uVar6 = uVar12;
    } while (iVar11 != 10);
    iVar11 = (iVar7 - param_4) * 0x1000000;
    if (iVar11 >> 0x18 < -0x18) {
      *(undefined1 *)(param_5 + iVar10) = 0xe8;
    }
    else {
      *(undefined1 *)(param_5 + iVar10) = (char)((uint)iVar11 >> 0x18);
    }
    iVar10 = iVar10 + -1;
  } while( true );
}

