/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> bt_txiq_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_txiq_cal(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  
  if (-1 < (int)(chip7_sleep_params._0_4_ << 0x14)) {
    iVar4 = (int)chip7_sleep_params[0x74];
    puVar6 = chip7_sleep_params;
    puVar5 = chip7_sleep_params;
    iVar7 = 0;
    do {
      uVar1 = (&CSWTCH_233)[iVar7];
      iVar2 = get_bbgain_db(DAT_00015e22);
      iVar3 = get_bbgain_db(uVar1);
      iVar2 = (iVar4 + 0x2aU & 0xffff) + (iVar2 - iVar3) * -4;
      if (0x78 < iVar2 * 0x10000 >> 0x10) {
        iVar2 = 0x78;
      }
      if (iVar2 << 0x10 < 0) {
        iVar2 = 0;
      }
      iVar7 = iVar7 + 1;
      rfcal_txiq(uVar1,puVar6,puVar5,0x20,(int)(char)iVar2,1);
      puVar6 = puVar6 + 8;
      puVar5 = puVar5 + 2;
    } while (iVar7 != 3);
    chip7_sleep_params._0_4_ = chip7_sleep_params._0_4_ | 0x800;
  }
  return;
}

