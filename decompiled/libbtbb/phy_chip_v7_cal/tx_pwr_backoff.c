/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> tx_pwr_backoff
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int tx_pwr_backoff(byte *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  byte local_42;
  char acStack_41 [13];
  
  uVar5 = (uint)*param_1;
  iVar8 = (int)(uVar5 << 0x11) >> 0x10;
  if (uVar5 < 0x4d) {
    acStack_41[0] = *param_1 - 0x1a;
  }
  else {
    acStack_41[0] = '2';
  }
  bVar1 = uVar5 >= 0x4d;
  rfcal_pwrctrl(0x80,acStack_41,1,0x2a,&local_42,_pwrdet_offset,(int)(char)rfcal_bb_atten_init,0);
  iVar9 = 0;
  cVar10 = '\0';
  iVar7 = local_42 + 0x10;
  rfcal_bb_atten_init = (byte)((local_42 + 0x2a) * 0x1000000 >> 0x18);
  local_42 = rfcal_bb_atten_init;
  do {
    iVar7 = iVar7 * 0x1000000 >> 0x18;
    iVar2 = iVar7;
    if (iVar7 < 0) {
      iVar2 = 0;
    }
    if ('z' < (char)local_42) {
      local_42 = 0x7a;
    }
    iVar3 = meas_tone_pwr_db((int)(char)iVar2,0x80,0x120);
    iVar4 = meas_tone_pwr_db((int)(char)local_42,0x80,0x120);
    iVar6 = (iVar3 - iVar4) * 0x10000 >> 0x10;
    if ((cVar10 == '\0') && (iVar3 < iVar8)) {
      if (iVar6 < 0x2d) {
        if (bVar1) goto _L423;
        goto _L412;
      }
_L430:
      bVar1 = true;
    }
    else {
      if (bVar1) {
_L423:
        if (iVar6 < 0x2c) goto _L412;
        if ((iVar6 != 0x2c) || (bVar1 = iVar3 < iVar8, 0x2b < iVar9)) {
          if (iVar3 < iVar8) goto _L430;
          goto _L416;
        }
        if (iVar3 < iVar8) goto _L409;
      }
      else {
        if (0x2c < iVar6) {
_L416:
          *(bool *)param_2 = 0x30 < iVar6;
          if (iVar3 < (int)((uint)*param_1 * 2)) {
            iVar8 = (int)(short)((int)(((uint)*param_1 * 2 - iVar3) + 1) / 2);
          }
          else {
            iVar8 = 0;
          }
          return iVar8;
        }
_L412:
        if ((iVar6 <= iVar9) && (iVar6 == 0x2c)) goto _L416;
      }
      bVar1 = false;
    }
_L409:
    if (((iVar4 < 0x51) || (local_42 == 0x7a)) || (iVar7 < 1)) goto _L416;
    iVar7 = 2;
    if (bVar1) {
      iVar9 = iVar3 + uVar5 * -2;
      iVar7 = -4;
      if ((cVar10 == '\0') && (0x30 < iVar6)) {
        iVar7 = (iVar9 / 2 + -1) * 0x1000000 >> 0x18;
      }
      if (iVar7 << 1 < iVar9) {
        iVar7 = (int)(char)((iVar9 + -1) / 2);
      }
    }
    iVar7 = iVar7 + (char)iVar2;
    local_42 = (char)iVar7 + 0x1a;
    iVar9 = iVar6;
    if (bVar1) {
      iVar9 = 0;
    }
    cVar10 = cVar10 + '\x01';
    if (cVar10 == '\n') goto _L416;
  } while( true );
}

