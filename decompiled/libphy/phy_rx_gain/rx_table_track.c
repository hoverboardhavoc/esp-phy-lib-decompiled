/*
 * Last changed at upstream commit d8ee8f776acd1aafdfc3046f526db024b175b094
 * https://github.com/espressif/esp-phy-lib/commit/d8ee8f776acd1aafdfc3046f526db024b175b094
 * Upstream date: 2022-05-09 07:50:30 -0400
 * Upstream subject: esp32c2: optimize rf performace
 * Source: libphy -> phy_rx_gain.o -> rx_table_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rx_table_track(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = abs_temp((int)_DAT_0001128c - (int)_DAT_00011092);
  if (0x28 < iVar1) {
    iVar1 = (int)DAT_0001121a;
    iVar2 = (int)DAT_0001121c;
    if (param_1 != 0) {
      phy_printf("rx:%d,%d\n",(int)_DAT_0001128c,(int)_DAT_00011092);
    }
    _DAT_6002600c = _DAT_6002600c & 0xfffffffd;
    _DAT_00011148 = _DAT_00011148 & 0xfffffdff;
    set_rx_gain_table_new(0x985,0);
    (**(code **)(_g_phyFuns + 0x118))(*(code **)(_g_phyFuns + 0x118));
    _DAT_0001128c = _DAT_00011092;
    chip_v7_set_chan(iVar1,iVar2);
    return;
  }
  return;
}

