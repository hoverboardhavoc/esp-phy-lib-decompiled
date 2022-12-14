/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_debug.o -> phy_reg_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_reg_check(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)&DAT_600b0154;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x1802c055;
    puVar1 = puVar1 + 1;
    phy_printf("pmu 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600b02f8);
  puVar1 = (undefined4 *)&DAT_600a7000;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18029c00;
    puVar1 = puVar1 + 1;
    phy_printf("agc 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600a71e4);
  puVar1 = (undefined4 *)&DAT_600af800;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x1802be00;
    puVar1 = puVar1 + 1;
    phy_printf("i2c_mst 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600af838);
  puVar1 = (undefined4 *)&DAT_600a0800;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18028200;
    puVar1 = puVar1 + 1;
    phy_printf("FECTRL 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600a09cc);
  puVar1 = (undefined4 *)&DAT_600a0000;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18028000;
    puVar1 = puVar1 + 1;
    phy_printf("FECOEX 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600a00e8);
  puVar1 = (undefined4 *)&DAT_600a0400;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18028100;
    puVar1 = puVar1 + 1;
    phy_printf("FEDATA 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600a04a4);
  puVar1 = (undefined4 *)&DAT_60096000;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18025800;
    puVar1 = puVar1 + 1;
    phy_printf("PCR 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x60096128);
  puVar1 = (undefined4 *)&DAT_600a9800;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x1802a600;
    puVar1 = puVar1 + 1;
    phy_printf("MODEM_SYSCON 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600a9828);
  puVar1 = (undefined4 *)&DAT_600af000;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x1802bc00;
    puVar1 = puVar1 + 1;
    phy_printf("MODEM_LPCON 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600af030);
  puVar1 = (undefined4 *)&DAT_600a7c00;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18029f00;
    puVar1 = puVar1 + 1;
    phy_printf("bb 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600a7cf0);
  puVar1 = (undefined4 *)&DAT_600a7400;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18029d00;
    puVar1 = puVar1 + 1;
    phy_printf("bbtx 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600a743c);
  puVar1 = (undefined4 *)&DAT_600a8000;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x1802a000;
    puVar1 = puVar1 + 1;
    phy_printf("brx 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600a809c);
  puVar1 = (undefined4 *)&DAT_600a7800;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18029e00;
    puVar1 = puVar1 + 1;
    phy_printf("nrx 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600a7a2c);
  return;
}

