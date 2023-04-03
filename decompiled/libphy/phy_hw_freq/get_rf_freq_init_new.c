/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_hw_freq.o -> get_rf_freq_init_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_rf_freq_init_new(uint param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bStack_54;
  ushort uStack_53;
  uint uStack_4c;
  uint uStack_48;
  
  write_pll_cap(200);
  set_rfpll_freq(DAT_0001103d,0x960,param_2,&bStack_54);
  iVar2 = read_pll_cap();
  iVar3 = i2c_readReg_Mask(0x62,1,6,3,0);
  set_rfpll_freq(DAT_0001103d,0x9a0,param_2,&bStack_54);
  sVar1 = read_pll_cap();
  iVar4 = i2c_readReg_Mask(0x62,1,6,3,0);
  uVar7 = 0;
  uVar9 = 0;
  for (uVar8 = 0; uVar8 < param_1; uVar8 = uVar8 + 1) {
    rfpll_set_freq(uVar8 + 0x960,DAT_0001103d,param_2,&bStack_54);
    iVar5 = 0x20;
    if ((0x1d < uVar8) && (iVar5 = 0x1e, uVar8 < 0x33)) {
      iVar5 = 0x1f;
    }
    uVar6 = (uVar9 >> 6) + iVar2;
    uStack_4c = (((uVar7 >> 6) + iVar3 | ((int)(short)uVar6 >> 8) << 4 | 0xffffff80) & 0xff) << 8 |
                uVar6 & 0xff | (uint)bStack_54 << 0x10;
    uStack_48 = (uint)uStack_53 | iVar5 << 0x10;
    wr_rf_freq_mem_new(uVar8 & 0xff,&uStack_4c);
    uVar9 = uVar9 + ((int)sVar1 - (int)(short)iVar2);
    uVar7 = uVar7 + (iVar4 - iVar3);
  }
  return;
}

