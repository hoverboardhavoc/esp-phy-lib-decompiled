/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> rc_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rc_cal(void)

{
  char cVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  
  if (-1 < (int)(_chip7_sleep_params << 8)) {
    i2c_writeReg_Mask(0x6a,1,6,4,0,2);
    i2c_writeReg_Mask(0x6a,1,0,5,4,2);
    uVar6 = 7;
    if ((chip7_phy_init_ctrl != '\x01') && (uVar6 = 6, chip7_phy_init_ctrl != '\x02')) {
      uVar6 = 0xb;
    }
    i2c_writeReg_Mask(0x6a,1,4,7,4,uVar6);
    i2c_writeReg_Mask(0x68,1,1,5,5,1);
    i2c_writeReg_Mask(0x6a,1,4,0,0,1);
    i2c_writeReg_Mask(0x6a,1,4,3,3,0);
    i2c_writeReg_Mask(0x6a,1,4,3,3,1);
    ets_delay_us(100);
    cVar1 = i2c_readReg_Mask(0x6a,1,5,5,0);
    phy_chan_pwr_index[0xc] = cVar1;
    i2c_writeReg_Mask(0x68,1,1,5,5,0);
    i2c_writeReg_Mask(0x6a,1,4,0,0,0);
    uVar2 = (uint)(byte)(cVar1 + 0x38);
    sVar4 = (short)(((uVar2 * 0x2ee) / 0x5f - 0x39) / 10);
    sVar5 = (short)(((uVar2 * 0x26c) / 0xc3 - 0x39) / 10);
    sVar3 = sVar4;
    if (sVar4 < 2) {
      sVar3 = 2;
    }
    if (0x7f < sVar3) {
      sVar3 = 0x7f;
    }
    phy_chan_pwr_index[0x10] = (undefined1)sVar3;
    sVar3 = sVar5;
    if (sVar5 < 2) {
      sVar3 = 2;
    }
    if (0x7f < sVar3) {
      sVar3 = 0x7f;
    }
    DAT_00014086 = (undefined1)sVar3;
    if (sVar4 < 0xe) {
      sVar4 = 0xe;
    }
    if (0x7f < sVar4) {
      sVar4 = 0x7f;
    }
    DAT_00014085 = (undefined1)sVar4;
    if (sVar5 < 0xe) {
      sVar5 = 0xe;
    }
    if (0x7f < sVar5) {
      sVar5 = 0x7f;
    }
    DAT_00014087 = (undefined1)sVar5;
    uVar2 = ((uVar2 * 400) / 0x28 - 0x39) / 10;
    if ((short)uVar2 < 2) {
      uVar2 = 2;
    }
    if (0x7f < (short)uVar2) {
      uVar2 = 0x7f;
    }
    phy_chan_target_power[0] = (char)uVar2;
    _chip7_sleep_params = _chip7_sleep_params | 0x800000;
    phy_chan_target_power[1] = phy_chan_target_power[0];
  }
  i2c_writeReg(0x67,1,7,phy_chan_target_power[0] + -2);
  i2c_writeReg(0x67,1,8,phy_chan_target_power[0]);
  i2c_writeReg(0x67,1,5,phy_chan_target_power[1] + -2);
  i2c_writeReg(0x67,1,6,phy_chan_target_power[1]);
  i2c_writeReg_Mask(0x67,1,0xc,7,5,0);
  i2c_writeReg_Mask(0x67,1,0xb,7,5,3);
  return;
}

