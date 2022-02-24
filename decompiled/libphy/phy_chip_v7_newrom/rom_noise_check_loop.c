/*
 * Last changed at upstream commit 449b432d94b968a75ffabffae91fe15796de7644
 * https://github.com/espressif/esp-phy-lib/commit/449b432d94b968a75ffabffae91fe15796de7644
 * Upstream date: 2022-02-24 11:32:38 +0800
 * Upstream subject: Update phy lib: S3_20220128_fbd66bc :  for high/low temperature performance C3_20220119_908_049c04c : for high/low temperature performance
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_noise_check_loop
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_noise_check_loop(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  sVar2 = _DAT_000121fc;
  _DAT_6001d044 = _DAT_6001d044 & 0xfffffffe;
  _DAT_6001d050 = _DAT_6001d050 | 1;
  _DAT_6001c018 = _DAT_6001c018 & 0xf7ffffff;
  uVar3 = _DAT_6001c050 & 0x3ff;
  iVar4 = (uVar3 - 0x400) * 0x10000;
  iVar5 = iVar4 >> 0x10;
  _DAT_000120b0 = (undefined2)((uint)iVar4 >> 0x10);
  iVar4 = (int)_DAT_000121fc;
  if (param_1 == 0xff) {
    phy_printf("noise value: %d, %d, %d\n",iVar5,iVar4,(int)_DAT_00012168);
  }
  if ((uVar3 - 0x26d & 0xffff) < 0x3f) {
    if (iVar5 < -0x188) {
      iVar5 = -0x188;
    }
    sVar1 = (short)iVar5;
    if (-0x160 < sVar1) {
      sVar1 = -0x160;
    }
    iVar5 = (int)sVar1;
    if (iVar4 < iVar5) {
      _DAT_000121fc = (short)((iVar5 + iVar4 * 3 + -2) / 4);
    }
    else if (iVar5 < iVar4) {
      if (iVar5 < iVar4 + -0x10) {
        _DAT_000121fc = sVar2 + -0xc;
      }
      else {
        _DAT_000121fc = (short)((iVar5 * 3 + iVar4 + -2) / 4);
      }
    }
    iVar5 = (int)_DAT_00012168;
    iVar4 = (int)_DAT_000121fc;
    sVar2 = _DAT_000121fc;
    if (DAT_000120af == '\0') {
      if ((iVar4 <= iVar5 + 4) && (iVar5 + -4 <= iVar4)) goto _L256;
    }
    else if (-0x180 < iVar4) {
      sVar2 = (short)((iVar4 + -0x180) / 2);
    }
    _DAT_00012168 = sVar2;
    if ((param_2 != 0) &&
       ((**(code **)(_g_phyFuns + 0x8c))((int)sVar2,*(code **)(_g_phyFuns + 0x8c)), param_1 == 0xff)
       ) {
      phy_printf("rx noise set : old=%d, new=%d\n",iVar5,(int)_DAT_00012168);
    }
  }
_L256:
  _DAT_6001d044 = _DAT_6001d044 | 1;
  return;
}

