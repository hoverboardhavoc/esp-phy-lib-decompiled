/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> get_rate_fcc_index
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_rate_fcc_index(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  if (phy_chan_target_power[9] != '\x02') {
    uVar3 = 0;
    bVar2 = 0;
    bVar1 = 0;
    goto _L472;
  }
  bVar1 = (byte)phy_chan_target_power[param_1 + 9] >> 4;
  uVar3 = 0;
  bVar2 = phy_chan_target_power[param_1 + 9] & 0xf;
  switch(param_1 - 3U & 0xff) {
  case 0:
    uVar3 = (uint)(byte)phy_chan_gain_table;
    break;
  case 1:
    uVar3 = (uint)(byte)phy_chan_gain_table;
    goto _L490;
  case 2:
    uVar3 = (uint)phy_chan_gain_table._1_1_;
    break;
  case 3:
    uVar3 = (uint)phy_chan_gain_table._1_1_;
    goto _L490;
  case 4:
    uVar3 = (uint)phy_chan_gain_table._2_1_;
    break;
  case 5:
    uVar3 = (uint)phy_chan_gain_table._2_1_;
    goto _L490;
  case 6:
    uVar3 = (uint)phy_chan_gain_table._3_1_;
    break;
  case 7:
    uVar3 = (uint)phy_chan_gain_table._3_1_;
_L490:
    uVar3 = uVar3 >> 4;
    goto _L473;
  case 8:
    uVar3 = (uint)phy_chan_gain_table._4_1_;
    break;
  default:
    goto _L473;
  }
  uVar3 = uVar3 & 0xf;
_L473:
  if (10 < bVar1) {
    bVar1 = 10;
  }
_L472:
  if (10 < bVar2) {
    bVar2 = 10;
  }
  param_2[1] = bVar1;
  *param_2 = bVar2;
  bVar2 = (byte)uVar3;
  if (10 < uVar3) {
    bVar2 = 10;
  }
  param_2[2] = bVar2;
  return;
}

