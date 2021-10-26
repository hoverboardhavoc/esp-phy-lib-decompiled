/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
 * Source: libphy -> phy_chip_v7_ana.o -> phy_i2c_init2
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_i2c_init2(void)

{
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x24,0x50,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x28,0x50,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x25,0x10,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x29,0x10,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x34,0x11,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x35,0x11,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x36,0,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x37,0,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,4,DAT_00012173,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,5,DAT_00012173,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xc,DAT_00012173,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xd,DAT_00012173,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,6,DAT_00012174,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,7,DAT_00012174,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xe,DAT_00012174,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0xf,DAT_00012174,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x14,DAT_00012177,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x15,DAT_00012177,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1c,DAT_00012179,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1d,DAT_00012179,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x16,DAT_00012178,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x17,DAT_00012178,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1e,DAT_0001217a,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x1f,DAT_0001217a,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x67,1,0x38,0xff,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1bc))(0x67,1,2,3,2,1,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1b4))(0x62,1,0,0xb0,*(code **)(_g_phyFuns + 0x1b4));
  (**(code **)(_g_phyFuns + 0x1b4))(0x62,1,0xb,0x68,*(code **)(_g_phyFuns + 0x1b4));
                    /* WARNING: Could not recover jumptable at 0x00010644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1b4))(0x62,1,2,0x88);
  return;
}

