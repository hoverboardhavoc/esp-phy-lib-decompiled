/*
 * Last changed at upstream commit 792ba5917ee8191e7264143e69f9e6f8c1c0eacc
 * https://github.com/espressif/esp-phy-lib/commit/792ba5917ee8191e7264143e69f9e6f8c1c0eacc
 * Upstream date: 2024-05-08 10:58:27 +0800
 * Upstream subject: update c3 s3 c6 libphy fix coex reset and bug
 * Source: librftest -> wifi.o -> esp_set_bt_correct
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void esp_set_bt_correct(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined *puVar3;
  int iVar4;
  char local_18 [4];
  char local_14 [8];
  
  local_14[0] = (char)param_2;
  local_14[1] = local_14[0];
  local_14[2] = local_14[0];
  iVar4 = 0;
  puVar3 = &phy_param;
  do {
    cVar1 = puVar3[0x179];
    local_18[iVar4] = cVar1;
    pcVar2 = local_14 + iVar4;
    iVar4 = iVar4 + 1;
    puVar3[0x179] = cVar1 + *pcVar2;
    puVar3 = puVar3 + 1;
  } while (iVar4 != 3);
  rom1_bt_set_tx_gain(0);
  bt_txpwr_freq(&phy_param);
  phy_printf("offset:%d,atten:%d,cal_power:%d\n",param_2,(int)(&DAT_000181c9)[param_1],
             (int)(char)txiq_cal_init);
  DAT_000181c9 = local_18[0];
  DAT_000181ca = local_18[1];
  DAT_000181cb = local_18[2];
  return;
}

