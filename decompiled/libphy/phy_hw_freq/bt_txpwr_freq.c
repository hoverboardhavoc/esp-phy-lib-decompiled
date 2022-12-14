/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_hw_freq.o -> bt_txpwr_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_txpwr_freq(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = get_freq_mem_param(2);
  cVar2 = '\0';
  do {
    bVar1 = *(byte *)(param_1 + 1);
    iVar4 = bt_chan_pwr_interp(param_1,cVar2);
    get_freq_mem_addr(uVar3 >> 0x10 & 0xff,uVar3 >> 8 & 0xff,cVar2,6);
    cVar2 = cVar2 + '\x01';
    freq_i2c_mem_write_new((int)(((uint)bVar1 - iVar4) * 0x1000000) >> 0x18,1);
  } while (cVar2 != 'U');
  return;
}

