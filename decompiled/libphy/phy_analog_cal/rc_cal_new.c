/*
 * Last changed at upstream commit d8ee8f776acd1aafdfc3046f526db024b175b094
 * https://github.com/espressif/esp-phy-lib/commit/d8ee8f776acd1aafdfc3046f526db024b175b094
 * Upstream date: 2022-05-09 07:50:30 -0400
 * Upstream subject: esp32c2: optimize rf performace
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
  
  if (-1 < (int)(_DAT_00011148 << 8)) {
    uVar3 = (*(code *)*_g_phyFuns)(DAT_000110f9,(code *)*_g_phyFuns);
    DAT_0001118e = (undefined1)uVar3;
    if (0x2d < uVar3) {
      uVar3 = 0x32;
    }
    iVar6 = (uVar3 + 0x38) * 0x52;
    DAT_0001118f = get_data_sat((iVar6 / (int)((uint)*param_2 * 10) + -8) * 0x10000 >> 0x10,*param_1
                                ,2);
    DAT_00011190 = get_data_sat((iVar6 / (int)((uint)param_2[1] * 10) + -8) * 0x10000 >> 0x10,
                                param_1[1],2);
    uVar7 = 0;
    puVar1 = &phy_param;
    do {
      pbVar5 = (byte *)(param_3 + uVar7);
      uVar4 = uVar7 & 1;
      uVar7 = uVar7 + 1;
      uVar2 = get_data_sat(((int)((uVar3 + 0x38) * 0x334) / (int)((uint)*pbVar5 * 0x68) + -8) *
                           0x10000 >> 0x10,param_1[uVar4 + 2],2);
      puVar1[0x193] = uVar2;
      puVar1 = puVar1 + 1;
    } while (uVar7 != 4);
    _DAT_00011148 = _DAT_00011148 | 0x800000;
  }
  return;
}

