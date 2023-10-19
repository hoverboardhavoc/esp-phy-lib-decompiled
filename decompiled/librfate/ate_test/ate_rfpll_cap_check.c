/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
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
    chip_v7_set_chan(uVar3 & 0xffff,0);
    uVar5 = read_pll_cap();
    local_60[uVar1] = (char)(uVar5 >> 1);
    uVar4 = i2c_readReg(0x62,1,5);
    local_50[uVar1] = uVar4;
    uVar4 = i2c_readReg_Mask(0x62,1,2,3,0);
    local_40[uVar1] = uVar4;
    uVar4 = i2c_readReg(0x62,1,6);
    local_30[uVar1] = uVar4;
    uVar1 = uVar3;
  } while (uVar3 != 0xe);
  if (param_1 != 0) {
    phy_printf("ir_cap_ext:");
    iVar2 = 0;
    do {
      puVar6 = local_60 + iVar2;
      iVar2 = iVar2 + 1;
      phy_printf(&_LC13,*puVar6);
    } while (iVar2 != 0xe);
    phy_printf(&_LC11);
    phy_printf("or_pll_cap:");
    iVar2 = 0;
    do {
      puVar6 = local_50 + iVar2;
      iVar2 = iVar2 + 1;
      phy_printf(&_LC13,*puVar6);
    } while (iVar2 != 0xe);
    phy_printf(&_LC11);
    phy_printf("ir_dac_ext:");
    iVar2 = 0;
    do {
      puVar6 = local_40 + iVar2;
      iVar2 = iVar2 + 1;
      phy_printf(&_LC13,*puVar6);
    } while (iVar2 != 0xe);
    phy_printf(&_LC11);
    phy_printf("or_pll_dac:");
    iVar2 = 0;
    do {
      puVar6 = local_30 + iVar2;
      iVar2 = iVar2 + 1;
      phy_printf(&_LC13,*puVar6);
    } while (iVar2 != 0xe);
    phy_printf(&_LC11);
    return;
  }
  return;
}

