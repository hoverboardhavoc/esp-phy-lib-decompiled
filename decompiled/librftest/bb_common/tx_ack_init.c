/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> tx_ack_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_ack_init(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                int param_6)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iStack_48;
  int iStack_44;
  
  puVar2 = (uint *)HTsigAddrGet(0);
  ack_ap_addr0 = param_1;
  ack_ap_addr1 = param_2;
  ack_tx_length = param_4;
  ack_tx_rate = param_3;
  set_macrxfilter();
  get_macaddr(&iStack_48);
  if (param_6 == 0) {
    iVar1 = iStack_48;
    iVar3 = iStack_44;
    if (iStack_48 != 0 || iStack_44 != 0) goto _L246;
  }
  iVar3 = 0x5040302;
  iVar1 = 0x134fe18;
_L246:
  setmacaddr(iVar1,iVar3);
  test_sta_mac = (undefined1)iVar1;
  DAT_0001306d = (undefined1)((uint)iVar1 >> 8);
  FillTxPacket = SUB41(iVar3,0);
  DAT_0001306e = (undefined1)((uint)iVar1 >> 0x10);
  DAT_0001306f = (undefined1)((uint)iVar1 >> 0x18);
  DAT_00013071 = (undefined1)((uint)iVar3 >> 8);
  _DAT_600a4c9c = _DAT_600a4c9c | 2;
  test_tx_rate = param_3;
  FillTxPacket(param_4,0,0,param_3,0,0,param_2 >> 8 & 0xff,param_2 & 0xff);
  *puVar2 = (param_5 & 1) << 7 | *puVar2 & 0xffffff7f;
  _DAT_600a407c = _DAT_600a407c & 0xefffffff;
  _DAT_600a4080 = _DAT_600a4080 & 0x1fffffff | 0x80000000;
  _DAT_600a4c50 = _DAT_600a4c50 & 0xffff0000 | 0x4040;
  return;
}

