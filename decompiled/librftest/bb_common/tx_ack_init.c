/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> bb_common.o -> tx_ack_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_ack_init(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                uint param_5,int param_6)

{
  uint *puVar1;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_38 = 0x134fe18;
  uStack_34 = 0x5040302;
  puVar1 = (uint *)HTsigAddrGet(10);
  ack_ap_addr0 = param_1;
  ack_ap_addr1 = param_2;
  ack_tx_length = param_4;
  ack_tx_rate = param_3;
  set_macrxfilter(1);
  if (param_6 == 0) {
    get_macaddr(&uStack_38);
  }
  _DAT_60033040 = uStack_38;
  _DAT_60033044 = uStack_34;
  _DAT_60033c78 = _DAT_60033c78 | 2;
  test_tx_rate = param_3;
  fill_txdataframe(1,param_4,param_1,param_2,0x74657373,auStack_40,auStack_3c);
  *puVar1 = (param_5 & 1) << 7 | *puVar1 & 0xffffff7f;
  _DAT_60033080 = _DAT_60033080 & 0xefffffff;
  _DAT_60033084 = _DAT_60033084 & 0x1fffffff | 0x80000000;
  _DAT_60033c44 = _DAT_60033c44 & 0xffff0000 | 0x4040;
  return;
}

