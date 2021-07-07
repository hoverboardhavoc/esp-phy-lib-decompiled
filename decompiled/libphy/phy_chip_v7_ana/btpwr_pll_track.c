/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> btpwr_pll_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int btpwr_pll_track(uint param_1)

{
  uint uVar1;
  char extraout_var;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  
  if (bt_pwr_freq_old != param_1) {
    uVar1 = fpga_mem_rd(0x6000e0c4);
    fpga_mem_wr(0x6000e0c4,uVar1 & 0xffffff00 | param_1 * 3 & 0xff);
    fpga_mem_rd(0x6000e0c0);
    bt_pwr_freq_old = (byte)param_1;
    bt_pwr_cap_sum = extraout_var + bt_pwr_cap_sum;
    bt_pwr_track_num = bt_pwr_track_num + 1;
  }
  iVar2 = (int)btpwr_atten_offset;
  if (0xf < bt_pwr_track_num) {
    iVar4 = bt_pwr_cap_sum + 8 >> 4;
    iVar3 = (int)(short)iVar4;
    if (bt_pwr_cap_sum_old != iVar3) {
      bt_pwr_cap_sum_old = (char)iVar4;
      if (iVar3 < 2) {
        if (-2 < iVar3) {
          bt_pwr_track_num = 0;
          bt_pwr_cap_sum = 0;
          return 0;
        }
        cVar5 = bt_pwr_cap_sum_old * '\x06';
      }
      else {
        cVar5 = (char)(iVar4 << 3);
      }
      if (cVar5 < -0x12) {
        cVar5 = -0x12;
      }
      if ('\x18' < cVar5) {
        cVar5 = '\x18';
      }
      iVar2 = (int)cVar5;
    }
    bt_pwr_cap_sum = 0;
    bt_pwr_track_num = 0;
    return iVar2;
  }
  return iVar2;
}

