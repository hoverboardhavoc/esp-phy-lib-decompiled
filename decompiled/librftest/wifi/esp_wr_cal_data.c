/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> esp_wr_cal_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void esp_wr_cal_data(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 local_818 [8];
  undefined1 auStack_810 [4];
  undefined1 auStack_80c [2052];
  
  read_macaddr_from_otp(local_818);
  iVar3 = 0;
  puVar2 = auStack_810;
  do {
    puVar1 = local_818 + iVar3;
    iVar3 = iVar3 + 1;
    puVar2[4] = *puVar1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 6);
  rf_cal_data_backup(auStack_810);
  phy_rfcal_data_check(0,auStack_810,init_param_default);
  phy_printf("write rf_cal_data done\n");
  return;
}

