/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librfate -> ate_test.o -> rfrx_dcap_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint rfrx_dcap_cal(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  pbus_debugmode();
  uVar1 = 0;
  uVar4 = 0;
  (**(code **)(_g_phyFuns + 0x84))(0,*(code **)(_g_phyFuns + 0x84));
  iVar5 = 0;
  (**(code **)(_g_phyFuns + 0xc))(1,*(code **)(_g_phyFuns + 0xc));
  uVar2 = (**(code **)(_g_phyFuns + 0x5c))(100,1,4,3,0,*(code **)(_g_phyFuns + 0x5c));
  uVar3 = test_rx_gain_cal();
  do {
    (**(code **)(_g_phyFuns + 0x60))(100,1,4,3,0,uVar1 & 0xff,*(code **)(_g_phyFuns + 0x60));
    (**(code **)(_g_phyFuns + 0x98))(1,0x80,uVar3,0,0,0,*(code **)(_g_phyFuns + 0x98));
    ets_delay_us(1);
    (**(code **)(_g_phyFuns + 0xa0))(1,0xfff,*(code **)(_g_phyFuns + 0xa0));
    if (iVar5 < _DAT_600a0490 >> 9) {
      uVar4 = uVar1 & 0xff;
      iVar5 = _DAT_600a0490 >> 9;
    }
    (**(code **)(_g_phyFuns + 0xa4))(*(code **)(_g_phyFuns + 0xa4));
    (**(code **)(_g_phyFuns + 0x9c))(0,*(code **)(_g_phyFuns + 0x9c));
  } while (((int)(uVar1 - uVar4) < 3) && (uVar1 = uVar1 + 1, uVar1 != 8));
  (**(code **)(_g_phyFuns + 0x60))(100,1,4,3,0,uVar2,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0xc))(0,*(code **)(_g_phyFuns + 0xc));
  (**(code **)(_g_phyFuns + 0x84))(0,*(code **)(_g_phyFuns + 0x84));
  pbus_workmode();
  return uVar4;
}

