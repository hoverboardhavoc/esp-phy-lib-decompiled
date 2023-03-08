/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_pq.o -> rw_le_pq_adv_evt
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_pq_adv_evt(void)

{
  int iVar1;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined1 auStack_4c [20];
  undefined1 auStack_38 [32];
  
  phy_printf("RW pq BLE ADV\n");
  prbs9_gen(&PRBS9);
  rw_le_pq_ET_init();
  read_macaddr_from_otp(&uStack_54);
  rw_ble_CS_init(0,2000,4,0,0,uStack_54,uStack_50,0x27);
  memcpy(auStack_38,&_LANCHOR5,0x18);
  memcpy(auStack_4c,&DAT_000121fc,0x14);
  rw_ble_adv_txptr_init(0,4,auStack_38,6,auStack_4c,5);
  rw_ble_rxptr_init();
  _DAT_60031018 = _DAT_60031018 | 0x20;
  _DAT_3fcd0200 = _DAT_3fcd0200 | 0x400000;
  iVar1 = rw_le_v9_get_clkn();
  rw_le_v9_set_rawstp_et(0x3fcd0100,iVar1 + 2U & 0xffffffe);
  rw_le_v9_kick_start(0);
  rw_le_v9_wait_4_kick_start();
  phy_printf("adv start!\n");
  do {
    rw_le_v9_error_print();
    rw_le_pq_adv_evt_refresh(0x3fcd0100,1,0);
    if ((adv_end != 0) && ((_DAT_60031014 & 2) == 0)) {
      phy_printf("adv done!\n");
      _DAT_60031000 = _DAT_60031000 | 0x2000000;
      rf_rw_v9_le_disable();
    }
    iVar1 = GetStopCmd();
  } while (iVar1 != 0);
  phy_printf("rw done!\n");
  rf_rw_v9_le_disable();
  return;
}

