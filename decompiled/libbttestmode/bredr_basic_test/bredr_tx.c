/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
 * Source: libbttestmode -> bredr_basic_test.o -> bredr_tx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bredr_tx(int param_1,uint param_2,uint param_3,uint param_4,undefined1 param_5,uint param_6,
             uint param_7,uint param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort in_stack_00000000;
  undefined4 in_stack_00000004;
  byte in_stack_00000008;
  byte in_stack_0000000c;
  int in_stack_00000010;
  
  timeline_table = timeline_table & 0xf7e00000 | 0x8100000;
  tlTable = &timeline_table;
  DAT_00012dc8._2_2_ = DAT_00012dc8._2_2_ & 0xfc0f | 0x220;
  DAT_00012dd8 = DAT_00012dd8 & 0xffff80ff | (param_2 & 0x7f) << 8;
  DAT_00012de4 = 0x2aa;
  _DAT_20101078 = _DAT_20101078 & 0xfff00000 | 0x4b70;
  iVar2 = bb_init_device(&timeline_table);
  devTable = iVar2;
  if (tlTable != (undefined4 *)0x0) {
    tlTable[2] = tlTable[2] & 0xfff00000 | 0x4752;
  }
  linkTable = linkstat_table;
  *(undefined1 *)(iVar2 + 0x54) = param_5;
  *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) & 0x1fffffff | (param_7 & 7) << 0x1d;
  *(undefined4 *)(iVar2 + 0x68) = 0;
  *(uint *)(iVar2 + 0x50) = *(uint *)(iVar2 + 0x50) & 0xff000000 | param_4 & 0xffffff;
  *(uint *)(iVar2 + 0x54) = *(uint *)(iVar2 + 0x54) & 0xff0000ff;
  if (0xe < param_6) {
    param_6 = 0xe;
  }
  *(char *)(iVar2 + 0x5a) = (char)param_6;
  *(uint *)(iVar2 + 0x58) = *(uint *)(iVar2 + 0x58) & 0xefffffff | (param_3 & 1) << 0x1c;
  *(uint *)(iVar2 + 0x54) = *(uint *)(iVar2 + 0x54) & 0xdfffffff | (in_stack_0000000c & 1) << 0x1d;
  tx_pld_init(in_stack_00000004,(uint)in_stack_00000000);
  tx_head_buf._20_4_ =
       param_7 & 7 | (param_8 & 0xf) << 3 | 0x70080 | (in_stack_00000000 & 0x3ff) << 0x13;
  uVar4 = 4;
  if (param_3 == 0) {
    uVar4 = (9 < param_8) + 3;
  }
  tx_head_buf._4_4_ = uVar4 | tx_head_buf._4_4_ & 0xffffc000;
  tx_head_buf._12_4_ = tx_head_buf._12_4_ | 0x7fff;
  txHeadBuf = tx_head_buf;
  DAT_00013e60 = DAT_00013e60 & 0xfff00000 | 0x4fa7;
  uVar4 = DAT_00013e68 & 0xffffc000;
  DAT_00013e64 = DAT_00013e64 & 0xfff00000 | 0x4baf;
  DAT_00013e68._0_3_ = (uint3)uVar4 | in_stack_00000000 & 0x3fff;
  txLink0 = &tx_buflink;
  tx_buflink = tx_buflink & 0xeff00000 | (in_stack_00000008 & 1) << 0x1c;
  DAT_00013e68 = CONCAT13((char)(uVar4 >> 0x18),(uint3)DAT_00013e68) & 0x3fffffff;
  enable_txlink(0,1,devTable,&tx_buflink);
  _DAT_2010a044 = _DAT_2010a044 | 1;
  _DAT_201014b8 = _DAT_201014b8 | 8;
  if (in_stack_00000010 == 0) {
    _DAT_20101380 = _DAT_20101380 & 0x7fffffff;
  }
  else {
    _DAT_20101380 = _DAT_20101380 | 0x80000000;
  }
  iVar6 = 0;
  iVar5 = 0;
  iVar2 = 0;
  bVar1 = false;
  do {
    if (bVar1) {
      if (in_stack_00000010 != 1) goto _L79;
    }
    else if (in_stack_00000010 == 1) {
      iVar6 = bredr_tx_one_pkt(1);
      bVar1 = true;
    }
    else {
_L79:
      iVar6 = bredr_tx_one_pkt(in_stack_00000010);
    }
    phy_bt_track_pll_cap();
    if (iVar6 == 0) {
      iVar5 = iVar5 + 1;
    }
    else {
      iVar2 = iVar2 + 1;
    }
    iVar3 = GetStopCmd();
    if ((iVar3 == 0) || ((iVar2 + iVar5 == param_1 && (param_1 != 0)))) {
      if (in_stack_00000010 != 0) {
        _DAT_20101380 = _DAT_20101380 | 0x400;
        bredr_continue_tx_end();
        _DAT_20101380 = _DAT_20101380 & 0x7fffffff;
      }
      ets_delay_us(1000);
      phy_printf("BREDR TX: n_tx_ok=%d,  n_tx_fail=%d \n",iVar2,iVar5);
      return;
    }
  } while( true );
}

