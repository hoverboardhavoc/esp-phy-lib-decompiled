/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
 * Source: libphy -> phy_chip_v7_newrom.o -> noise_check_loop
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void noise_check_loop(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = _DAT_000121a6;
  _DAT_6001d044 = _DAT_6001d044 & 0xfffffffe;
  _DAT_6001d050 = _DAT_6001d050 | 1;
  _DAT_6001c018 = _DAT_6001c018 & 0xf7ffffff;
  uVar3 = _DAT_6001c050 & 0x3ff;
  iVar4 = (uVar3 - 0x400) * 0x10000;
  iVar5 = iVar4 >> 0x10;
  _write_chan_freq = (undefined2)((uint)iVar4 >> 0x10);
  iVar4 = (int)_DAT_000121a6;
  if (param_1 == 0xff) {
    ets_printf("noise value: %d, %d, %d\n",iVar5,iVar4,(int)_DAT_00012140);
  }
  if ((uVar3 - 0x26d & 0xffff) < 0x3f) {
    if (iVar5 < -0x188) {
      iVar5 = -0x188;
    }
    sVar2 = (short)iVar5;
    if (-0x160 < sVar2) {
      sVar2 = -0x160;
    }
    iVar5 = (int)sVar2;
    if (iVar4 < iVar5) {
      _DAT_000121a6 = (short)((iVar5 + iVar4 * 3 + -2) / 4);
    }
    else if (iVar5 < iVar4) {
      if (iVar5 < iVar4 + -0x10) {
        _DAT_000121a6 = sVar1 + -0xc;
      }
      else {
        _DAT_000121a6 = (short)((iVar5 * 3 + iVar4 + -2) / 4);
      }
    }
    iVar5 = (int)_DAT_00012140;
    iVar4 = (int)_DAT_000121a6;
    if (DAT_00012083 == '\0') {
      sVar1 = _DAT_000121a6;
      if ((iVar4 <= iVar5 + 4) && (sVar1 = _DAT_000121a6, iVar5 + -4 <= iVar4)) goto _L191;
    }
    else {
      sVar1 = _DAT_000121a6;
      if (-0x180 < iVar4) {
        sVar1 = (short)((iVar4 + -0x180) / 2);
      }
    }
    _DAT_00012140 = sVar1;
    if ((param_2 != 0) && (set_noise_floor((int)_DAT_00012140), param_1 == 0xff)) {
      ets_printf("rx noise set : old=%d, new=%d\n",iVar5,(int)_DAT_00012140);
    }
  }
_L191:
  _DAT_6001d044 = _DAT_6001d044 | 1;
  return;
}

