/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_tsens_read_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_tsens_read_init(void)

{
  uint uVar1;
  
  uVar1 = (**(code **)(_g_phyFuns + 0x20c))(*(code **)(_g_phyFuns + 0x20c));
  _DAT_60040058 = _DAT_60040058 & 0xffc01fff | 0xc000;
  _DAT_6004005c = _DAT_6004005c & 0xffff8000 | 5;
  (**(code **)(_g_phyFuns + 0x1bc))(0x69,0,6,3,0,uVar1 & 0xf,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x69,0,6,5,4,2,*(code **)(_g_phyFuns + 0x1bc));
  _DAT_600c0014 = _DAT_600c0014 | 0x400;
  _DAT_600c001c = _DAT_600c001c & 0xfffffbff;
  _DAT_6004005c = _DAT_6004005c | 0x8000;
  _DAT_60040058 = _DAT_60040058 | 0x400000;
  return;
}

