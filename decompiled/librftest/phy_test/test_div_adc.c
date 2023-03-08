/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> phy_test.o -> test_div_adc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00010530) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_div_adc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_58 [10];
  undefined4 uStack_30;
  
  memset(local_58,0,0x28);
  phy_set_freq(0x9b5,0);
  force_rx_gain(1,0x37,0);
  iVar1 = 0;
  while( true ) {
    (**(code **)(_g_phyFuns + 0x1bc))(0x66,0,4,3,2,iVar1 + 2,*(code **)(_g_phyFuns + 0x1bc));
    if (param_1 != 0) {
      (**(code **)(_g_phyFuns + 0x1d4))(*(code **)(_g_phyFuns + 0x1d4));
      (**(code **)(_g_phyFuns + 0x1cc))(1,1,param_2,*(code **)(_g_phyFuns + 0x1cc));
      ets_delay_us(100);
      (**(code **)(_g_phyFuns + 0x1cc))(1,1,0x189,*(code **)(_g_phyFuns + 0x1cc));
    }
    dig_gpio_out(2,iVar1,3);
    puVar6 = local_58;
    ets_delay_us(100);
    puVar3 = puVar6;
    do {
      uVar2 = phy_corr_pwr_sum(0x80);
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
      ets_delay_us(3000);
    } while (puVar3 != &uStack_30);
    iVar4 = 0;
    do {
      iVar5 = iVar4 + 1;
      phy_printf("%d,%d,%d\n",iVar1,iVar4,*puVar6);
      puVar6 = puVar6 + 1;
      iVar4 = iVar5;
    } while (iVar5 != 10);
    if (iVar1 != 0) break;
    iVar1 = 1;
  }
  (**(code **)(_g_phyFuns + 0x1d8))(*(code **)(_g_phyFuns + 0x1d8));
  bt_rx_force(0);
  _DAT_6001c02c = _DAT_6001c02c & 0x7fffff | 0x37000000;
  return;
}

