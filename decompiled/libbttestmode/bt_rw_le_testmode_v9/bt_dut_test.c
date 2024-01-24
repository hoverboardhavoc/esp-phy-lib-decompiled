/*
 * Last changed at upstream commit 6e051981701aacebcbfe9147b2a1fec07d472829
 * https://github.com/espressif/esp-phy-lib/commit/6e051981701aacebcbfe9147b2a1fec07d472829
 * Upstream date: 2024-01-24 19:07:43 +0800
 * Upstream subject: fix ble tx 2m problem causing by phy_wifi_enable_set
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> bt_dut_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_dut_test(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_3b [3];
  undefined4 uStack_38;
  int local_34 [3];
  
  uStack_38 = 0;
  local_34[0] = 0;
  iVar1 = 0;
  do {
    if (param_1 != 0) {
      _DAT_60026018 = _DAT_60026018 | 0x200;
      ets_delay_us(1);
      _DAT_60026018 = _DAT_60026018 & 0xfffffdff;
      ets_delay_us(1);
    }
    if (param_3 == 0) {
      rw_le_v9_testmode_tx(0xc,0x25,100,0,0x71764129,0,1);
    }
    else {
      rw_le_pq_master_test(0,10,0xc,param_3,100,local_34,&uStack_38,auStack_3b);
      if (local_34[0] == 0) {
        phy_printf("fail,");
      }
      phy_printf("%d,tx_num: %d, %d\n",iVar1,local_34[0],uStack_38);
      if (local_34[0] == 0) {
        return;
      }
    }
    for (iVar2 = 0; iVar2 != param_2; iVar2 = iVar2 + 1) {
      ets_delay_us(1000);
    }
    iVar1 = iVar1 + 1;
    if (iVar1 == 10000) {
      return;
    }
  } while( true );
}

