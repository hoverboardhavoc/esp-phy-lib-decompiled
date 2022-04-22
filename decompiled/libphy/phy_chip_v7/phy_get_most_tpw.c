/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7.o -> phy_get_most_tpw
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint phy_get_most_tpw(void)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte local_40 [20];
  
  uVar1 = DAT_00014680;
  DAT_00014680 = 0;
  uVar2 = 0xffffff80;
  uVar4 = 1;
  do {
    ram_get_chan_target_power
              (uVar4 & 0xff,(int)DAT_00014514,local_40,&DAT_00014570,DAT_00014580,
               &chip7_phy_init_ctrl,&DAT_00014581);
    iVar3 = 0;
    do {
      uVar5 = (uint)local_40[iVar3];
      if ((int)(char)local_40[iVar3] < (int)uVar2) {
        uVar5 = uVar2;
      }
      iVar3 = iVar3 + 1;
      uVar2 = (uint)(char)uVar5;
    } while (iVar3 != 0xe);
    uVar5 = uVar4 + 1;
    phy_printf("chan:%d,max_power:%d\n",uVar4,uVar2);
    uVar4 = uVar5;
  } while (uVar5 != 0xf);
  DAT_00014680 = uVar1;
  return uVar2;
}

