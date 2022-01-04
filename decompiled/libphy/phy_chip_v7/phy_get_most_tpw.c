/*
 * Last changed at upstream commit 4779ddaaf29e1d6aa2d26980103a1c1bbaa29462
 * https://github.com/espressif/esp-phy-lib/commit/4779ddaaf29e1d6aa2d26980103a1c1bbaa29462
 * Upstream date: 2022-01-04 15:41:20 +0800
 * Upstream subject: fix the bug that phy libs still have ets_printf
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
  
  uVar1 = DAT_00012fe0;
  DAT_00012fe0 = 0;
  uVar2 = 0xffffff80;
  uVar4 = 1;
  do {
    get_chan_target_power
              (uVar4 & 0xff,(int)DAT_00012ea0,local_40,&DAT_00012efc,DAT_00012f0e,&DAT_00012f0f,
               &DAT_00012f39);
    iVar3 = 0;
    do {
      uVar5 = (uint)local_40[iVar3];
      if ((int)(char)local_40[iVar3] < (int)uVar2) {
        uVar5 = uVar2;
      }
      iVar3 = iVar3 + 1;
      uVar2 = (uint)(char)uVar5;
    } while (iVar3 != 0x10);
    uVar5 = uVar4 + 1;
    phy_printf("chan:%d,max_power:%d\n",uVar4,uVar2);
    uVar4 = uVar5;
  } while (uVar5 != 0xf);
  DAT_00012fe0 = uVar1;
  return uVar2;
}

