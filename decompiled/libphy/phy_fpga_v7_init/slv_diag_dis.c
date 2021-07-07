/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_fpga_v7_init.o -> slv_diag_dis
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slv_diag_dis(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  
  uVar8 = 0xff;
  i2c_2wire_mode_cfg(1);
  slv_i2c_id_init();
  if (param_1 != 0) {
    uVar8 = 0;
  }
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x46,uVar8,0xff);
  uVar6 = 0;
  if (param_1 == 0) {
    uVar6 = 0xdf;
  }
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x47,uVar6,0xff);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x48,uVar8,0xff);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x49,uVar6,0xff);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0,0xff,0xff);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,1,0xf,0xff);
  iVar7 = (param_1 & 1) << 4;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,8,iVar7,0x10);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x34,(uint)((param_1 & 1) == 0) << 4,0x10);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x7e,(param_1 & 1) << 5,0x20);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x7e,iVar7,0x10);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x7e,0,0x10);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x7e,iVar7,0x10);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x7e,0,0x10);
  iVar7 = 1;
  if ((_DAT_6000d040 & 1) != 0) {
    iVar7 = 5;
  }
  iVar1 = 0x1e;
  uVar5 = 0;
  do {
    uVar2 = slv_i2c_rd(0x6000d000,0x6000d008,0x7d,iVar1,0xff);
    uVar3 = (int)uVar2 >> 4 & 3;
    uVar4 = (int)uVar2 >> 2 & 3;
    if (uVar4 < uVar3) {
      uVar4 = uVar3;
    }
    if (uVar4 < (uVar2 & 3)) {
      uVar4 = uVar2 & 3;
    }
    if (uVar5 < uVar4) {
      uVar5 = uVar4;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x25);
  iVar1 = 0x11;
  do {
    iVar9 = iVar1 + 1;
    slv_i2c_rd(0x6000d000,0x6000d008,0x7d,iVar1,0xff);
    iVar1 = iVar9;
  } while (iVar9 != 0x17);
  uVar4 = iVar7 + 3 + uVar5;
  _DAT_6000d060 = (uVar4 + 4) * 0x40000 | _DAT_6000d060 & 0xff000fc0 | uVar4 * 0x1000 | uVar4;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x2f,uVar5 + 3,0x1f);
  _DAT_6000d060 = uVar4 * 0x40 | _DAT_6000d060 & 0xc0fff03f;
  return;
}

