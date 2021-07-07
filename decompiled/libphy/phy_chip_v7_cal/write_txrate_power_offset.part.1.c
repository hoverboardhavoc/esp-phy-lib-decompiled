/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> write_txrate_power_offset.part.1
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void write_txrate_power_offset_part_1(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = 8;
  iVar5 = 0x6000504c;
  do {
    uVar3 = 0;
    iVar7 = 0;
    do {
      iVar6 = get_target_power_offset(((uVar3 & 0xff) >> 2) + uVar4 & 0xff,phy_chan_pwr_index);
      uVar2 = uVar3 & 7;
      uVar3 = uVar3 + 1;
      iVar7 = iVar7 + (iVar6 << (uVar2 << 2));
    } while (uVar3 != 8);
    iVar6 = iVar5 + 4;
    fpga_mem_wr(iVar5,iVar7);
    uVar4 = uVar4 + 2 & 0xff;
    iVar5 = iVar6;
  } while (iVar6 != 0x6000505c);
  iVar5 = 0;
  do {
    uVar4 = 0;
    iVar7 = 0;
    do {
      iVar6 = ((uVar4 & 0xff) >> 2) + iVar5;
      if ((uVar4 & 3) == 3) {
        bVar1 = phy_chan_pwr_index[iVar6 + 8];
      }
      else {
        bVar1 = phy_chan_pwr_index[iVar6];
      }
      uVar3 = uVar4 & 7;
      uVar4 = uVar4 + 1;
      iVar7 = iVar7 + ((uint)bVar1 << (uVar3 << 2));
    } while (uVar4 != 8);
    iVar6 = iVar5 * 2;
    iVar5 = iVar5 + 2;
    fpga_mem_wr(iVar6 + 0x6000505c,iVar7);
  } while (iVar5 != 8);
  return;
}

