/*
 * Last changed at upstream commit a7a0481e34fd4368aa15a143dfbd855015380fd4
 * https://github.com/espressif/esp-phy-lib/commit/a7a0481e34fd4368aa15a143dfbd855015380fd4
 * Upstream date: 2023-09-25 15:20:47 +0800
 * Upstream subject: phy_param_track_tot and phy_wifi_enable_set for all chips
 * Source: librftest -> phy_test.o -> get_tx_rate_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 get_tx_rate_pwr(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = get_tx_rate();
  iVar2 = (uVar1 & 7) << 2;
  return *(undefined1 *)
          (((0xf << iVar2 & *(uint *)(((uVar1 >> 3 & 0xff) + 0x18001860) * 4)) >> iVar2 & 0xff) +
          0x1110c);
}

