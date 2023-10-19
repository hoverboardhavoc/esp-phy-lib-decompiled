/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> rf_test.o -> ESP_TEST_GPIO
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ESP_TEST_GPIO(int *param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  uint *puVar11;
  byte bVar12;
  uint uVar13;
  uint local_48 [5];
  
  local_48[0] = 0;
  local_48[1] = 0;
  phy_printf("GPIO TEST MODE\n");
  _DAT_6000f018 = _DAT_6000f018 & 0xffffbdff;
  ets_delay_us(10000);
  puVar5 = (undefined4 *)&DAT_60090004;
  puVar6 = &ini_gpio_val;
  do {
    uVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    *puVar6 = uVar4;
    puVar6 = puVar6 + 1;
  } while (puVar5 != (undefined4 *)0x60090074);
  bVar2 = 0;
  piVar9 = param_1;
  do {
    uVar13 = 0;
    bVar12 = bVar2;
    do {
      if ((bVar12 < 0x1c) && (uVar7 = *piVar9 >> (uVar13 & 0x1f) & 3, uVar7 != 1)) {
        if (uVar7 == 2) {
          uVar4 = 0;
        }
        else {
          if (uVar7 != 3) {
            if (uVar7 != 0) {
              phy_printf("gpio setting error!\n");
            }
            goto _L96;
          }
          uVar4 = 1;
        }
        dig_gpio_out(bVar12,uVar4,2);
      }
_L96:
      bVar12 = bVar12 + 1;
      uVar13 = uVar13 + 2;
    } while (uVar13 != 0x20);
    bVar2 = bVar2 + 0x10;
    piVar9 = piVar9 + 1;
    if (bVar2 == 0x20) {
      puVar11 = local_48;
      uVar13 = 0;
      do {
        uVar7 = (uVar13 & 0x3f) << 2;
        uVar10 = 0;
        do {
          if (uVar7 < 0x1c) {
            bVar1 = (*param_1 >> (uVar10 & 0x1f) & 3U) != 1;
            if (bVar1) {
              uVar3 = 0;
            }
            else {
              uVar3 = dig_gpio_in(uVar7);
              uVar3 = uVar3 & 0xff;
            }
            *puVar11 = ((uint)!bVar1 << 1 | uVar3) << (uVar10 & 0x1f) | *puVar11;
          }
          uVar10 = uVar10 + 2;
          uVar7 = uVar7 + 1 & 0xff;
        } while (uVar10 != 0x20);
        puVar8 = (uint *)(param_2 + uVar13);
        uVar13 = uVar13 + 4;
        *puVar8 = *puVar11;
        puVar11 = puVar11 + 1;
        param_1 = param_1 + 1;
      } while (uVar13 != 8);
      return;
    }
  } while( true );
}

