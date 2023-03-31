/*
 * Last changed at upstream commit 9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * https://github.com/espressif/esp-phy-lib/commit/9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * Upstream date: 2023-03-31 17:07:27 +0800
 * Upstream subject: update_for_rftest_20230331
 * Source: librftest -> rf_test.o -> ESP_TEST_GPIO
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ESP_TEST_GPIO(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  uint local_4c [6];
  
  local_4c[0] = 0;
  local_4c[1] = 0;
  local_4c[2] = 0;
  phy_printf("GPIO TEST MODE\n");
  ets_delay_us(10000);
  puVar6 = (undefined4 *)&DAT_60009004;
  puVar7 = &ini_gpio_val;
  do {
    uVar5 = *puVar6;
    puVar6 = puVar6 + 1;
    *puVar7 = uVar5;
    puVar7 = puVar7 + 1;
  } while (puVar6 != (undefined4 *)0x6000905c);
  uVar10 = 0;
  piVar11 = param_1;
  do {
    uVar2 = 0;
    do {
      if (((uVar10 & 0xff) + uVar2 & 0xff) < 0x14) {
        uVar8 = *piVar11 >> ((uVar2 & 0xf) << 1) & 3;
        if (uVar8 != 1) {
          if (uVar8 == 2) {
            uVar5 = 2;
            uVar4 = 0;
          }
          else {
            if (uVar8 != 3) {
              if (uVar8 == 0) {
                gpio_output_set(0,0,0,1 << (uVar10 + uVar2 & 0x1f));
              }
              else {
                phy_printf("gpio setting error!\n");
              }
              goto _L152;
            }
            uVar5 = 3;
            uVar4 = 1;
          }
          dig_gpio_out(uVar4,uVar5);
        }
      }
_L152:
      uVar2 = uVar2 + 1;
    } while (uVar2 != 0x10);
    uVar10 = uVar10 + 0x10;
    piVar11 = piVar11 + 1;
    if (uVar10 == 0x20) {
      puVar12 = local_4c;
      uVar10 = 0;
      do {
        uVar2 = (uVar10 & 0x3f) << 2;
        uVar8 = 0;
        do {
          if (uVar2 < 0x16) {
            bVar1 = (*param_1 >> (uVar8 & 0x1f) & 3U) != 1;
            if (bVar1) {
              uVar3 = 0;
            }
            else {
              uVar3 = dig_gpio_in(uVar2);
              uVar3 = uVar3 & 0xff;
            }
            *puVar12 = ((uint)!bVar1 << 1 | uVar3) << (uVar8 & 0x1f) | *puVar12;
          }
          uVar8 = uVar8 + 2;
          uVar2 = uVar2 + 1 & 0xff;
        } while (uVar8 != 0x20);
        puVar9 = (uint *)(param_2 + uVar10);
        uVar10 = uVar10 + 4;
        *puVar9 = *puVar12;
        puVar12 = puVar12 + 1;
        param_1 = param_1 + 1;
      } while (uVar10 != 8);
      return;
    }
  } while( true );
}

