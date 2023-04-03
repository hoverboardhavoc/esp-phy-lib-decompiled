/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_debug.o -> rfpll_cap_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rfpll_cap_check(int param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined2 *puVar7;
  undefined1 local_4c [16];
  undefined2 local_3c [14];
  
  puVar1 = local_3c;
  uVar2 = 1;
  puVar6 = local_4c;
  puVar7 = puVar1;
  do {
    chip_v7_set_chan(uVar2 & 0xffff,0);
    uVar5 = read_pll_cap();
    *puVar7 = uVar5;
    uVar4 = i2c_readReg(0x62,1,6);
    *puVar6 = uVar4;
    uVar2 = uVar2 + 1;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar2 != 0xf);
  if (param_1 != 0) {
    phy_printf("ir_cap_ext:");
    do {
      uVar5 = *puVar1;
      puVar1 = puVar1 + 1;
      phy_printf(&_LC25,uVar5);
    } while (puVar1 != (undefined2 *)&stack0xffffffe0);
    phy_printf(&_LC26);
    phy_printf("ir_dac_ext:");
    iVar3 = 0;
    do {
      puVar6 = local_4c + iVar3;
      iVar3 = iVar3 + 1;
      phy_printf(&_LC25,*puVar6);
    } while (iVar3 != 0xe);
    phy_printf(&_LC26);
    return;
  }
  return;
}

