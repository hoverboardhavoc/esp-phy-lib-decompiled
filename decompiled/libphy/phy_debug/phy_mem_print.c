/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_debug.o -> phy_mem_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_mem_print(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar3 = get_freq_mem_param(2);
  uVar6 = uVar3 >> 0x10 & 0xff;
  uVar1 = uVar3 >> 8 & 0xff;
  uVar3 = 0;
  do {
    uVar4 = get_freq_mem_addr(uVar6,uVar1,uVar3 & 0xff,0);
    uVar5 = read_rf_freq_mem_new(2);
    phy_printf("%d, addr=%d, rd_data=0x%x\n",uVar3,uVar4,uVar5);
    uVar4 = get_freq_mem_addr(uVar6,uVar1,uVar3 & 0xff,3);
    uVar5 = read_rf_freq_mem_new(2);
    uVar2 = uVar3 + 1;
    phy_printf("%d, addr=%d, rd_data=0x%x\n",uVar3,uVar4,uVar5);
    uVar3 = uVar2;
  } while (uVar2 != 0x55);
  return;
}

