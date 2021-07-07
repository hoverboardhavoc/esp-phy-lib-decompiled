/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> bt_track_tx_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_track_tx_power(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_18 [16];
  
  cVar1 = btpwr_tsens_track();
  iVar2 = (int)cVar1;
  if ((param_2 != 0) && (btpwr_tsen_flag == '\0')) {
    iVar2 = btpwr_pll_track(param_1);
  }
  if (btpwr_atten_offset != iVar2) {
    btpwr_atten_offset = (char)iVar2;
    puVar3 = &chip7_sleep_params;
    iVar4 = 0;
    do {
      iVar5 = ((uint)(byte)puVar3[0x81] + iVar2) * 0x1000000;
      iVar6 = iVar5 >> 0x18;
      if (iVar6 < 0) {
        local_18[iVar4] = 0;
      }
      else if (iVar6 < 0x41) {
        local_18[iVar4] = (char)((uint)iVar5 >> 0x18);
      }
      else {
        local_18[iVar4] = 0x40;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 != 8);
    wr_bt_tx_atten(local_18);
  }
  return;
}

