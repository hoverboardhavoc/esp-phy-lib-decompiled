/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_rx_gain.o -> rx_table_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rx_table_track(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = abs_temp((int)_DAT_00011058 - (int)_phy_param);
  uVar1 = _DAT_0001112c;
  if (0x28 < iVar2) {
    iVar2 = (int)DAT_0001112f;
    if (param_1 != 0) {
      phy_printf("rx:%d,%d\n",(int)_DAT_00011058,(int)_phy_param);
    }
    _DAT_600a981c = _DAT_600a981c & 0xfffffffd;
    _DAT_000110b4 = _DAT_000110b4 & 0xfffffdff;
    set_rx_gain_table(0x985,0);
    mac_enable_bb();
    _DAT_00011058 = _phy_param;
    chip_v7_set_chan(uVar1 & 0xff,iVar2);
    return;
  }
  return;
}

