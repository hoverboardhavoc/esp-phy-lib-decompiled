/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
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
  
  uVar1 = DAT_00012f2c;
  DAT_00012f2c = 0;
  uVar2 = 0xffffff80;
  uVar4 = 1;
  do {
    get_chan_target_power
              (uVar4 & 0xff,(int)DAT_00012dec,local_40,&DAT_00012e48,DAT_00012e5a,&DAT_00012e5b,
               &DAT_00012e85);
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
    ets_printf("chan:%d,max_power:%d\n",uVar4,uVar2);
    uVar4 = uVar5;
  } while (uVar5 != 0xf);
  DAT_00012f2c = uVar1;
  return uVar2;
}

