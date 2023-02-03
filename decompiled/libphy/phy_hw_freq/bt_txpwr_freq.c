/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_hw_freq.o -> bt_txpwr_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_txpwr_freq(int param_1)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = get_freq_mem_param(2);
  uVar2 = (uVar4 >> 0x10 & 0xff) + 6;
  cVar3 = '\0';
  do {
    bVar1 = *(byte *)(param_1 + 1);
    iVar5 = bt_chan_pwr_interp(param_1,cVar3);
    cVar3 = cVar3 + '\x01';
    freq_i2c_mem_write_new(uVar2,(int)(((uint)bVar1 - iVar5) * 0x1000000) >> 0x18,1);
    uVar2 = uVar2 + (uVar4 >> 8 & 0xff) & 0xffff;
  } while (cVar3 != 'U');
  return;
}

