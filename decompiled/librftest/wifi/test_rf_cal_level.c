/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> test_rf_cal_level
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void test_rf_cal_level(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 local_818 [8];
  undefined1 auStack_810 [4];
  undefined1 auStack_80c [2044];
  
  rf_cal_data_clear();
  esp_rom_spiflash_read(param_2,auStack_810,0x800);
  read_macaddr_from_otp(local_818);
  iVar5 = 0;
  puVar4 = auStack_810;
  do {
    puVar3 = local_818 + iVar5;
    iVar5 = iVar5 + 1;
    puVar4[4] = *puVar3;
    puVar4 = puVar4 + 1;
  } while (iVar5 != 6);
  iVar5 = phy_time_now();
  phy_param = 0;
  uVar1 = register_chipv7_phy(init_param_default,auStack_810,param_1);
  iVar2 = phy_time_now();
  phy_printf("%d, rf_cal_level=%d, check_fail=%d\n",iVar2 - iVar5,param_1,uVar1);
  return;
}

