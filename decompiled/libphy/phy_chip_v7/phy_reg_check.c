/*
 * Last changed at upstream commit dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * https://github.com/espressif/esp-phy-lib/commit/dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * Upstream date: 2022-04-07 23:37:47 -0400
 * Upstream subject: C3/S3 fix "i2c critical" and iram functions
 * Source: libphy -> phy_chip_v7.o -> phy_reg_check
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
  
  puVar1 = (undefined4 *)&DAT_60008800;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18002200;
    puVar1 = puVar1 + 1;
    phy_printf("saradc 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x60008918);
  puVar1 = (undefined4 *)&DAT_60008000;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18002000;
    puVar1 = puVar1 + 1;
    phy_printf("rtc 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x60008158);
  puVar1 = (undefined4 *)&DAT_6000e000;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18003800;
    puVar1 = puVar1 + 1;
    phy_printf("i2c_mst 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x6000e178);
  puVar1 = (undefined4 *)&DAT_60006000;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18001800;
    puVar1 = puVar1 + 1;
    phy_printf("fe 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600061e8);
  puVar1 = (undefined4 *)&DAT_60040000;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18010000;
    puVar1 = puVar1 + 1;
    phy_printf("apbsar 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x6004007c);
  return;
}

