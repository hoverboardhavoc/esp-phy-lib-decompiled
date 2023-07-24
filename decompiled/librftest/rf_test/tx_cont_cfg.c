/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
 * Source: librftest -> rf_test.o -> tx_cont_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_cont_cfg(int param_1)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  
  pcVar3 = *(code **)(_g_phyFuns + 0x1b4);
  uVar2 = (uint)DAT_00012173;
  if (param_1 == 1) {
    cVar4 = DAT_00012174;
    if (chip_eco_ver < 6) {
      cVar4 = DAT_00012174 + '\x03';
    }
    uVar2 = (uint)cVar4;
    if (0x3f < (int)uVar2) {
      uVar2 = 0x3f;
    }
    bVar1 = DAT_00012173;
    if (chip_eco_ver < 6) {
      bVar1 = DAT_00012173 + 9;
    }
    (*pcVar3)(0x67,1,0xe,uVar2 & 0xff);
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xf,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x1b4));
    uVar2 = (uint)(char)bVar1;
    if (0x3f < (int)uVar2) {
      uVar2 = 0x3f;
    }
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xc,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x1b4));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xd,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x1b4));
    uVar2 = 200;
  }
  else {
    if (param_1 == 2) {
      (*pcVar3)(0x67,1,0xe,DAT_00012174);
      uVar2 = (int)((uVar2 - 10) * 0x1000000) >> 0x18;
      (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xf,DAT_00012174,*(code **)(_g_phyFuns + 0x1b4));
      if ((int)uVar2 < 0) {
        uVar2 = 0;
      }
      (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xc,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x1b4));
                    /* WARNING: Could not recover jumptable at 0x000101e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xd,uVar2 & 0xff);
      return;
    }
    (*pcVar3)(0x67,1,0xc);
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xd,DAT_00012173,*(code **)(_g_phyFuns + 0x1b4));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xe,DAT_00012174,*(code **)(_g_phyFuns + 0x1b4));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xf,DAT_00012174,*(code **)(_g_phyFuns + 0x1b4));
    uVar2 = 0x13c;
  }
  _DAT_600061d8 = _DAT_600061d8 & 0xfffffc00 | uVar2;
  _DAT_600061dc = uVar2 << 10 | _DAT_600061dc & 0xfff003ff;
  return;
}

