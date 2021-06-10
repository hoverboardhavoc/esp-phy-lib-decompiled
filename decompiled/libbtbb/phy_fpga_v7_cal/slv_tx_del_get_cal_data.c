/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_fpga_v7_cal.o -> slv_tx_del_get_cal_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slv_tx_del_get_cal_data(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,8,8);
  do {
  } while (-1 < (int)((_DAT_6000d010 | 0x1000) << 4));
  _DAT_6000d010 = _DAT_6000d010 & 0xffffefff;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0,8);
  uVar2 = 0;
  puVar1 = param_1;
  do {
    _DAT_6000d010 = _DAT_6000d010 & 0xff9fffff | uVar2;
    uVar2 = uVar2 + 0x200000;
    *puVar1 = _DAT_6000d030;
    puVar1[1] = _DAT_6000d02c;
    puVar1 = puVar1 + 2;
  } while (uVar2 != 0x600000);
  uVar3 = param_1[4];
  param_1[7] = (param_1[5] & 0xffff) << 6 | uVar3 >> 0x1a;
  uVar2 = param_1[3];
  param_1[6] = uVar3 >> 4 & 0x3fffff;
  param_1[5] = (uVar3 & 0xf) << 0x12 | uVar2 >> 0xe;
  uVar3 = param_1[2];
  param_1[3] = uVar3 >> 2 & 0x3fffff;
  param_1[4] = (uVar2 & 0x3fff) << 8 | uVar3 >> 0x18;
  param_1[2] = (uVar3 & 3) << 0x14 | param_1[1] >> 0xc;
  param_1[1] = (param_1[1] & 0xfff) << 10 | *param_1 >> 0x16;
  *param_1 = *param_1 & 0x3fffff;
  return;
}

