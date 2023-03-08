/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  
  pcVar3 = *(code **)(_g_phyFuns + 0x1b4);
  uVar2 = (uint)DAT_00012173;
  if (param_1 == 1) {
    uVar4 = (int)((DAT_00012174 + 8) * 0x1000000) >> 0x18;
    uVar2 = (int)((uVar2 + 0xc) * 0x1000000) >> 0x18;
    uVar1 = uVar4 & 0xff;
    if (0x3f < (int)uVar4) {
      uVar1 = 0x3f;
    }
    (*pcVar3)(0x67,1,0xe,uVar1);
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xf,uVar1,*(code **)(_g_phyFuns + 0x1b4));
    if (0x3f < (int)uVar2) {
      uVar2 = 0x3f;
    }
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xc,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x1b4));
    (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xd,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x1b4));
    uVar2 = 0xec;
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
                    /* WARNING: Could not recover jumptable at 0x000101c6. Too many branches */
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

