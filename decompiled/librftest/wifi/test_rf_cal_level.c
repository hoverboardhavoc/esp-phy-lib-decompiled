/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> test_rf_cal_level
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_rf_cal_level(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 auStack_788 [1904];
  
  rf_cal_flash(0,auStack_788,param_1 == 1);
  iVar1 = _DAT_60035000;
  uVar2 = register_chipv7_phy(init_param_default,auStack_788,param_1);
  phy_printf("%d, rf_cal_level=%d, check_fail=%d\n",_DAT_60035000 - iVar1,param_1,uVar2);
  rf_cal_flash(uVar2,auStack_788,param_1 == 1);
  return;
}

