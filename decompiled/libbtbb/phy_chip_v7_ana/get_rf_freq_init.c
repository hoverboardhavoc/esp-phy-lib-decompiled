/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> get_rf_freq_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_rf_freq_init(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  ushort local_44 [2];
  byte bStack_40;
  byte bStack_3f;
  byte bStack_3e;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  
  if ((_chip7_sleep_params & 0x10) == 0) {
    uVar6 = 0xe;
    if (phy_freq_wifi_only == '\0') {
      uVar6 = 0x55;
    }
    i2c_writeReg_Mask(0x62,1,0,7,7,0);
    i2c_writeReg_Mask(0x62,1,2,7,7,0);
    uVar2 = 0;
    uVar5 = 0x6e;
    do {
      uVar1 = uVar2 + 0x960;
      if ((phy_freq_wifi_only != '\0') && (uVar1 = 0x9b4, uVar2 < 0xd)) {
        uVar1 = uVar2 * 5 + 0x96c;
      }
      chip_i2c_writeReg(0x62,1,1,uVar5);
      get_rf_freq_cap(uVar1 & 0xffff,0,&bStack_40,local_44);
      uVar5 = (undefined1)local_44[0];
      uVar3 = chip_i2c_readReg(100,1,4);
      iVar4 = chip_i2c_readReg(100,1,7);
      uStack_3c = (uint)local_44[0];
      uStack_34 = iVar4 << 8 | uVar3;
      uStack_38 = (uint)bStack_40 << 0x10 | (uint)bStack_3f << 8 | (uint)bStack_3e;
      uVar2 = uVar2 + 1;
      wr_rf_freq_mem(uVar1 - 0x60 & 0xff,&uStack_3c);
    } while ((uVar2 & 0xff) < uVar6);
    _chip7_sleep_params = _chip7_sleep_params | 0x10;
  }
  return;
}

