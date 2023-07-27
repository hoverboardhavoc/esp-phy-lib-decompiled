/*
 * Last changed at upstream commit 7bdaf7da843d762451b59947318cd2c6cf733855
 * https://github.com/espressif/esp-phy-lib/commit/7bdaf7da843d762451b59947318cd2c6cf733855
 * Upstream date: 2023-07-27 11:33:55 +0800
 * Upstream subject: fix c3 ble tx bug
 * Source: librftest -> rf_test.o -> tx_cont_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_cont_cfg(int param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  
  pcVar2 = *(code **)(_g_phyFuns + 0x1b4);
  if (param_1 == 1) {
    if (chip_eco_ver < 6) {
      uVar3 = (int)((DAT_00012176 + 3) * 0x1000000) >> 0x18;
    }
    else {
      uVar3 = (uint)(char)DAT_00012174;
    }
    if (0x3f < (int)uVar3) {
      uVar3 = 0x3f;
    }
    if (chip_eco_ver < 6) {
      uVar1 = (int)((DAT_00012174 + 9) * 0x1000000) >> 0x18;
    }
    else {
      uVar1 = (uint)(char)DAT_00012173;
    }
    (*pcVar2)(0x67,1,0xe,uVar3 & 0xff);
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xf,uVar3 & 0xff,*(code **)(_g_phyFuns + 0x1b4));
    if (0x3f < (int)uVar1) {
      uVar1 = 0x3f;
    }
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xc,uVar1 & 0xff,*(code **)(_g_phyFuns + 0x1b4));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xd,uVar1 & 0xff,*(code **)(_g_phyFuns + 0x1b4));
    uVar3 = 200;
  }
  else {
    uVar3 = (uint)DAT_00012173;
    if (param_1 == 2) {
      (*pcVar2)(0x67,1,0xe,DAT_00012174);
      uVar1 = (int)((uVar3 - 10) * 0x1000000) >> 0x18;
      (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xf,DAT_00012174,*(code **)(_g_phyFuns + 0x1b4));
      uVar3 = uVar1 & 0xff;
      if ((int)uVar1 < 0) {
        uVar3 = 0;
      }
      (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xc,uVar3,*(code **)(_g_phyFuns + 0x1b4));
                    /* WARNING: Could not recover jumptable at 0x000101ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xd,uVar3);
      return;
    }
    (*pcVar2)(0x67,1,0xc);
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xd,DAT_00012173,*(code **)(_g_phyFuns + 0x1b4));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xe,DAT_00012174,*(code **)(_g_phyFuns + 0x1b4));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xf,DAT_00012174,*(code **)(_g_phyFuns + 0x1b4));
    uVar3 = 0x13c;
  }
  _DAT_600061d8 = _DAT_600061d8 & 0xfffffc00 | uVar3;
  _DAT_600061dc = uVar3 << 10 | _DAT_600061dc & 0xfff003ff;
  return;
}

