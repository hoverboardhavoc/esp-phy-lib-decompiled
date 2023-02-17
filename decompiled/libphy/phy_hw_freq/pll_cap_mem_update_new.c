/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
 * Source: libphy -> phy_hw_freq.o -> pll_cap_mem_update_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pll_cap_mem_update_new(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  
  uVar1 = get_freq_mem_param(2);
  uVar6 = 0;
  do {
    uVar2 = get_freq_mem_addr(uVar1 >> 0x10 & 0xff,uVar1 >> 8 & 0xff,uVar6 & 0xff,0);
    uVar3 = read_rf_freq_mem_new(2);
    uVar5 = (uVar3 >> 4 & 0x100 | uVar3 & 0xff) + param_1;
    uVar6 = uVar6 + 1;
    freq_i2c_mem_write_new(uVar2,uVar5 & 0xff | uVar3 & 0xef00 | ((int)(short)uVar5 >> 8) << 0xc,3);
  } while (uVar6 != 0x55);
  iVar4 = chan_to_freq(_phy_param);
  _DAT_600a00c0 = ((iVar4 + -0x960) * 0x10000 >> 0x10 & 0x7fU) << 7 | _DAT_600a00c0 & 0xffffc00f;
  return;
}

