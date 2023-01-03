/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
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
  
  if (-1 < (int)(_DAT_000110b4 << 0x13)) {
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
    _DAT_000110b4 = _DAT_000110b4 | 0x1000;
  }
  return;
}

