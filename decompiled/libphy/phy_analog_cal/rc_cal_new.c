/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_analog_cal.o -> rc_cal_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rc_cal_new(undefined1 *param_1,byte *param_2,int param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  
  if (-1 < (int)(_DAT_000110a4 << 8)) {
    uVar3 = get_rc_dout();
    DAT_000110e8 = (undefined1)uVar3;
    if (0x2d < uVar3) {
      uVar3 = 0x32;
    }
    iVar6 = (uVar3 + 0x38) * 0x52;
    DAT_000110e9 = get_data_sat((iVar6 / (int)((uint)*param_2 * 10) + -8) * 0x10000 >> 0x10,*param_1
                                ,2);
    DAT_000110ea = get_data_sat((iVar6 / (int)((uint)param_2[1] * 10) + -8) * 0x10000 >> 0x10,
                                param_1[1],2);
    uVar7 = 0;
    puVar1 = &phy_param;
    do {
      pbVar5 = (byte *)(param_3 + uVar7);
      uVar4 = uVar7 & 1;
      uVar7 = uVar7 + 1;
      uVar2 = get_data_sat(((int)((uVar3 + 0x38) * 0x334) / (int)((uint)*pbVar5 * 0x68) + -8) *
                           0x10000 >> 0x10,param_1[uVar4 + 2],0);
      puVar1[0xed] = uVar2;
      puVar1 = puVar1 + 1;
    } while (uVar7 != 4);
    _DAT_000110a4 = _DAT_000110a4 | 0x800000;
  }
  return;
}

