/*
 * Last changed at upstream commit 9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * https://github.com/espressif/esp-phy-lib/commit/9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * Upstream date: 2023-03-31 17:07:27 +0800
 * Upstream subject: update_for_rftest_20230331
 * Source: libphy -> phy_init.o -> txcal_gain_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txcal_gain_check(void)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  sVar1 = *(short *)((DAT_00010e2b + 0x20) * 2 + 0x10d8c);
  puVar2 = &phy_param;
  do {
    puVar3 = (undefined4 *)((int)puVar2 + 2);
    *(short *)(puVar2 + 0x11) = *(short *)(puVar2 + 0x11) - sVar1;
    puVar2 = puVar3;
  } while (puVar3 != (undefined4 *)0x10dac);
  sVar1 = *(short *)((DAT_00010e2c + 0x38) * 2 + 0x10d8e);
  puVar2 = &phy_param;
  do {
    puVar3 = (undefined4 *)((int)puVar2 + 2);
    *(short *)((int)puVar2 + 0x76) = *(short *)((int)puVar2 + 0x76) - sVar1;
    puVar2 = puVar3;
  } while (puVar3 != (undefined4 *)0x10da4);
  return;
}

