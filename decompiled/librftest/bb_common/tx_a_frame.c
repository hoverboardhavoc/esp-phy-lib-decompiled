/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> bb_common.o -> tx_a_frame
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_a_frame(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = (uint *)Plcp0AddrGet();
  puVar4 = (uint *)ConfAddrGet(param_1);
  _DAT_60033c34 = _DAT_60033c34 | 2;
  _DAT_60033c40 = _DAT_60033c40 | 3;
  tx_queue = param_1;
  *puVar4 = *puVar4 & 0xffc00fff | 0x1000;
  *puVar3 = *puVar3 | 0xc0000000;
  iVar1 = _DAT_60035000;
  do {
    do {
      if ((_DAT_60033c3c & 2) != 0) {
        return;
      }
      flash_test_run(0x1000);
      iVar2 = _DAT_60035000;
    } while (tx_contin_fcc_en != '\0');
  } while ((uint)(_DAT_60035000 - iVar1) < 500000);
  phy_printf("tx is blocked! ");
  phy_printf("plcp0:0x%x conf:0x%x\n",*puVar3,*puVar4);
  phy_printf("time:0x%x col:0x%x block:0x%x diag3:0x%x bb:0x%x\n",iVar2,_DAT_60033ca8,_DAT_60033ca0,
             _DAT_60033d84,_DAT_6001d008);
  return;
}

