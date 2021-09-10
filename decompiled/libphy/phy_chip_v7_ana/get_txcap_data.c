/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
 * Source: libphy -> phy_chip_v7_ana.o -> get_txcap_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_txcap_data(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(DAT_0001317c >> 2);
  if (2 < uVar1) {
    uVar1 = 2;
  }
  iVar2 = uVar1 * 3;
  DAT_00013071 = DAT_00013071 & 0xf0 | *(byte *)(iVar2 + 0x13110);
  DAT_00013072 = *(char *)(iVar2 + 0x13112) << 4 | *(byte *)(iVar2 + 0x13111);
  return;
}

