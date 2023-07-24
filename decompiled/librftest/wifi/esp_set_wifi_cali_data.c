/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
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
  gpio_output_set = (code)((byte)gpio_output_set & 0xf0 | (byte)(uVar3 & 0xf));
  DAT_00018255 = (byte)param_1[1];
  puVar5 = param_1 + 2;
  puVar4 = &phy_param;
  do {
    uVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4[0x206] = (char)uVar6;
    puVar4 = puVar4 + 1;
  } while (puVar5 != param_1 + 8);
  if ((uVar3 & 0xf) == 1) {
    rom1_tsens_temp_read();
    _ESP_TEST_GPIO = _DAT_000180e2;
  }
  if ((0xd < (DAT_00018255 & 0xf)) || (uVar2 = 0, 0xd < DAT_00018255 >> 4)) {
    phy_printf("err_code=%d,rate_index error \n!",1);
    uVar2 = 1;
  }
  do {
    if (200 < (byte)(puVar1[0x206] + 100)) {
      phy_printf("err_code=%d,power_index out or range\n!",2);
      return 2;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 != &DAT_00018056);
  return uVar2;
}

