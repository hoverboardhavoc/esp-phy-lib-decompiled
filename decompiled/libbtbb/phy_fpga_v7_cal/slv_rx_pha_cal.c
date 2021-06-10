/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_fpga_v7_cal.o -> slv_rx_pha_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slv_rx_pha_cal(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  _DAT_6000d010 = _DAT_6000d010 & 0xfffff800 | 0x155;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,4,7);
  uVar1 = 0;
  do {
    _DAT_6000d010 = _DAT_6000d010 | 0x800;
    slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x2e,uVar1 << 3,0xf8);
    slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0x10,0x10);
    do {
      uVar2 = slv_i2c_rd(0x6000d000,0x6000d008,0x7d,0x31,1);
    } while ((uVar2 & 1) == 0);
    slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0,0x10);
    _DAT_6000d010 = _DAT_6000d010 & 0xfffff7ff;
    uVar3 = slv_i2c_rd(0x6000d000,0x6000d008,0x7d,0x25,0xff);
    uVar2 = 0;
    do {
      uVar5 = uVar2 + 1;
      if (((uVar3 >> (uVar5 & 3) ^ uVar3 >> (uVar2 & 0x1f)) & 1) != 0) {
        iVar4 = (uVar1 & 3) << 1;
        slv_i2c_wr(0x6000d000,0x6000d008,0x7d,(uVar1 >> 2) + 0x17,(uVar2 - 1 & 3) << iVar4,
                   3 << iVar4);
        break;
      }
      uVar2 = uVar5;
    } while (uVar5 != 4);
    uVar1 = uVar1 + 1;
    if (uVar1 == 0x1b) {
      _DAT_6000d010 = _DAT_6000d010 & 0xfffff8ff;
      slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0,7);
      return;
    }
  } while( true );
}

