/*
 * Last changed at upstream commit 05e53904ac98632e09d78693437b7fa0b35f36da
 * https://github.com/espressif/esp-phy-lib/commit/05e53904ac98632e09d78693437b7fa0b35f36da
 * Upstream date: 2023-05-22 12:26:13 +0800
 * Upstream subject: update h2 libphy phy_version: 200,0, 1cef4f4, May 22 2023, 11:57:13
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
  puVar1 = (undefined4 *)&DAT_600a1000;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18028400;
    puVar1 = puVar1 + 1;
    phy_printf("btmac 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600a1b14);
  puVar1 = (undefined4 *)&DAT_600a2c00;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18028b00;
    puVar1 = puVar1 + 1;
    phy_printf("zb_bb 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600a2c48);
  puVar1 = (undefined4 *)&DAT_600a3000;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18028c00;
    puVar1 = puVar1 + 1;
    phy_printf("802154_reg 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600a318c);
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
  } while (puVar1 != (undefined4 *)0x600ad838);
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
  puVar1 = (undefined4 *)&DAT_600b0000;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x1802c000;
    puVar1 = puVar1 + 1;
    phy_printf("pmu 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600b01a4);
  puVar1 = (undefined4 *)&DAT_60096000;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18025800;
    puVar1 = puVar1 + 1;
    phy_printf("PCR 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x60096154);
  puVar1 = (undefined4 *)&DAT_600a5400;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18029500;
    puVar1 = puVar1 + 1;
    phy_printf("MODEM_SYSCON 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600a5420);
  puVar1 = (undefined4 *)&DAT_600ad000;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x1802b400;
    puVar1 = puVar1 + 1;
    phy_printf("MODEM_LPCON 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600ad020);
  return;
}

