/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> bb_common.o -> tx_ack_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1
tx_ack_init(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5
           )

{
  uint *puVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [20];
  
  puVar1 = (uint *)HTsigAddrGet(10);
  ack_ap_addr0 = param_1;
  ack_ap_addr1 = param_2;
  ack_tx_length = param_4;
  ack_tx_rate = param_3;
  set_macrxfilter();
  get_macaddr(auStack_38);
  DAT_600123a1 = (undefined1)auStack_38._0_4_;
  DAT_600123a2 = SUB41(auStack_38._0_4_,1);
  DAT_600123a3 = SUB41(auStack_38._0_4_,2);
  DAT_600123a4 = SUB41(auStack_38._0_4_,3);
  DAT_600123a5 = (undefined1)auStack_38._4_4_;
  DAT_600123a6 = SUB41(auStack_38._4_4_,1);
  DAT_600123a7 = SUB41(auStack_38._4_4_,2);
  DAT_600123a8 = SUB41(auStack_38._4_4_,3);
  DAT_60012fe1 = DAT_60012fe1 | 2;
  test_tx_rate = param_3;
  fill_txdataframe(1,param_4,param_1,param_2,0x74657373,auStack_40,auStack_3c);
  *puVar1 = (param_5 & 1) << 7 | *puVar1 & 0xffffff7f;
  uVar4 = CONCAT13(DAT_600123c8,CONCAT12(DAT_600123c7,CONCAT11(DAT_600123c6,DAT_600123c5))) &
          0x1fffffff;
  uVar3 = CONCAT13(DAT_600123c4,CONCAT12(DAT_600123c3,CONCAT11(DAT_600123c2,DAT_600123c1))) &
          0xefffffff;
  DAT_600123c2 = (char)(uVar3 >> 8);
  uVar2 = DAT_600123c3;
  DAT_600123c3 = (char)(uVar3 >> 0x10);
  DAT_600123c4 = (char)(uVar3 >> 0x18);
  DAT_600123c6 = (char)(uVar4 >> 8);
  DAT_600123c7 = (char)(uVar4 >> 0x10);
  DAT_600123c8 = (byte)(uVar4 >> 0x18) | 0x80;
  DAT_60012f95 = 0x40;
  DAT_60012f96 = 0x40;
  return uVar2;
}

