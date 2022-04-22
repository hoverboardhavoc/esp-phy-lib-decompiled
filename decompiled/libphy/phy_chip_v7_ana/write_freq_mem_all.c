/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
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
  int iVar3;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((_DAT_00012124 & 0x30) == 0x20) {
    cVar1 = '\0';
    do {
      uStack_2c = (**(code **)(_g_phyFuns + 0xa4))(param_1,*(code **)(_g_phyFuns + 0xa4));
      iVar3 = param_1 + 4;
      param_1 = param_1 + 8;
      uStack_28 = (**(code **)(_g_phyFuns + 0xa4))(iVar3,*(code **)(_g_phyFuns + 0xa4));
      cVar2 = cVar1 + '\x01';
      uStack_24 = 0;
      wr_rf_freq_mem(cVar1,&uStack_2c);
      cVar1 = cVar2;
    } while (cVar2 != 'U');
    _DAT_00012124 = _DAT_00012124 | 0x10;
  }
  return;
}

