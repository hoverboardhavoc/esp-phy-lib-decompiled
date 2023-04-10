/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_i2c.o -> phy_i2c_init2
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_i2c_init2(void)

{
  uint uVar1;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined1 uStack_52;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  undefined1 uStack_46;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined1 uStack_3a;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 uStack_18;
  
  (**(code **)(_g_phyFuns + 0x34))(*(code **)(_g_phyFuns + 0x34));
  uStack_58 = 0x6b6b6b6b;
  uStack_54 = 0x6b6b;
  uStack_52 = 0x6b;
  uStack_4c = 0x5040302;
  uStack_48 = 0x706;
  uStack_46 = 8;
  uStack_40 = 0x2f44c72;
  uStack_3c = 0xb988;
  uStack_3a = 0x81;
  uStack_1c = 0x2868;
  uStack_1a = phy_param;
  uStack_19 = 0x44;
  uStack_34 = 0x62626262;
  uStack_30 = 0x67;
  uStack_28 = 0xb0f0400;
  uStack_24 = 2;
  uStack_18 = 0x26;
  uVar1 = (**(code **)(_g_phyFuns + 0x40))(0x6b,*(code **)(_g_phyFuns + 0x40));
  _DAT_600af820 = uVar1 & 0x1fff0 | _DAT_600af820 & 0xfffe000f;
  i2c_paral_write_num(&uStack_58,&uStack_4c,&uStack_40,&uStack_34,&uStack_28,&uStack_1c,10,0);
  _DAT_600af820 = _DAT_600af820 & 0xfffe000f | 0x1f00;
  (**(code **)(_g_phyFuns + 0x38))(*(code **)(_g_phyFuns + 0x38));
  return;
}

