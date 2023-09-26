/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> set_dump_pbus
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_dump_pbus(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  if (param_1 == 0) {
    (**(code **)(_g_phyFuns + 0x74))(1,dump_pbus1);
    (**(code **)(_g_phyFuns + 0x74))(1,1,DAT_00014d32,*(code **)(_g_phyFuns + 0x74));
    (**(code **)(_g_phyFuns + 0x74))(1,2,DAT_00014d34,*(code **)(_g_phyFuns + 0x74));
    (**(code **)(_g_phyFuns + 0x74))(4,1,DAT_00014d36,*(code **)(_g_phyFuns + 0x74));
    uVar2 = 1;
    UNRECOVERED_JUMPTABLE = *(code **)(_g_phyFuns + 0x74);
    uVar1 = 5;
    uVar3 = DAT_00014d38;
  }
  else {
    (**(code **)(_g_phyFuns + 0x74))(0,1,0x100);
    (**(code **)(_g_phyFuns + 0x74))(1,1,0x7c,*(code **)(_g_phyFuns + 0x74));
    (**(code **)(_g_phyFuns + 0x74))(1,2,0,*(code **)(_g_phyFuns + 0x74));
    (**(code **)(_g_phyFuns + 0x74))(4,1,0x7e,*(code **)(_g_phyFuns + 0x74));
    (**(code **)(_g_phyFuns + 0x74))(5,1,0xf,*(code **)(_g_phyFuns + 0x74));
    uVar2 = 2;
    UNRECOVERED_JUMPTABLE = *(code **)(_g_phyFuns + 0x74);
    uVar1 = 4;
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00011b5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,uVar2,uVar3);
  return;
}

