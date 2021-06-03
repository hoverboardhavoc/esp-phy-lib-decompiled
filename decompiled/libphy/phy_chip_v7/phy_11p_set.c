/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> phy_11p_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_11p_set(int param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  int iVar2;
  
  DAT_0001401f = (undefined1)param_1;
  DAT_00014020 = (undefined1)param_2;
  if (param_1 == 0) {
    _DAT_6001c030 = _DAT_6001c030 | 0x20;
    (**(code **)(g_phyFuns + 0x1b4))(0x67,0,4,DAT_00014097);
    (**(code **)(g_phyFuns + 0x1b4))(0x67,0,5,DAT_00014097,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,0,0xc,DAT_00014097,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,0,0xd,DAT_00014097,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,0,6,DAT_00014098,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,0,7,DAT_00014098,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,0,0xe,DAT_00014098,*(code **)(g_phyFuns + 0x1b4));
    uVar1 = (uint)DAT_00014098;
    UNRECOVERED_JUMPTABLE = *(code **)(g_phyFuns + 0x1b4);
  }
  else {
    if (param_2 == 0) {
      iVar2 = 2;
      uVar1 = 100;
    }
    else {
      iVar2 = 3;
      uVar1 = 0x32;
    }
    _DAT_6002600c = _DAT_6002600c & 0xfffffff3 | iVar2 << 2;
    _DAT_6001c030 = _DAT_6001c030 & 0xffffffdf;
    uVar1 = ((DAT_00014096 + 0x38) * 0x67) / uVar1 - 8;
    if (0x3f < (int)uVar1) {
      uVar1 = 0x3f;
    }
    uVar1 = uVar1 & 0xff;
    (**(code **)(g_phyFuns + 0x1b4))(0x67,0,4,uVar1);
    (**(code **)(g_phyFuns + 0x1b4))(0x67,0,5,uVar1,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,0,0xc,uVar1,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,0,0xd,uVar1,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,0,6,uVar1,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,0,7,uVar1,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,0,0xe,uVar1,*(code **)(g_phyFuns + 0x1b4));
    UNRECOVERED_JUMPTABLE = *(code **)(g_phyFuns + 0x1b4);
  }
                    /* WARNING: Could not recover jumptable at 0x00012c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0x67,0,0xf,uVar1);
  return;
}

