/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> rf_test.o -> RF_init_sel
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void RF_init_sel(int param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 local_a0 [2];
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  memset(local_a0,0,0x80);
  local_a0[0] = 2;
  uStack_9e = 0x5252;
  uStack_9c = 0x484c4c50;
  uStack_98 = 0x4648484c;
  uStack_94 = 0x4446464a;
  if (param_1 == 0) {
    iVar4 = 0;
    do {
      puVar2 = local_a0 + iVar4;
      puVar3 = &init_param_default + iVar4;
      iVar4 = iVar4 + 1;
      *puVar3 = *puVar2;
    } while (iVar4 != 0x80);
    phy_printf("esp init data is from factory bin,RF_init_sel:%d\n",0);
  }
  else {
    read_flash_init_para(param_2 + 8,&init_param_default);
    uVar1 = esp_crc8(&init_param_default,0x7f);
    phy_printf("crc8_init:0x%x,0x%x\n",DAT_000120df,(int)(char)uVar1);
    if (DAT_000120df != uVar1) {
      phy_printf("esp init data is from flash,init bin crc error! err_code=%d\n",1);
      return;
    }
    phy_printf("esp init data is from flash,RF_init_sel:%d,flash_addr:0x%x\n",param_1,param_2);
  }
  phy_init();
  phy_printf("v=%d,c=%d, p=%d,%d,%d,%d,%d,%d, %d,%d,%d,%d,%d,%d,%d,%d,fcc=%d freq=%d,%d,crc=%d\n",
             init_param_default,DAT_00012061,DAT_00012062,DAT_00012063,read_flash_init_para,
             DAT_00012065,DAT_00012066);
  return;
}

