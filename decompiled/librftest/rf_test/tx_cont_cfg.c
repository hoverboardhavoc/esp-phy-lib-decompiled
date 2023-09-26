/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
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
  undefined4 uVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar4;
  
  UNRECOVERED_JUMPTABLE = *(code **)(_g_phyFuns + 0x58);
  uVar3 = (uint)DAT_000120f5;
  if (param_1 == 1) {
    uVar4 = (int)((DAT_000120f6 + 7) * 0x1000000) >> 0x18;
    uVar3 = (int)((uVar3 + 10) * 0x1000000) >> 0x18;
    uVar1 = uVar4 & 0xff;
    if (0x3f < (int)uVar4) {
      uVar1 = 0x3f;
    }
    (*UNRECOVERED_JUMPTABLE)(0x67,1,0xe,uVar1);
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0xf,uVar1,*(code **)(_g_phyFuns + 0x58));
    if (0x3f < (int)uVar3) {
      uVar3 = 0x3f;
    }
  }
  else {
    if (param_1 != 2) {
      (*UNRECOVERED_JUMPTABLE)(0x67,1,0xc);
      (**(code **)(_g_phyFuns + 0x58))(0x67,1,0xd,DAT_000120f5,*(code **)(_g_phyFuns + 0x58));
      (**(code **)(_g_phyFuns + 0x58))(0x67,1,0xe,DAT_000120f6,*(code **)(_g_phyFuns + 0x58));
      uVar3 = (uint)DAT_000120f6;
      uVar2 = 0xf;
      UNRECOVERED_JUMPTABLE = *(code **)(_g_phyFuns + 0x58);
      goto _L10;
    }
    (*UNRECOVERED_JUMPTABLE)(0x67,1,0xe,DAT_000120f6);
    uVar3 = (int)((uVar3 - 10) * 0x1000000) >> 0x18;
    (**(code **)(_g_phyFuns + 0x58))(0x67,1,0xf,DAT_000120f6,*(code **)(_g_phyFuns + 0x58));
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
  }
  uVar3 = uVar3 & 0xff;
  (**(code **)(_g_phyFuns + 0x58))(0x67,1,0xc,uVar3,*(code **)(_g_phyFuns + 0x58));
  uVar2 = 0xd;
  UNRECOVERED_JUMPTABLE = *(code **)(_g_phyFuns + 0x58);
_L10:
                    /* WARNING: Could not recover jumptable at 0x000100c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0x67,1,uVar2,uVar3);
  return;
}

