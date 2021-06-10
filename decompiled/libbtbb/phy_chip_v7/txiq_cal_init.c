/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> txiq_cal_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txiq_cal_init(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_28 [20];
  
  if (-1 < (int)(chip7_sleep_params._0_4_ << 0x11)) {
    uVar3 = (chip7_sleep_params[0x74] + 0x2a) * 0x10000 >> 0x10;
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    iVar1 = get_bbgain_db(DAT_00015e22);
    iVar2 = get_bbgain_db(0x20);
    iVar1 = (uVar3 & 0xffff) + (iVar1 - iVar2) * -4;
    if (0x78 < iVar1 * 0x10000 >> 0x10) {
      iVar1 = 0x78;
    }
    if (iVar1 << 0x10 < 0) {
      iVar1 = 0;
    }
    rfcal_txiq(0x20,chip7_sleep_params,chip7_sleep_params,0x80,(int)(char)iVar1,0);
    iVar1 = get_bbgain_db(DAT_00015e22);
    iVar2 = get_bbgain_db(0x30);
    iVar1 = (uVar3 & 0xffff) + (iVar1 - iVar2) * -4;
    if (0x78 < iVar1 * 0x10000 >> 0x10) {
      iVar1 = 0x78;
    }
    if (iVar1 << 0x10 < 0) {
      iVar1 = 0;
    }
    rfcal_txiq(0x30,chip7_sleep_params,chip7_sleep_params,0x80,(int)(char)iVar1,0);
    iVar1 = (iVar1 + -0x28) * 0x10000 >> 0x10;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    rfcal_txiq(0x30,auStack_28,chip7_sleep_params,0x80,(int)(char)iVar1,2);
    chip7_sleep_params._0_4_ = chip7_sleep_params._0_4_ | 0x4000;
  }
  return;
}

