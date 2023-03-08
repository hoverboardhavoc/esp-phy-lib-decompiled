/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> sw_chan_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sw_chan_test(uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = param_1;
  for (iVar5 = 0; uVar1 = _DAT_60035000, iVar5 < param_3; iVar5 = iVar5 + 1) {
    rftest_set_chan(uVar3 & 0xff,0);
    uVar2 = _DAT_60035000;
    beacon_print(param_4);
    phy_printf("loop= %d, chan= %d, time: %d, %d\n",iVar5,uVar3,uVar1,uVar2);
    uVar4 = param_1;
    if (uVar3 != param_2) {
      uVar4 = uVar3 + 1;
    }
    uVar3 = uVar4;
  }
  return;
}

