/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_tx_gain.o -> set_tx_gain_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_tx_gain_mem(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = _DAT_600a0410 >> 0x18;
  uVar3 = param_1 + uVar1;
  iVar2 = 0;
  for (; uVar1 != (uVar3 & 0xff); uVar1 = uVar1 + 1 & 0xff) {
    write_gain_mem(0,(*(byte *)(param_3 + iVar2) & 0xf) << 10 |
                     (*(byte *)(param_2 + iVar2) & 0xf) << 6 | *(byte *)(param_4 + iVar2) & 0x3f |
                     0x10100000,uVar1);
    iVar2 = iVar2 + 2;
  }
  return;
}

