/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_rx_gain.o -> wr_rx_gain_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wr_rx_gain_mem(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  uVar2 = (uint)*(byte *)(param_2 + 1);
  for (uVar1 = 0; uVar1 != param_1; uVar1 = uVar1 + 1 & 0xff) {
    uVar4 = *(uint *)((uVar1 >> 1) * 4 + param_2);
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar4 << 0x10;
    }
    if (uVar4 >> 0x18 != uVar2) {
      uVar6 = uVar6 + 1 & 0xffff;
    }
    psVar3 = (short *)(uVar6 * 4 + param_3);
    iVar5 = (int)psVar3[1];
    write_gain_mem((int)*psVar3 << 2 | iVar5 >> 6 & 3U,
                   (_DAT_00011030 & 0x1fff) +
                   iVar5 * 0x4000000 + 0x1400000 + (uVar4 >> 0x1c & 3) * 0x100000 +
                   (uVar4 >> 0x14 & 3) * 0x40000 + (uVar4 >> 0x10 & 0xf) * 0x4000 +
                   (uVar4 >> 0x16 & 1) * 0x2000,uVar1);
    uVar2 = uVar4 >> 0x18;
  }
  return;
}

