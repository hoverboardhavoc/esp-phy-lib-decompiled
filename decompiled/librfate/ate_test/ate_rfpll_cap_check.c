/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: librfate -> ate_test.o -> ate_rfpll_cap_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ate_rfpll_cap_check(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [28];
  
  uVar1 = 0;
  do {
    uVar3 = uVar1 + 1;
    phy_chip_set_chan(uVar3 & 0xffff,0);
    uVar5 = phy_read_pll_cap();
    local_60[uVar1] = (char)(uVar5 >> 1);
    uVar4 = phy_i2c_readReg(0x62,1,5);
    local_50[uVar1] = uVar4;
    uVar4 = phy_i2c_readReg_Mask(0x62,1,2,5,0);
    local_40[uVar1] = uVar4;
    uVar4 = phy_i2c_readReg(0x62,1,6);
    local_30[uVar1] = uVar4;
    uVar1 = uVar3;
  } while (uVar3 != 0xe);
  if (param_1 != 0) {
    phy_printf("ir_cap_ext:");
    iVar2 = 0;
    do {
      puVar6 = local_60 + iVar2;
      iVar2 = iVar2 + 1;
      phy_printf(&_LC11,*puVar6);
    } while (iVar2 != 0xe);
    phy_printf(&_LC9);
    phy_printf("oc_pll_cap:");
    iVar2 = 0;
    do {
      puVar6 = local_50 + iVar2;
      iVar2 = iVar2 + 1;
      phy_printf(&_LC11,*puVar6);
    } while (iVar2 != 0xe);
    phy_printf(&_LC9);
    phy_printf("ir_dac_ext:");
    iVar2 = 0;
    do {
      puVar6 = local_40 + iVar2;
      iVar2 = iVar2 + 1;
      phy_printf(&_LC11,*puVar6);
    } while (iVar2 != 0xe);
    phy_printf(&_LC9);
    phy_printf("or_pll_dac:");
    iVar2 = 0;
    do {
      puVar6 = local_30 + iVar2;
      iVar2 = iVar2 + 1;
      phy_printf(&_LC11,*puVar6);
    } while (iVar2 != 0xe);
    phy_printf(&_LC9);
    return;
  }
  return;
}

