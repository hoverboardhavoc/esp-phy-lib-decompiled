/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libphy -> phy_init.o -> get_txcap_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_txcap_data(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(DAT_00010f0e >> 2);
  if (2 < uVar1) {
    uVar1 = 2;
  }
  iVar2 = uVar1 * 3;
  DAT_00010dd9 = DAT_00010dd9 & 0xf0 | *(byte *)((int)&DAT_00010e74 + iVar2);
  DAT_00010dda = *(char *)((int)&DAT_00010e74 + iVar2 + 2) << 4 |
                 *(byte *)((int)&DAT_00010e74 + iVar2 + 1);
  return;
}

