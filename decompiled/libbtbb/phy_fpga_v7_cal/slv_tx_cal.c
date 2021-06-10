/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_fpga_v7_cal.o -> slv_tx_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slv_tx_cal(void)

{
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x34,0x10,0x10);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0xb,0,0xff);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0xc,0,0xff);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0xd,0,0xff);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0xe,0,0xff);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0xf,0,0xff);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x10,0,0xf);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x11,0,0xff);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x12,0,0xff);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x13,0,0xff);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x14,0,0xff);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x15,0,0xff);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x16,0,0xf);
  slv_tx_pha_cal(1);
  slv_tx_del_cal();
  if ((_DAT_6000d040 & 1) != 0) {
    slv_tx_g_cal();
  }
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x34,0,0x10);
  return;
}

