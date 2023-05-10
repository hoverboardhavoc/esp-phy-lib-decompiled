/*
 * Last changed at upstream commit a83c216dd2de6418cb26ee42d80433b0badd4aea
 * https://github.com/espressif/esp-phy-lib/commit/a83c216dd2de6418cb26ee42d80433b0badd4aea
 * Upstream date: 2023-05-10 18:09:34 +0800
 * Upstream subject: esp32c3: update libphy for ble 1M/2M switch
 * Source: librftest -> wifi.o -> esp_wr_efuse_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void esp_wr_efuse_data(int param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined *puVar6;
  byte *pbVar7;
  uint *puVar8;
  uint *puVar9;
  char *pcVar10;
  undefined *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined1 local_60;
  byte abStack_5f [7];
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined1 auStack_50 [16];
  char local_40 [44];
  
  memset(&local_60,0,0x20);
  memset(local_40,0,0x20);
  local_60 = ESP_TEST_GPIO;
  if (((byte)ESP_TEST_GPIO & 0xf) == 1) {
    abStack_5f[0] = DAT_00018251;
    puVar6 = &phy_param;
    puVar11 = &phy_param;
    puVar4 = &local_60;
    do {
      puVar1 = puVar11 + 0x206;
      puVar11 = puVar11 + 1;
      puVar4[2] = *puVar1;
      puVar4 = puVar4 + 1;
    } while (puVar11 != &DAT_00018052);
    uStack_54 = _ate_adc_for_module;
    puVar4 = &local_60;
    do {
      puVar11 = puVar6 + 0x158;
      puVar6 = puVar6 + 1;
      puVar4[0x10] = *puVar11;
      puVar4 = puVar4 + 1;
    } while (puVar6 != (undefined *)0x18055);
  }
  if (((byte)ESP_TEST_GPIO & 0xf0) == 0x10) {
    uStack_58 = tx_pwctrl_init;
    uStack_57 = DAT_000181c5;
    uStack_56 = _DAT_000181c6;
    uStack_52 = _DAT_0001825a;
  }
  pbVar7 = &local_60;
  puVar8 = (uint *)&DAT_60008800;
  do {
    puVar9 = puVar8 + 1;
    *puVar8 = (uint)pbVar7[3] << 0x18 | (uint)pbVar7[2] << 0x10 | (uint)*pbVar7 |
              (uint)pbVar7[1] << 8;
    pbVar7 = pbVar7 + 4;
    puVar8 = puVar9;
  } while (puVar9 != (uint *)0x60008820);
  read_cmd();
  pcVar5 = local_40;
  puVar12 = (undefined4 *)&DAT_6000895c;
  do {
    puVar13 = puVar12 + 1;
    *pcVar5 = (char)*puVar12;
    pcVar5[1] = (char)((uint)*puVar12 >> 8);
    pcVar5[2] = (char)((uint)*puVar12 >> 0x10);
    pcVar5[3] = (char)((uint)*puVar12 >> 0x18);
    pcVar5 = pcVar5 + 4;
    puVar12 = puVar13;
  } while (puVar13 != (undefined4 *)0x6000897c);
  iVar14 = 0;
  bVar2 = false;
  do {
    pcVar10 = &local_60 + iVar14;
    pcVar5 = local_40 + iVar14;
    iVar14 = iVar14 + 1;
    bVar2 = (bool)(bVar2 | *pcVar10 != *pcVar5);
  } while (iVar14 != 0x20);
  if (param_1 == 1) {
    iVar14 = 0;
    do {
      iVar3 = iVar14 + 1;
      phy_printf("%d,wr_rd:%x,%x\n",iVar14,(&local_60)[iVar14],local_40[iVar14]);
      iVar14 = iVar3;
    } while (iVar3 != 0x20);
  }
  if (bVar2) {
    pcVar5 = "esp_wr_efuse_data fail!res=0x%x\n";
  }
  else {
    pcVar5 = "esp_wr_efuse_data pass!res=0x%x\n";
  }
  phy_printf(pcVar5,bVar2);
  return;
}

