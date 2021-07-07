/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_fpga_v7_cal.o -> slv_tx_g_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slv_tx_g_cal(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  
  _DAT_6000d010 = _DAT_6000d010 & 0xd8018ff | 0xc2008600;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,3,7);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,10,0x55,0xff);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,8,8);
  do {
  } while (-1 < _DAT_6000d01c << 1);
  _DAT_6000d010 = _DAT_6000d010 & 0xffffefff;
  _DAT_6000d014 = _DAT_6000d014 & 0xbfffffff | 0x40000000;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0,8);
  host_rxtxg_cnt_cfg(0,0);
  _DAT_6000d010 = _DAT_6000d010 & 0xfbffffff;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,8,8);
  do {
  } while (-1 < (int)((_DAT_6000d010 | 0x1000) << 4));
  _DAT_6000d010 = _DAT_6000d010 & 0xffffefff;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0,8);
  uVar5 = 0;
  iVar3 = 0;
  uVar4 = _DAT_6000d010;
  do {
    _DAT_6000d010 = uVar4;
    uVar2 = iVar3 << 0x15;
    uVar4 = _DAT_6000d010 & 0xff9fffff | uVar2;
    uVar1 = uVar5 | 1;
    if ((_DAT_6000d030 != 0x55555555) && (uVar1 = uVar5 | 2, _DAT_6000d030 != -0x55555556)) {
      uVar1 = uVar5 | 4;
    }
    uVar6 = 0xffffffff;
    if (iVar3 == 2) {
      uVar6 = 0xffff;
    }
    uVar5 = uVar1 | 1;
    if ((((_DAT_6000d02c ^ 0x55555555) & uVar6) != 0) &&
       (uVar5 = uVar1 | 2, ((_DAT_6000d02c ^ 0xaaaaaaaa) & uVar6) != 0)) {
      uVar5 = uVar1 | 4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 3);
  if (1 < (ushort)(uVar5 - 1)) {
    _DAT_6000d010 = uVar4;
    ets_printf("%s %s \n","phy_fpga_v7_cal.c",0x1ba);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  _DAT_6000d010 = _DAT_6000d010 & 0xff9ff8ff | uVar2;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0,7);
  return;
}

