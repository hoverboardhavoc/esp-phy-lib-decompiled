/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> get_chan_pwr_index
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_chan_pwr_index(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined *puVar6;
  byte bVar7;
  
  bVar1 = phy_set_most_tpw_index;
  puVar6 = &chip7_phy_init_ctrl;
  uVar4 = 0;
  if (phy_chan_target_power[6] != '\0') {
    uVar4 = phy_chan_target_power[7];
  }
  puVar3 = phy_chan_pwr_index;
  bVar5 = 0;
  do {
    if (bVar5 < 8) {
      bVar7 = puVar6[0x32];
_L512:
      *puVar3 = bVar7;
      uVar2 = phy_chan_pwr_index[0x10];
    }
    else {
      uVar2 = uVar4;
      if (bVar5 != 0x10) {
        bVar7 = puVar6[0x2a];
        goto _L512;
      }
    }
    phy_chan_pwr_index[0x10] = uVar2;
    if ((byte)*puVar3 < bVar1) {
      *puVar3 = bVar1;
    }
    bVar5 = bVar5 + 1;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
    if (bVar5 == 0x11) {
      return;
    }
  } while( true );
}

