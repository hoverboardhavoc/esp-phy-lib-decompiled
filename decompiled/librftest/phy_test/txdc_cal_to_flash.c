/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> txdc_cal_to_flash
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txdc_cal_to_flash(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 auStack_78 [27];
  
  memset(auStack_78,0,0x68);
  local_90 = 0x20000;
  uStack_8c = 0x20;
  uStack_88 = 0x55;
  uStack_84 = 0x55;
  uStack_80 = 0x55;
  uStack_7c = 1;
  iVar3 = 0;
  puVar2 = &local_90;
  do {
    puVar1 = (undefined4 *)(param_1 + iVar3);
    iVar3 = iVar3 + 4;
    *(undefined4 *)((int)puVar2 + 0x18) = *puVar1;
    puVar2 = (undefined4 *)((int)puVar2 + 4);
  } while (iVar3 != 0x40);
  write_flash(&local_90);
  read_flash(&local_90);
  return;
}

