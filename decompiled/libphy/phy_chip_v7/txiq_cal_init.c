/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> txiq_cal_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txiq_cal_init(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_28 [16];
  
  if (-1 < (int)(DAT_00014050 << 0x11)) {
    uVar1 = (uint)DAT_00014008;
    if ((int)(uVar1 << 0x10) < 0) {
      uVar1 = 0;
    }
    iVar2 = (**(code **)(g_phyFuns + 0x3c))(0,*(code **)(g_phyFuns + 0x3c));
    iVar3 = (**(code **)(g_phyFuns + 0x3c))(0x20,*(code **)(g_phyFuns + 0x3c));
    iVar2 = (uVar1 & 0xffff) + (iVar2 - iVar3) * -4;
    if (0x78 < iVar2 * 0x10000 >> 0x10) {
      iVar2 = 0x78;
    }
    if (iVar2 << 0x10 < 0) {
      iVar2 = 0;
    }
    rfcal_txiq(0x20,&DAT_00014064,&DAT_0001407c,0x80,(int)(char)iVar2,0);
    iVar2 = (**(code **)(g_phyFuns + 0x3c))(0,*(code **)(g_phyFuns + 0x3c));
    iVar3 = (**(code **)(g_phyFuns + 0x3c))(0x120,*(code **)(g_phyFuns + 0x3c));
    iVar2 = (uVar1 & 0xffff) + (iVar2 - iVar3) * -4;
    if (0x78 < iVar2 * 0x10000 >> 0x10) {
      iVar2 = 0x78;
    }
    if (iVar2 << 0x10 < 0) {
      iVar2 = 0;
    }
    rfcal_txiq(0x120,&DAT_00014074,&DAT_0001407e,0x80,(int)(char)iVar2,0);
    iVar2 = (iVar2 + -0x28) * 0x10000 >> 0x10;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    rfcal_txiq(0x120,auStack_28,&DAT_00014092,0x80,(int)(char)iVar2,2);
    DAT_00014050 = DAT_00014050 | 0x4000;
  }
  return;
}

