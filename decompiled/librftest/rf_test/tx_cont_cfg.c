/*
 * Last changed at upstream commit a83c216dd2de6418cb26ee42d80433b0badd4aea
 * https://github.com/espressif/esp-phy-lib/commit/a83c216dd2de6418cb26ee42d80433b0badd4aea
 * Upstream date: 2023-05-10 18:09:34 +0800
 * Upstream subject: esp32c3: update libphy for ble 1M/2M switch
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
    uVar4 = (int)((DAT_00012174 + 3) * 0x1000000) >> 0x18;
    uVar2 = (int)((uVar2 + 9) * 0x1000000) >> 0x18;
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

