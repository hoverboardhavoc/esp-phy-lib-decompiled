/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_hw_freq.o -> get_rf_freq_init_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_rf_freq_init_new(uint param_1,undefined4 param_2)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  byte bStack_54;
  ushort uStack_53;
  uint uStack_4c;
  uint uStack_48;
  
  if ((_DAT_00011034 & 0x20) == 0) {
    write_pll_cap(200);
    set_rfpll_freq(DAT_0001102f,0x960,param_2,&bStack_54);
    iVar3 = read_pll_cap();
    iVar4 = i2c_readReg_Mask(0x62,1,6,3,0);
    set_rfpll_freq(DAT_0001102f,0x9a0,param_2,&bStack_54);
    sVar2 = read_pll_cap();
    iVar5 = i2c_readReg_Mask(0x62,1,6,3,0);
    iVar10 = 0;
    iVar9 = 0;
    uVar11 = 0;
    while( true ) {
      uVar1 = uVar11 & 0xff;
      if (uVar11 == param_1) break;
      rfpll_set_freq(uVar11 + 0x960,DAT_0001102f,param_2,&bStack_54);
      iVar6 = 0x1f;
      if ((0x1d < uVar11) && (iVar6 = 0x1d, uVar1 < 0x33)) {
        iVar6 = 0x1e;
      }
      iVar7 = iVar9 / 0x40;
      uVar11 = uVar11 + 1;
      iVar9 = iVar9 + ((int)sVar2 - (int)(short)iVar3);
      uVar8 = iVar7 + iVar3;
      uStack_4c = ((iVar10 / 0x40 + iVar4 | ((int)(short)uVar8 >> 8) << 4 | 0xffffff80U) & 0xff) <<
                  8 | uVar8 & 0xff | (uint)bStack_54 << 0x10;
      uStack_48 = (uint)uStack_53 | iVar6 << 0x10;
      wr_rf_freq_mem_new(uVar1,&uStack_4c);
      iVar10 = iVar10 + (iVar5 - iVar4);
    }
    _DAT_00011034 = _DAT_00011034 | 0x20;
  }
  return;
}

