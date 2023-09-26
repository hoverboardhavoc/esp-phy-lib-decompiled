/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
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
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  uint uVar11;
  uint *puVar12;
  byte bVar13;
  uint uVar14;
  uint local_48 [5];
  
  local_48[0] = 0;
  local_48[1] = 0;
  phy_printf("GPIO TEST MODE\n");
  _DAT_6000f018 = _DAT_6000f018 & 0xffffbdff;
  ets_delay_us(10000);
  puVar6 = (undefined4 *)&DAT_60090004;
  puVar7 = &ini_gpio_val;
  do {
    uVar5 = *puVar6;
    puVar6 = puVar6 + 1;
    *puVar7 = uVar5;
    puVar7 = puVar7 + 1;
  } while (puVar6 != (undefined4 *)0x60090064);
  bVar2 = 0;
  piVar10 = param_1;
  do {
    uVar14 = 0;
    bVar13 = bVar2;
    do {
      if ((bVar13 < 0x18) && (uVar8 = *piVar10 >> (uVar14 & 0x1f) & 3, uVar8 != 1)) {
        if (uVar8 == 2) {
          uVar5 = 2;
          uVar4 = 0;
        }
        else {
          if (uVar8 != 3) {
            if (uVar8 != 0) {
              phy_printf("gpio setting error!\n");
            }
            goto _L150;
          }
          uVar5 = 3;
          uVar4 = 1;
        }
        dig_gpio_out(bVar13,uVar4,uVar5);
      }
_L150:
      bVar13 = bVar13 + 1;
      uVar14 = uVar14 + 2;
    } while (uVar14 != 0x20);
    bVar2 = bVar2 + 0x10;
    piVar10 = piVar10 + 1;
    if (bVar2 == 0x20) {
      puVar12 = local_48;
      uVar14 = 0;
      do {
        uVar8 = (uVar14 & 0x3f) << 2;
        uVar11 = 0;
        do {
          if (uVar8 < 0x18) {
            bVar1 = (*param_1 >> (uVar11 & 0x1f) & 3U) != 1;
            if (bVar1) {
              uVar3 = 0;
            }
            else {
              uVar3 = dig_gpio_in(uVar8);
              uVar3 = uVar3 & 0xff;
            }
            *puVar12 = ((uint)!bVar1 << 1 | uVar3) << (uVar11 & 0x1f) | *puVar12;
          }
          uVar11 = uVar11 + 2;
          uVar8 = uVar8 + 1 & 0xff;
        } while (uVar11 != 0x20);
        puVar9 = (uint *)(param_2 + uVar14);
        uVar14 = uVar14 + 4;
        *puVar9 = *puVar12;
        puVar12 = puVar12 + 1;
        param_1 = param_1 + 1;
      } while (uVar14 != 8);
      return;
    }
  } while( true );
}

