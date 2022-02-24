/*
 * Last changed at upstream commit 449b432d94b968a75ffabffae91fe15796de7644
 * https://github.com/espressif/esp-phy-lib/commit/449b432d94b968a75ffabffae91fe15796de7644
 * Upstream date: 2022-02-24 11:32:38 +0800
 * Upstream subject: Update phy lib: S3_20220128_fbd66bc :  for high/low temperature performance C3_20220119_908_049c04c : for high/low temperature performance
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
  
  DAT_0001443b = (undefined1)param_1;
  DAT_0001443c = (undefined1)param_2;
  if (param_1 == 0) {
    _DAT_6002600c = _DAT_6002600c & 0xffffffe3;
    _DAT_6001c030 = _DAT_6001c030 | 0x20;
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,4,DAT_000144b3);
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,5,DAT_000144b3,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0xc,DAT_000144b3,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0xd,DAT_000144b3,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,6,DAT_000144b4,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,7,DAT_000144b4,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0xe,DAT_000144b4,*(code **)(g_phyFuns + 0x1b4));
    uVar1 = (uint)DAT_000144b4;
    UNRECOVERED_JUMPTABLE = *(code **)(g_phyFuns + 0x1b4);
  }
  else {
    if (param_2 == 0) {
      iVar2 = 4;
      uVar1 = 100;
    }
    else {
      iVar2 = 5;
      uVar1 = 0x32;
    }
    _DAT_6002600c = _DAT_6002600c & 0xffffffe3 | iVar2 << 2;
    _DAT_6001c030 = _DAT_6001c030 & 0xffffffdf;
    uVar1 = ((DAT_000144b2 + 0x38) * 0x67) / uVar1 - 8;
    if (0x3f < (int)uVar1) {
      uVar1 = 0x3f;
    }
    uVar1 = uVar1 & 0xff;
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,4,uVar1);
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,5,uVar1,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0xc,uVar1,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0xd,uVar1,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,6,uVar1,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,7,uVar1,*(code **)(g_phyFuns + 0x1b4));
    (**(code **)(g_phyFuns + 0x1b4))(0x67,1,0xe,uVar1,*(code **)(g_phyFuns + 0x1b4));
    UNRECOVERED_JUMPTABLE = *(code **)(g_phyFuns + 0x1b4);
  }
                    /* WARNING: Could not recover jumptable at 0x0001308c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0x67,1,0xf,uVar1);
  return;
}

