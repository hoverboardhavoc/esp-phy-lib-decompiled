/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> correct_rfpll_offset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void correct_rfpll_offset(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    sVar5 = (short)(param_1 * 9 >> 2);
  }
  else {
    sVar5 = (short)(param_1 * 0x1b >> 3);
  }
  iVar4 = (int)rfpll_offset_delta;
  sVar1 = rfpll_offset_delta;
  if (iVar4 != sVar5) {
    uVar7 = 0xe;
    if (phy_freq_wifi_only == '\0') {
      uVar7 = 0x55;
    }
    uVar6 = 0;
    do {
      if (phy_freq_wifi_only == '\0') {
        uVar2 = uVar6 + 0x960;
_L195:
        uVar2 = uVar2 & 0xffff;
      }
      else {
        uVar2 = 0x9b4;
        if (uVar6 < 0xd) {
          uVar2 = uVar6 * 5 + 0x96c;
          goto _L195;
        }
      }
      uVar3 = fpga_mem_rd(0x6000e0c4);
      uVar6 = uVar6 + 1;
      fpga_mem_wr(0x6000e0c4,uVar3 & 0xffffff00 | (uVar2 - 0x60) * 3 + 1 & 0xff);
      uVar2 = fpga_mem_rd(0x6000e0c0);
      fpga_mem_wr(0x6000e148,(uVar2 & 0xffffff) + (sVar5 - iVar4) | uVar2 & 0xff000000);
      uVar2 = fpga_mem_rd(0x6000e0c4);
      fpga_mem_wr(0x6000e0c4,uVar2 | 0x200);
      uVar2 = fpga_mem_rd(0x6000e0c4);
      fpga_mem_wr(0x6000e0c4,uVar2 & 0xfffffdff);
      sVar1 = sVar5;
    } while ((uVar6 & 0xff) < uVar7);
  }
  rfpll_offset_delta = sVar1;
  return;
}

