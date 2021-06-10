/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_fpga_v7_cal.o -> slv_rx_g_cal_v2
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slv_rx_g_cal_v2(void)

{
  int iVar1;
  int iVar2;
  
  _DAT_6000d010 = _DAT_6000d010 & 0xff7ff800 | 0x800355;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,6,7);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x2e,7,7);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x30,0xe,0xf);
  iVar1 = 0;
  do {
    host_rxtxg_cnt_cfg(1,iVar1);
    _DAT_6000d010 = _DAT_6000d010 & 0xfeffffff;
    iVar2 = slv_rx_g_cal_get_result();
    if (iVar2 - 1U < 2) break;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x40);
  iVar1 = slv_rx_g_cal_get_result();
  if (1 < iVar1 - 1U) {
    ets_printf("%s %s \n","phy_fpga_v7_cal.c",0x34a);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  _DAT_6000d010 = _DAT_6000d010 & 0xfffff8ff;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0,7);
  return;
}

