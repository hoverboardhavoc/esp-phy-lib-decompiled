/*
 * Last changed at upstream commit 97e9e8992ea947fa46bc35545000b2c45d7b3060
 * https://github.com/espressif/esp-phy-lib/commit/97e9e8992ea947fa46bc35545000b2c45d7b3060
 * Upstream date: 2022-04-19 15:45:53 +0800
 * Upstream subject: BLE deinit phy_init_flag make wifi light sleep RX problem
 * Source: libphy -> phy_chip_v7.o -> phy_wakeup_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_wakeup_init(void)

{
  ram_phy_wakeup_init();
  if ((DAT_0001459c & 0x20) == 0) {
    get_rf_freq_init();
    (**(code **)(g_phyFuns + 0xd8))(DAT_0001466e,*(code **)(g_phyFuns + 0xd8));
    DAT_0001459c = DAT_0001459c | 0x20;
  }
  return;
}

