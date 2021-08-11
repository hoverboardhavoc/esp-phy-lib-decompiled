/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> write_freq_mem_all
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_freq_mem_all(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((_DAT_000130fc & 0x30) == 0x20) {
    cVar1 = '\0';
    do {
      uStack_2c = phy_byte_to_word(param_1);
      uStack_28 = phy_byte_to_word(param_1 + 4);
      cVar2 = cVar1 + '\x01';
      uStack_24 = 0;
      param_1 = param_1 + 8;
      wr_rf_freq_mem(cVar1,&uStack_2c);
      cVar1 = cVar2;
    } while (cVar2 != 'U');
    _DAT_000130fc = _DAT_000130fc | 0x10;
  }
  return;
}

