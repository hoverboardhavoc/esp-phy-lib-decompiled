/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
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
  
  uVar1 = DAT_00012fa4;
  DAT_00012fa4 = 0;
  uVar2 = 0xffffff80;
  uVar4 = 1;
  do {
    get_chan_target_power
              (uVar4 & 0xff,(int)DAT_00012e64,local_40,&DAT_00012ec0,DAT_00012ed2,&DAT_00012ed3,
               &DAT_00012efd);
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
  DAT_00012fa4 = uVar1;
  return uVar2;
}

