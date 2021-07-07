/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_fpga_v7_i2c.o -> slv_i2c_id_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void slv_i2c_id_init(void)

{
  i2c_writeReg(0x73,1,0x22,100);
  i2c_writeReg(0x73,1,0x23,99);
  i2c_writeReg(0x73,1,0x24,0x67);
  i2c_writeReg(0x73,1,0x25,0x62);
  i2c_writeReg(0x73,1,0x26,0x6b);
  i2c_writeReg(0x73,1,0x27,0x6a);
  i2c_writeReg(0x73,1,0x28,0);
  i2c_writeReg(0x73,1,0x29,0x68);
  i2c_writeReg(0x73,1,0x2a,0x65);
  i2c_writeReg(0x73,1,0x2b,0x66);
  i2c_writeReg(0x73,1,0x2c,0x77);
  i2c_writeReg(0x73,1,0x2d,0x6c);
  i2c_writeReg(0x73,1,0x2e,0x69);
  i2c_writeReg(0x73,1,0x2f,0x7d);
  i2c_writeReg(0x73,1,0x30,0x7c);
  i2c_writeReg(0x73,1,0x31,0);
  return;
}

