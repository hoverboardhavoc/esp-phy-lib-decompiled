/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
 * Source: libphy -> phy_tx_cal.o -> bt_txdc_cal_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_txdc_cal_new(void)

{
  ushort uVar1;
  code *pcVar2;
  
  if (-1 < (int)(_DAT_000120b4 << 0x13)) {
    pbus_debugmode();
    (**(code **)(_g_phyFuns + 0x8c))(0xf,0,*(code **)(_g_phyFuns + 0x8c));
    pcVar2 = *(code **)(_g_phyFuns + 0x74);
    uVar1 = (**(code **)(_g_phyFuns + 0x78))(1,1,*(code **)(_g_phyFuns + 0x78));
    (*pcVar2)(1,1,uVar1 | 2);
    (**(code **)(_g_phyFuns + 0x74))
              (4,2,(uint)(byte)pbus_workmode << 3,*(code **)(_g_phyFuns + 0x74));
    txdc_cal_new(&phy_param);
    (**(code **)(_g_phyFuns + 0x84))(0,*(code **)(_g_phyFuns + 0x84));
    pbus_workmode();
    _DAT_000120b4 = _DAT_000120b4 | 0x1000;
  }
  return;
}

