/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_fpga_v7_cal.o -> slv_rx_pha_cal_v3
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slv_rx_pha_cal_v3(void)

{
  uint uVar1;
  uint uVar2;
  
  _DAT_6000d010 = _DAT_6000d010 & 0xfffff800 | 0x155;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,4,7);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x2e,2,3);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0,0x60);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x2e,0,0xf8);
  _DAT_6000d010 = _DAT_6000d010 | 0x800;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0x10,0x10);
  do {
    uVar1 = slv_i2c_rd(0x6000d000,0x6000d008,0x7d,0x31,1);
  } while ((uVar1 & 1) == 0);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0,0x10);
  _DAT_6000d010 = _DAT_6000d010 & 0xfffff7ff;
  slv_i2c_rd(0x6000d000,0x6000d008,0x7d,0x25,0xff);
  uVar2 = slv_i2c_rd(0x6000d000,0x6000d008,0x7d,0x26,0xff);
                    /* WARNING: Could not recover jumptable at 0x000110aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&_L166)[uVar2 >> 5 & 7 | uVar2 >> 1 & 8])
            (1,(&_L166)[uVar2 >> 5 & 7 | uVar2 >> 1 & 8],uVar1 & 1);
  return;
}

