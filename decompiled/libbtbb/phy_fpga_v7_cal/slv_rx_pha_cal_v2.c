/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_fpga_v7_cal.o -> slv_rx_pha_cal_v2
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slv_rx_pha_cal_v2(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint unaff_s8;
  uint unaff_s9;
  uint local_50 [7];
  
  _DAT_6000d010 = _DAT_6000d010 & 0xfffff800 | 0x255;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,5,7);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x2e,3,3);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0,0x60);
  uVar5 = 0;
  do {
    iVar6 = (uVar5 & 3) << 1;
    iVar7 = ((int)uVar5 >> 2) + 0x17;
    puVar9 = local_50;
    iVar8 = 0;
    do {
      slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x2e,uVar5 << 3,0xf8);
      slv_i2c_wr(0x6000d000,0x6000d008,0x7d,iVar7,iVar8 << iVar6,3 << iVar6);
      _DAT_6000d010 = _DAT_6000d010 | 0x800;
      slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0x10,0x10);
      do {
        uVar1 = slv_i2c_rd(0x6000d000,0x6000d008,0x7d,0x31,1);
      } while ((uVar1 & 1) == 0);
      slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0,0x10);
      _DAT_6000d010 = _DAT_6000d010 & 0xfffff7ff;
      uVar1 = slv_i2c_rd(0x6000d000,0x6000d008,0x7d,0x25,0xff);
      iVar2 = slv_i2c_rd(0x6000d000,0x6000d008,0x7d,0x26,0xff);
      uVar1 = get_num_1((iVar2 << 8 | uVar1) ^ 0x5555);
      if (uVar1 < 9) {
        *puVar9 = uVar1;
      }
      else {
        *puVar9 = 0x10 - uVar1;
      }
      iVar8 = iVar8 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar8 != 4);
    uVar1 = 0;
    do {
      while( true ) {
        uVar3 = uVar1 + 1;
        uVar4 = (local_50[uVar1 - 1 & 3] >> 1) + (local_50[uVar3 & 3] >> 1) + local_50[uVar1];
        if (uVar1 != 0) break;
        unaff_s8 = 0;
        uVar1 = 1;
        unaff_s9 = uVar4;
      }
      if (uVar4 < unaff_s9) {
        unaff_s8 = uVar1;
        unaff_s9 = uVar4;
      }
      uVar1 = uVar3;
    } while (uVar3 != 4);
    slv_i2c_wr(0x6000d000,0x6000d008,0x7d,iVar7,unaff_s8 << iVar6,3 << iVar6);
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x1b);
  _DAT_6000d010 = _DAT_6000d010 & 0xfffff0ff;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0,7);
  return;
}

