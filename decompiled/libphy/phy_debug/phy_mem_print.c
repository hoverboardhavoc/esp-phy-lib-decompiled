/*
 * Last changed at upstream commit 05e53904ac98632e09d78693437b7fa0b35f36da
 * https://github.com/espressif/esp-phy-lib/commit/05e53904ac98632e09d78693437b7fa0b35f36da
 * Upstream date: 2023-05-22 12:26:13 +0800
 * Upstream subject: update h2 libphy phy_version: 200,0, 1cef4f4, May 22 2023, 11:57:13
 * Source: libphy -> phy_debug.o -> phy_mem_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00010a62) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  } while (uVar2 != 10);
  force_rx_gain(1,0x32,1);
  pbus_print();
  _DAT_600a2840 = _DAT_600a2840 & 0x7fffff | 0x33000000;
  _DAT_600a0010 = _DAT_600a0010 & 0xffff3fff;
  _DAT_600a0910 = _DAT_600a0910 & 0xffffcfff;
  _DAT_600a28a0 = _DAT_600a28a0 & 0x3fffffff;
  bt_rx_force();
  ets_delay_us(1);
  _DAT_600a2840 = _DAT_600a2840 & 0xffffff | 0x32000000;
  return;
}

