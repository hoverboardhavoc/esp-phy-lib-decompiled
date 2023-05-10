/*
 * Last changed at upstream commit a83c216dd2de6418cb26ee42d80433b0badd4aea
 * https://github.com/espressif/esp-phy-lib/commit/a83c216dd2de6418cb26ee42d80433b0badd4aea
 * Upstream date: 2023-05-10 18:09:34 +0800
 * Upstream subject: esp32c3: update libphy for ble 1M/2M switch
 * Source: librftest -> wifi.o -> esp_set_wifi_cali_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 esp_set_wifi_cali_data(uint *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  uint *puVar5;
  uint uVar6;
  
  uVar3 = *param_1;
  puVar1 = &phy_param;
  ESP_TEST_GPIO = (code)((byte)ESP_TEST_GPIO & 0xf0 | (byte)(uVar3 & 0xf));
  DAT_00018251 = (byte)param_1[1];
  puVar5 = param_1 + 2;
  puVar4 = &phy_param;
  do {
    uVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4[0x206] = (char)uVar6;
    puVar4 = puVar4 + 1;
  } while (puVar5 != param_1 + 8);
  if ((uVar3 & 0xf) == 1) {
    ram_tsens_temp_read();
    _ate_adc_for_module = _DAT_000180de;
  }
  if ((0xd < (DAT_00018251 & 0xf)) || (uVar2 = 0, 0xd < DAT_00018251 >> 4)) {
    phy_printf("err_code=%d,rate_index error \n!",1);
    uVar2 = 1;
  }
  do {
    if (200 < (byte)(puVar1[0x206] + 100)) {
      phy_printf("err_code=%d,power_index out or range\n!",2);
      return 2;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 != &DAT_00018052);
  return uVar2;
}

