/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> spur_coef_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void spur_coef_cfg(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                  undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 10;
  if (1 < param_2) {
    uVar4 = 0x14;
  }
  iVar1 = chan_to_freq(param_1);
  uVar3 = 0x28;
  if (param_4 != 0) {
    if (param_4 == 1) {
      uVar3 = 0x1a;
    }
    else if (param_4 == 2) {
      uVar3 = 0x18;
    }
  }
  if (param_3 == 0) {
    _DAT_6001d014 = _DAT_6001d014 & 0xffffdfff;
  }
  else {
    iVar2 = spur_cal(iVar1,uVar4,uVar3,1);
    spur_reg_write_one_tone(0,(iVar2 << 10) / 100);
  }
  if (param_5 == 0) {
    _DAT_6001d018 = _DAT_6001d018 & 0xffffdfff;
  }
  else {
    iVar2 = 0;
    if (((param_5 << 0x11 < 0) && ((param_5 >> (param_1 - 1U & 0x1f) & 1U) != 0)) &&
       (iVar2 = spur_cal(iVar1,uVar4,param_6,param_7), iVar2 != 0)) {
      iVar2 = (iVar2 << 10) / 100;
    }
    spur_reg_write_one_tone(1,iVar2);
  }
  _DAT_6001cc48 =
       (0x50 << (_DAT_6001cc48 >> 0x18 & 0x1f)) / iVar1 & 0xffffffU | _DAT_6001cc48 & 0xff000000;
  return;
}

