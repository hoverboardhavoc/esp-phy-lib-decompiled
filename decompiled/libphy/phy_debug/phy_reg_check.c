/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
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
  
  puVar1 = (undefined4 *)&DAT_600a2000;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18028800;
    puVar1 = puVar1 + 1;
    phy_printf("btv3_2 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600a212c);
  puVar1 = (undefined4 *)&DAT_600a2800;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18028a00;
    puVar1 = puVar1 + 1;
    phy_printf("bt_agc 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600a2900);
  puVar1 = (undefined4 *)&DAT_600a2c00;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18028b00;
    puVar1 = puVar1 + 1;
    phy_printf("zb_bb 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600a2c48);
  puVar1 = (undefined4 *)&DAT_60047000;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18011c00;
    puVar1 = puVar1 + 1;
    phy_printf("zb_reg 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600470ec);
  puVar1 = (undefined4 *)&DAT_600ad800;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x1802b600;
    puVar1 = puVar1 + 1;
    phy_printf("i2c_mst 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600ad978);
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
  return;
}

