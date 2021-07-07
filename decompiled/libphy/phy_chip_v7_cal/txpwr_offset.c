/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> txpwr_offset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txpwr_offset(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  
  if (-1 < (int)(_chip7_sleep_params << 9)) {
    uVar2 = phy_get_vdd33();
    uVar7 = 0;
    if (uVar2 < 0xd33) {
      iVar3 = linear_to_db(3);
      iVar4 = linear_to_db(0xd33,3);
      uVar7 = ((iVar3 - iVar4) * 0x2000000 >> 0x18) + 2 >> 2;
    }
    puVar6 = &chip7_phy_init_ctrl;
    puVar5 = &chip7_sleep_params;
    do {
      puVar1 = puVar6 + 0x2c;
      puVar6 = puVar6 + 1;
      puVar5[0x5a] = *puVar1;
      puVar5 = puVar5 + 1;
    } while (puVar6 != (undefined *)0x1405a);
    _DAT_000140f0 = (uVar7 & 0xff) << 8 | uVar2 << 0x10 | 0x82;
    _chip7_sleep_params = _chip7_sleep_params | 0x400000;
  }
  return;
}

