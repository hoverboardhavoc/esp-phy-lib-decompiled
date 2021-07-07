/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_fpga_v7_cal.o -> slv_tx_pha_cal_v2
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slv_tx_pha_cal_v2(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint unaff_s7;
  uint unaff_s8;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint local_50 [7];
  
  _DAT_6000d010 = _DAT_6000d010 & 0xf8018ff | 0x30000500;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,2,7);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,10,0x55,0xff);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,8,8);
  uVar6 = 0;
  do {
    iVar7 = (uVar6 & 3) << 1;
    iVar1 = (uVar6 >> 2) + 0xb;
    puVar5 = local_50;
    iVar8 = 0;
    do {
      slv_i2c_wr(0x6000d000,0x6000d008,0x7d,iVar1,iVar8 << iVar7,3 << iVar7);
      do {
      } while (-1 < (int)((_DAT_6000d010 & 0xffe0efff | uVar6 << 0x10 | 0x1000) << 4));
      _DAT_6000d010 = _DAT_6000d010 & 0xffe0efff | uVar6 << 0x10;
      uVar2 = get_num_1(_DAT_6000d030 ^ 0x55555555);
      if (uVar2 < 0x11) {
        *puVar5 = uVar2;
      }
      else {
        *puVar5 = 0x20 - uVar2;
      }
      iVar8 = iVar8 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar8 != 4);
    uVar2 = 0;
    do {
      while( true ) {
        uVar3 = uVar2 + 1;
        uVar4 = (local_50[uVar2 - 1 & 3] >> 1) + (local_50[uVar3 & 3] >> 1) + local_50[uVar2];
        if (uVar2 != 0) break;
        unaff_s7 = 0;
        uVar2 = 1;
        unaff_s8 = uVar4;
      }
      if (uVar4 < unaff_s8) {
        unaff_s7 = uVar2;
        unaff_s8 = uVar4;
      }
      uVar2 = uVar3;
    } while (uVar3 != 4);
    slv_i2c_wr(0x6000d000,0x6000d008,0x7d,iVar1,unaff_s7 << iVar7,3 << iVar7);
    uVar6 = uVar6 + 1;
  } while (uVar6 != 0x16);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0,8);
  _DAT_6000d010 = _DAT_6000d010 & 0xfffff8ff;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0,7);
  return;
}

