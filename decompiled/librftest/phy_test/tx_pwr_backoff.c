/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> tx_pwr_backoff
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int tx_pwr_backoff(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  byte local_42;
  char acStack_41 [13];
  
  iVar5 = (int)*param_1;
  iVar9 = iVar5 * 2;
  if (iVar5 < 0x4d) {
    acStack_41[0] = *param_1 + -0x1a;
  }
  else {
    acStack_41[0] = '2';
  }
  bVar1 = iVar5 >= 0x4d;
  rfcal_pwrctrl(0x80,acStack_41,1,0x28,&local_42,0x140,param_3,param_4);
  uVar7 = (uint)local_42;
  iVar10 = 0;
  cVar11 = '\0';
  local_42 = local_42 + 0x28;
  iVar8 = uVar7 + 0xe;
  do {
    iVar8 = iVar8 * 0x1000000 >> 0x18;
    iVar2 = iVar8;
    if (iVar8 < 0) {
      iVar2 = 0;
    }
    if ('x' < (char)local_42) {
      local_42 = 0x78;
    }
    iVar3 = (**(code **)(_g_phyFuns + 0xc4))
                      ((int)(char)iVar2,0x80,0x140,*(code **)(_g_phyFuns + 0xc4));
    iVar4 = (**(code **)(_g_phyFuns + 0xc4))
                      ((int)(char)local_42,0x80,0x140,*(code **)(_g_phyFuns + 0xc4));
    iVar6 = (iVar3 - iVar4) * 0x10000 >> 0x10;
    if ((cVar11 == '\0') && (iVar3 < iVar9)) {
      if (iVar6 < 0x2d) {
        if (bVar1) goto _L38;
        goto _L27;
      }
_L45:
      bVar1 = true;
    }
    else {
      if (bVar1) {
_L38:
        if (iVar6 < 0x2c) goto _L27;
        if ((iVar6 != 0x2c) || (bVar1 = iVar3 < iVar9, 0x2b < iVar10)) {
          if (iVar3 < iVar9) goto _L45;
          goto _L31;
        }
        if (iVar3 < iVar9) goto _L24;
      }
      else {
        if (0x2c < iVar6) {
_L31:
          *(bool *)param_2 = 0x30 < iVar6;
          if (iVar3 < *param_1 * 2) {
            iVar5 = (int)(short)(((*param_1 * 2 - iVar3) + 1) / 2);
          }
          else {
            iVar5 = 0;
          }
          return iVar5;
        }
_L27:
        if ((iVar6 <= iVar10) && (iVar6 == 0x2c)) goto _L31;
      }
      bVar1 = false;
    }
_L24:
    if (((iVar4 < 0x51) || (local_42 == 0x78)) || (iVar8 < 1)) goto _L31;
    iVar8 = 2;
    if (bVar1) {
      iVar10 = iVar3 + iVar5 * -2;
      iVar8 = -4;
      if ((cVar11 == '\0') && (0x30 < iVar6)) {
        iVar8 = (iVar10 / 2 + -1) * 0x1000000 >> 0x18;
      }
      if (iVar8 << 1 < iVar10) {
        iVar8 = (int)(char)((iVar10 + -1) / 2);
      }
    }
    iVar8 = iVar8 + (char)iVar2;
    local_42 = (char)iVar8 + 0x1a;
    iVar10 = iVar6;
    if (bVar1) {
      iVar10 = 0;
    }
    cVar11 = cVar11 + '\x01';
    if (cVar11 == '\n') goto _L31;
  } while( true );
}

