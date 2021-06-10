/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_fpga_v7_init.o -> mux_apb_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mux_apb_reg_init(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = 1;
  if ((_DAT_6000d040 & 1) != 0) {
    iVar1 = 5;
  }
  iVar2 = 0x1e;
  uVar6 = 0;
  do {
    uVar3 = slv_i2c_rd(0x6000d000,0x6000d008,0x7d,iVar2,0xff);
    uVar4 = (int)uVar3 >> 4 & 3;
    uVar5 = (int)uVar3 >> 2 & 3;
    if (uVar5 < uVar4) {
      uVar5 = uVar4;
    }
    if (uVar5 < (uVar3 & 3)) {
      uVar5 = uVar3 & 3;
    }
    if (uVar6 < uVar5) {
      uVar6 = uVar5;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x25);
  iVar2 = 0x11;
  do {
    iVar7 = iVar2 + 1;
    slv_i2c_rd(0x6000d000,0x6000d008,0x7d,iVar2,0xff);
    iVar2 = iVar7;
  } while (iVar7 != 0x17);
  uVar5 = iVar1 + 3 + uVar6 + param_1;
  _DAT_6000d060 =
       (uVar5 + 4) * 0x40000 | (_DAT_6000d060 & 0xfffc0fff | uVar5 * 0x1000) & 0xff03ffc0 | uVar5;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x2f,uVar6 + 3 + param_1,0x1f);
  _DAT_6000d060 = (uVar5 * 0x40 | _DAT_6000d060 & 0xfffff03f) & 0xc0ffffff;
  return;
}

