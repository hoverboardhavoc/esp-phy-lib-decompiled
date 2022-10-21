/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tx_gain.o -> target_power_backoff
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void target_power_backoff(byte param_1)

{
  DAT_0001109e = param_1;
  ram_wifi_set_tx_gain(DAT_000111f6,0);
  ram_bt_get_tx_gain(&phy_param,(int)DAT_00011180,
                     (int)(((uint)DAT_00011200 - (uint)DAT_0001109e) * 0x1000000) >> 0x18,&phy_param
                     ,&phy_param,&phy_param,&phy_param,&phy_param);
  rom_set_tx_gain_mem(1,0x10,&phy_param,&phy_param,&phy_param,&phy_param);
  rom_bt_tx_dig_gain(&phy_param);
  return;
}

