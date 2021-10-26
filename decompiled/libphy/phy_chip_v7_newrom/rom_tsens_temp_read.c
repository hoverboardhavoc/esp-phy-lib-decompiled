/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_tsens_temp_read
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 rom_tsens_temp_read(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (_DAT_60040058 << 9 < 0) {
    uVar1 = (**(code **)(_g_phyFuns + 0x208))(*(code **)(_g_phyFuns + 0x208));
  }
  else {
    uVar1 = (uint)DAT_0001209e;
  }
  uVar2 = (**(code **)(_g_phyFuns + 0x210))(DAT_000120b6,*(code **)(_g_phyFuns + 0x210));
  uVar2 = (**(code **)(_g_phyFuns + 0x218))(uVar1,uVar2,*(code **)(_g_phyFuns + 0x218));
  (**(code **)(_g_phyFuns + 0x214))(&phy_param,*(code **)(_g_phyFuns + 0x214));
  _DAT_0001209e = (short)uVar2;
  return uVar2;
}

