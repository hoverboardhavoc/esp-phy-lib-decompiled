/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> rf_test.o -> wifiscwout
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wifiscwout(int *param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = param_1[2] & 3;
  uVar4 = 0x19;
  if (uVar5 != 1) {
    uVar4 = 0x32;
    if (uVar5 != 2) {
      uVar4 = 0x4b;
      if (uVar5 != 3) {
        uVar4 = 0;
      }
    }
  }
  if (*param_1 != 0) {
    if (short_log_en == '\0') {
      pcVar1 = 
      " wifi single carrier tx out, single carrier is in %d channel, power is about (20-%d.%d)dBm\n"
      ;
    }
    else {
      pcVar1 = "wifi single carrier tx start: chan=%d, pwr=20-%d.%d\n";
    }
    phy_printf(pcVar1,param_1[1],param_1[2] >> 2);
    rftest_set_chan((short)param_1[1],0);
    (**(code **)(_g_phyFuns + 0x94))(*(code **)(_g_phyFuns + 0x94));
    iVar2 = (**(code **)(_g_phyFuns + 8))(&phy_param,(short)param_1[1],*(code **)(_g_phyFuns + 8));
    uVar5 = (iVar2 + param_1[2] + 0xc) * 0x1000000 >> 0x18;
    uVar3 = uVar5 & 0xff;
    if ((int)uVar5 < 0) {
      uVar3 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_g_phyFuns + 0x98))(1,0,uVar3,0,0,0);
    return;
  }
  phy_printf(" wifi single carrier tx stop\n",uVar4);
  (**(code **)(_g_phyFuns + 0x98))(0,0,0,0,0,0,*(code **)(_g_phyFuns + 0x98));
  txcal_work_mode();
  return;
}

