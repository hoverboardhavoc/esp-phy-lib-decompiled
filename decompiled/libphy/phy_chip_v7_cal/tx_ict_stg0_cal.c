/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
 * Source: libphy -> phy_chip_v7_cal.o -> tx_ict_stg0_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_ict_stg0_cal(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char cStack_11;
  
  cStack_11 = '8' - power_cal_offset;
  set_channel_rfpll_freq(1,DAT_000130fb,0);
  (**(code **)(_g_phyFuns + 0x114))(&phy_param,1,*(code **)(_g_phyFuns + 0x114));
  rfcal_pwrctrl(0x80,&cStack_11,1,0x28,&phy_param,0xfc,(int)DAT_000130e0,0);
  iVar2 = (int)DAT_0001317a;
  if (iVar2 < 1) {
    uVar3 = (iVar2 / 6 + -1) * -2 + 8;
    bVar1 = (byte)uVar3;
    if (0xe < (uVar3 & 0xff)) {
      bVar1 = 0xe;
    }
  }
  else {
    uVar3 = (iVar2 / 6) * -2 + 8;
    bVar1 = (byte)uVar3;
    if ((uVar3 & 0xff) < 6) {
      bVar1 = 6;
    }
  }
  DAT_000130c7 = bVar1 | DAT_000130c7 & 0xf0;
  (**(code **)(_g_phyFuns + 0x1b4))(0x6b,0,3,*(code **)(_g_phyFuns + 0x1b4));
  return;
}

