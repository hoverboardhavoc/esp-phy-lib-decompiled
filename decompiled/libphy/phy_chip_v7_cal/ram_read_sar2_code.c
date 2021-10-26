/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
 * Source: libphy -> phy_chip_v7_cal.o -> ram_read_sar2_code
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 ram_read_sar2_code(void)

{
  undefined1 auStack_20 [2];
  undefined2 uStack_1e;
  
  (**(code **)(_g_phyFuns + 0x144))(*(code **)(_g_phyFuns + 0x144));
  (**(code **)(_g_phyFuns + 0x148))(auStack_20,*(code **)(_g_phyFuns + 0x148));
  return uStack_1e;
}

