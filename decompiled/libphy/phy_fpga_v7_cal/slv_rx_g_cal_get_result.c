/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_fpga_v7_cal.o -> slv_rx_g_cal_get_result
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint slv_rx_g_cal_get_result(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  _DAT_6000d010 = _DAT_6000d010 | 0x800;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0x10,0x10);
  do {
    uVar2 = slv_i2c_rd(0x6000d000,0x6000d008,0x7d,0x31,1);
  } while ((uVar2 & 1) == 0);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0,0x10);
  _DAT_6000d010 = _DAT_6000d010 & 0xfffff7ff;
  iVar1 = 0;
  uVar2 = 0;
  do {
    slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,iVar1,0x60);
    iVar4 = 0x25;
    do {
      iVar3 = slv_i2c_rd(0x6000d000,0x6000d008,0x7d,iVar4,0xff);
      if (iVar3 == 0x55) {
        uVar2 = uVar2 | 1;
      }
      else {
        if (iVar3 != 0xaa) {
          uVar2 = uVar2 | 4;
          break;
        }
        uVar2 = uVar2 | 2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x2e);
    iVar1 = iVar1 + 0x20;
    if (iVar1 == 0x60) {
      return uVar2;
    }
  } while( true );
}

