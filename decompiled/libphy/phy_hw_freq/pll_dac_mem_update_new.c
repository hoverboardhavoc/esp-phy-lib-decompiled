/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
 * Source: libphy -> phy_hw_freq.o -> pll_dac_mem_update_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pll_dac_mem_update_new(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = get_freq_mem_param(2);
  cVar1 = '\0';
  do {
    uVar2 = get_freq_mem_addr(uVar3 >> 0x10 & 0xff,uVar3 >> 8 & 0xff,cVar1,1);
    cVar1 = cVar1 + '\x01';
    freq_i2c_mem_write_new(uVar2,param_1,1);
  } while (cVar1 != 'U');
  iVar4 = chan_to_freq(_phy_param);
  _DAT_600a00c0 = (iVar4 - 0x60U & 0x7f) << 7 | _DAT_600a00c0 & 0xffffc00f;
  return;
}

