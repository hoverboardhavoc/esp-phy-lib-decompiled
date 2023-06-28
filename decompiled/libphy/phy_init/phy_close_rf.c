/*
 * Last changed at upstream commit 97a141a563a4b752f5943d0049aa691038d08613
 * https://github.com/espressif/esp-phy-lib/commit/97a141a563a4b752f5943d0049aa691038d08613
 * Upstream date: 2023-06-28 11:18:04 +0800
 * Upstream subject: h2: optimize track pll when temperature changes. fix ramp up and ramp down timing.
 * Source: libphy -> phy_init.o -> phy_close_rf
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_close_rf(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (DAT_000105ee != '\0') {
    uVar2 = get_freq_mem_param(2);
    uVar1 = uVar2 >> 8 & 0xff;
    uVar2 = uVar2 >> 0x10 & 0xff;
    uVar3 = get_freq_mem_addr(uVar2,uVar1,0,0);
    uVar4 = get_freq_mem_addr(uVar2,uVar1,0x40,0);
    uVar5 = enter_critical_phy();
    phy_dis_hw_set_freq();
    DAT_00010646 = read_rf_freq_mem_new(uVar3,2);
    DAT_00010648 = read_rf_freq_mem_new(uVar4,2);
    phy_xpd_rf();
    phy_xpd_tsens();
    phy_bbpll_cal(1);
    DAT_000105f7 = 1;
    exit_critical_phy(uVar5);
    return;
  }
  return;
}

