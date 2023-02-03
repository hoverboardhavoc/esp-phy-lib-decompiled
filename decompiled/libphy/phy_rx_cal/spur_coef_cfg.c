/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_rx_cal.o -> spur_coef_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void spur_coef_cfg(uint param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                  undefined4 param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 10;
  if (1 < param_2) {
    uVar5 = 0x14;
  }
  iVar1 = chan_to_freq(param_1 & 0xffff);
  uVar4 = 0x28;
  if (param_4 != 0) {
    if (param_4 == 1) {
      uVar4 = 0x1a;
    }
    else if (param_4 == 2) {
      uVar4 = 0x18;
    }
  }
  if (param_3 == 0) {
    uVar3 = CONCAT13(DAT_6001235c,CONCAT12(DAT_6001235b,CONCAT11(DAT_6001235a,DAT_60012359))) &
            0xffffdfff;
    DAT_6001235a = (undefined1)(uVar3 >> 8);
    DAT_6001235b = (undefined1)(uVar3 >> 0x10);
    DAT_6001235c = (undefined1)(uVar3 >> 0x18);
  }
  else {
    iVar2 = spur_cal(iVar1,uVar5,uVar4,1);
    spur_reg_write_one_tone(0,(iVar2 << 10) / 100);
  }
  if (param_5 == 0) {
    uVar3 = CONCAT13(DAT_60012360,CONCAT12(DAT_6001235f,CONCAT11(DAT_6001235e,DAT_6001235d))) &
            0xffffdfff;
    DAT_6001235e = (undefined1)(uVar3 >> 8);
    DAT_6001235f = (undefined1)(uVar3 >> 0x10);
    DAT_60012360 = (undefined1)(uVar3 >> 0x18);
  }
  else {
    iVar2 = 0;
    if (((param_5 << 0x11 < 0) && ((param_5 >> (param_1 - 1 & 0x1f) & 1U) != 0)) &&
       (iVar2 = spur_cal(iVar1,uVar5,param_6,param_7), iVar2 != 0)) {
      iVar2 = (iVar2 << 10) / 100;
    }
    spur_reg_write_one_tone(1,iVar2);
  }
  uVar3 = (0x50 << (DAT_60012390 & 0x1f)) / iVar1 & 0xffffff;
  DAT_6001238d = (char)uVar3;
  DAT_6001238e = (char)(uVar3 >> 8);
  DAT_6001238f = (char)(uVar3 >> 0x10);
  return;
}

