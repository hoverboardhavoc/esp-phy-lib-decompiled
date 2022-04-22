/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7_cal.o -> tx_pwr_backoff
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int tx_pwr_backoff(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  byte local_42;
  char acStack_41 [13];
  
  iVar7 = (int)*param_1;
  iVar9 = iVar7 * 2;
  if (iVar7 < 0x4d) {
    acStack_41[0] = *param_1 + -0x1a;
  }
  else {
    acStack_41[0] = '2';
  }
  bVar1 = iVar7 >= 0x4d;
  rfcal_pwrctrl(0x80,acStack_41,1,0x28,&local_42,0xfc,param_3,param_4);
  uVar2 = (uint)local_42;
  iVar10 = 0;
  cVar11 = '\0';
  local_42 = local_42 + 0x28;
  iVar3 = uVar2 + 0xe;
  do {
    iVar3 = iVar3 * 0x1000000 >> 0x18;
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = 0;
    }
    if ('x' < (char)local_42) {
      local_42 = 0x78;
    }
    iVar5 = meas_tone_pwr_db((int)(char)iVar4,0x80,0xfc);
    iVar6 = meas_tone_pwr_db((int)(char)local_42,0x80,0xfc);
    iVar8 = (iVar5 - iVar6) * 0x10000 >> 0x10;
    if ((cVar11 == '\0') && (iVar5 < iVar9)) {
      if (iVar8 < 0x2d) {
        if (bVar1) goto _L392;
        goto _L381;
      }
_L399:
      bVar1 = true;
    }
    else {
      if (bVar1) {
_L392:
        if (iVar8 < 0x2c) goto _L381;
        if ((iVar8 != 0x2c) || (bVar1 = iVar5 < iVar9, 0x2b < iVar10)) {
          if (iVar5 < iVar9) goto _L399;
          goto _L385;
        }
        if (iVar5 < iVar9) goto _L378;
      }
      else {
        if (0x2c < iVar8) {
_L385:
          *(bool *)param_2 = 0x30 < iVar8;
          if (iVar5 < *param_1 * 2) {
            iVar7 = (int)(short)(((*param_1 * 2 - iVar5) + 1) / 2);
          }
          else {
            iVar7 = 0;
          }
          return iVar7;
        }
_L381:
        if ((iVar8 <= iVar10) && (iVar8 == 0x2c)) goto _L385;
      }
      bVar1 = false;
    }
_L378:
    if (((iVar6 < 0x51) || (local_42 == 0x78)) || (iVar3 < 1)) goto _L385;
    iVar3 = 2;
    if (bVar1) {
      iVar10 = iVar5 + iVar7 * -2;
      iVar3 = -4;
      if ((cVar11 == '\0') && (0x30 < iVar8)) {
        iVar3 = (iVar10 / 2 + -1) * 0x1000000 >> 0x18;
      }
      if (iVar3 << 1 < iVar10) {
        iVar3 = (int)(char)((iVar10 + -1) / 2);
      }
    }
    iVar3 = iVar3 + (char)iVar4;
    local_42 = (char)iVar3 + 0x1a;
    iVar10 = iVar8;
    if (bVar1) {
      iVar10 = 0;
    }
    cVar11 = cVar11 + '\x01';
    if (cVar11 == '\n') goto _L385;
  } while( true );
}

