/*
 * Last changed at upstream commit a7a0481e34fd4368aa15a143dfbd855015380fd4
 * https://github.com/espressif/esp-phy-lib/commit/a7a0481e34fd4368aa15a143dfbd855015380fd4
 * Upstream date: 2023-09-25 15:20:47 +0800
 * Upstream subject: phy_param_track_tot and phy_wifi_enable_set for all chips
 * Source: librftest -> rf_test.o -> tx_cont_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_cont_cfg(int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  
  pcVar4 = *(code **)(_g_phyFuns + 0x1b4);
  uVar3 = (uint)DAT_00012174;
  if (param_1 == 1) {
    if (DAT_00012328 < 6) {
      iVar5 = (DAT_00012176 + 3) * 0x1000000;
    }
    else {
      iVar5 = uVar3 << 0x18;
    }
    uVar3 = iVar5 >> 0x18;
    if (0x3f < (int)uVar3) {
      uVar3 = 0x3f;
    }
    bVar2 = DAT_00012174;
    if (DAT_00012328 < 6) {
      bVar2 = DAT_00012174 + 9;
    }
    (*pcVar4)(0x67,1,0xe,uVar3 & 0xff);
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xf,uVar3 & 0xff,*(code **)(_g_phyFuns + 0x1b4));
    uVar3 = (uint)(char)bVar2;
    if (0x3f < (int)uVar3) {
      uVar3 = 0x3f;
    }
    uVar3 = uVar3 & 0xff;
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xc,uVar3,*(code **)(_g_phyFuns + 0x1b4));
    uVar1 = 0xd;
    pcVar4 = *(code **)(_g_phyFuns + 0x1b4);
  }
  else {
    if (param_1 == 2) {
      (*pcVar4)(0x67,1,0xe,DAT_00012176);
      uVar3 = (int)((uVar3 - 10) * 0x1000000) >> 0x18;
      (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xf,DAT_00012176,*(code **)(_g_phyFuns + 0x1b4));
      if ((int)uVar3 < 0) {
        uVar3 = 0;
      }
      (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xc,uVar3 & 0xff,*(code **)(_g_phyFuns + 0x1b4));
                    /* WARNING: Could not recover jumptable at 0x000101e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xd,uVar3 & 0xff);
      return;
    }
    (*pcVar4)(0x67,1,0xc);
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xd,DAT_00012174,*(code **)(_g_phyFuns + 0x1b4));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xe,DAT_00012176,*(code **)(_g_phyFuns + 0x1b4));
    uVar3 = (uint)DAT_00012176;
    uVar1 = 0xf;
    pcVar4 = *(code **)(_g_phyFuns + 0x1b4);
  }
  (*pcVar4)(0x67,1,uVar1,uVar3,pcVar4);
  _DAT_600061d8 = _DAT_600061d8 & 0xfffffc00 | 0x13c;
  _DAT_600061dc = _DAT_600061dc & 0xfff003ff | 0x4f000;
  return;
}

