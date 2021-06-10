/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> set_txcap_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_txcap_reg(int param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  undefined1 *puVar3;
  int iVar4;
  byte local_28 [4];
  undefined1 local_24 [12];
  
  iVar1 = 0;
  do {
    puVar3 = (undefined1 *)(param_1 + iVar1);
    iVar4 = 0;
    do {
      local_24[iVar4] = *puVar3;
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 3;
    } while (iVar4 != 4);
    bVar2 = set_chan_cal_interp(local_24,param_2);
    local_28[iVar1] = bVar2;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 3);
  i2c_writeReg(0x6b,1,1,local_28[0] | 0x60);
  i2c_writeReg(0x6b,1,2,((int)(char)local_28[2] & 0xfU) << 4 | (uint)local_28[1]);
  return;
}

