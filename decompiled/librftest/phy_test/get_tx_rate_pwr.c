/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
          0x11110);
}

