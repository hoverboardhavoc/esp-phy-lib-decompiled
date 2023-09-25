/*
 * Last changed at upstream commit a7a0481e34fd4368aa15a143dfbd855015380fd4
 * https://github.com/espressif/esp-phy-lib/commit/a7a0481e34fd4368aa15a143dfbd855015380fd4
 * Upstream date: 2023-09-25 15:20:47 +0800
 * Upstream subject: phy_param_track_tot and phy_wifi_enable_set for all chips
 * Source: librftest -> wifi.o -> flash_init_param_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void flash_init_param_print(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (param_1 == 0) {
    return;
  }
  puVar4 = &phy_param;
  puVar3 = &phy_param;
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    phy_printf("PWR: %d, %d\n",iVar2,(int)(char)puVar3[0xf4]);
    puVar3 = puVar3 + 1;
    iVar2 = iVar1;
  } while (iVar1 != 0xe);
  if (flash_test_init != (code)0x0) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 1;
      phy_printf("limit_cbw20: %d, %d\n",iVar2,(byte)(&chip7_phy_init_ctrl)[iVar2] >> 2);
      iVar2 = iVar1;
    } while (iVar1 != 0x2a);
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 1;
      phy_printf("limit_cbw40: %d, %d\n",iVar2,(byte)puVar4[0x105] >> 2);
      puVar4 = puVar4 + 1;
      iVar2 = iVar1;
    } while (iVar1 != 9);
  }
  if (DAT_0001816e != '\0') {
    phy_printf("force_freq_offset_num=%d*8khz\n",(int)DAT_0001816f);
    return;
  }
  return;
}

