/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> wr_rx_gain_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void wr_rx_gain_mem(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  if (param_1 == 0) {
    iVar2 = 0;
    puVar1 = rf_gain_swp_wifi;
  }
  else {
    iVar2 = 0x80;
    puVar1 = (undefined1 *)&bt_rx_gain_swp;
  }
  uVar8 = 0x33;
  if (param_2 == 0) {
    uVar8 = 0;
  }
  uVar3 = get_i2c_clk_sel();
  i2c_clk_sel(0);
  uVar10 = 0;
  uVar9 = 0;
  do {
    if (param_5 <= uVar8) {
      i2c_clk_sel(uVar3);
      return;
    }
    uVar7 = *(uint *)((uVar8 >> 1) * 4 + param_6);
    if ((uVar8 & 1) != 0) {
      uVar7 = uVar7 >> 0x10;
    }
    uVar6 = uVar7 & 0x7c00;
    if ((param_1 == 0) && (rfbb_gain_swp <= uVar6)) {
      if (rfbb_gain_swp != uVar6) {
        uVar10 = uVar10 + 1 & 0xff;
      }
      uVar6 = *(uint *)(((int)chip7_sleep_params[0x51] + uVar10 + 10) * 4 + param_3);
      uVar12 = uVar6 >> 0x10;
      uVar6 = uVar6 & 0xffff;
_L87:
      uVar4 = (uVar7 & 0x7fff) >> 3;
      uVar5 = uVar4 & 0x7f;
      uVar11 = *(uint *)((uVar7 & 7) * 4 + param_4);
      uVar5 = (uVar5 >> 6) + (uVar4 & 1) + (uVar5 >> 5 & 1) + (uVar5 >> 4 & 1) + (uVar5 >> 3 & 1) +
              (uVar5 >> 2 & 1) + (uVar5 >> 1 & 1);
      uVar4 = uVar11 >> 0x10;
      uVar11 = uVar11 & 0xffff;
      if (3 < uVar5) {
        uVar5 = 3;
      }
      uVar5 = (uint)*(ushort *)(chip7_sleep_params + (uVar5 + 0x18) * 2 + 8);
    }
    else {
      if (*(ushort *)((int)puVar1 + uVar9 * 2) != uVar6) {
        uVar9 = uVar9 + 1 & 0xff;
      }
      uVar6 = *(uint *)(uVar9 * 4 + param_3);
      uVar12 = uVar6 >> 0x10;
      uVar6 = uVar6 & 0xffff;
      if (param_1 == 0) goto _L87;
      uVar11 = 0x100;
      uVar4 = 0x100;
      uVar5 = 0;
    }
    write_gain_mem(((int)uVar4 >> 1) + (uVar7 & 0x7fff) * 0x20000 + uVar12 * 0x100,
                   (uVar5 & 0x7ff) * 4 + uVar11 * 0x2000 + uVar6 * 0x400000 + uVar4 * -0x80000000,
                   uVar8 + iVar2 & 0xff);
    uVar8 = uVar8 + 1 & 0xff;
  } while( true );
}

