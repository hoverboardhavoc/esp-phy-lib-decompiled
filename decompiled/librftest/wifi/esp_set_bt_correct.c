/*
 * Last changed at upstream commit 6e051981701aacebcbfe9147b2a1fec07d472829
 * https://github.com/espressif/esp-phy-lib/commit/6e051981701aacebcbfe9147b2a1fec07d472829
 * Upstream date: 2024-01-24 19:07:43 +0800
 * Upstream subject: fix ble tx 2m problem causing by phy_wifi_enable_set
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
             (int)(char)bt_txiq_cal);
  DAT_000181c9 = local_18[0];
  DAT_000181ca = local_18[1];
  DAT_000181cb = local_18[2];
  return;
}

