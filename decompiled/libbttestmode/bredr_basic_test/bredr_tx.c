/*
 * Last changed at upstream commit 20f1db053a0e6cb9f1c09d255c43bf42483041d0
 * https://github.com/espressif/esp-phy-lib/commit/20f1db053a0e6cb9f1c09d255c43bf42483041d0
 * Upstream date: 2026-09-24 11:57:44 +0800
 * Upstream subject: fix S31 bod rst
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
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort in_stack_00000000;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  char in_stack_00000010;
  
  timeline_table = timeline_table & 0xf7e00000 | 0x8100000;
  tlTable = &timeline_table;
  DAT_00012e04._2_2_ = DAT_00012e04._2_2_ & 0xfc0f | 0x220;
  DAT_00012e14 = DAT_00012e14 & 0xffff80ff | (param_2 & 0x7f) << 8;
  DAT_00012e20 = 0x2aa;
  _DAT_20101078 = _DAT_20101078 & 0xfff00000 | 0x4b7f;
  iVar3 = bb_init_device(&timeline_table);
  devTable = iVar3;
  if (tlTable != (undefined4 *)0x0) {
    tlTable[2] = tlTable[2] & 0xfff00000 | 0x4761;
  }
  linkTable = linkstat_table;
  *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) & 0x1fffffff | (param_7 & 7) << 0x1d;
  *(undefined1 *)(iVar3 + 0x54) = param_5;
  *(undefined4 *)(iVar3 + 0x68) = 0;
  *(uint *)(iVar3 + 0x50) = *(uint *)(iVar3 + 0x50) & 0xff000000 | param_4 & 0xffffff;
  if (0xe < param_6) {
    param_6 = 0xe;
  }
  *(char *)(iVar3 + 0x5a) = (char)param_6;
  *(uint *)(iVar3 + 0x58) = *(uint *)(iVar3 + 0x58) & 0xefffffff | (param_3 & 1) << 0x1c;
  *(uint *)(iVar3 + 0x54) = *(uint *)(iVar3 + 0x54) & 0xdf0000ff;
  tx_pld_init(in_stack_00000004,(uint)in_stack_00000000);
  tx_head_buf._20_4_ =
       param_7 & 7 | (param_8 & 0xf) << 3 | 0x70080 | (in_stack_00000000 & 0x3ff) << 0x13;
  uVar5 = 4;
  if (param_3 == 0) {
    uVar5 = (9 < param_8) + 3;
  }
  tx_head_buf._4_4_ = uVar5 | tx_head_buf._4_4_ & 0xffffc000;
  tx_head_buf._12_4_ = tx_head_buf._12_4_ | 0x7fff;
  txHeadBuf = tx_head_buf;
  DAT_00013e9c = DAT_00013e9c & 0xfff00000 | 0x4fb6;
  uVar5 = DAT_00013ea4 & 0xffffc000;
  DAT_00013ea0 = DAT_00013ea0 & 0xfff00000 | 0x4bbe;
  DAT_00013ea4._0_3_ = (uint3)uVar5 | in_stack_00000000 & 0x3fff;
  txLink0 = &tx_buflink;
  tx_buflink = tx_buflink & 0xeff00000;
  DAT_00013ea4 = CONCAT13((char)(uVar5 >> 0x18),(uint3)DAT_00013ea4) & 0x3fffffff;
  enable_txlink(0,1,devTable,&tx_buflink);
  _DAT_2010a044 = _DAT_2010a044 | 1;
  _DAT_201014b8 = _DAT_201014b8 | 8;
  if (in_stack_00000008 == 0) {
    _DAT_20101380 = _DAT_20101380 & 0x7fffffff;
  }
  else {
    _DAT_20101380 = _DAT_20101380 | 0x80000000;
  }
  if (in_stack_0000000c < 100) {
    in_stack_0000000c = 100;
  }
  iVar3 = 0;
  iVar7 = 0;
  iVar6 = 0;
  bVar1 = false;
  do {
    puVar2 = tlTable;
    if (in_stack_00000010 != '\0') {
      uVar5 = _DAT_2010d800 % 0x4d;
      tlTable[5] = tlTable[5] & 0xff01ffff | uVar5 << 0x11;
      puVar2[6] = uVar5 << 8 | puVar2[6] & 0xffff80ff;
    }
    if (bVar1) {
      if (in_stack_00000008 != 1) goto _L81;
    }
    else if (in_stack_00000008 == 1) {
      iVar3 = bredr_tx_one_pkt(1);
      bVar1 = true;
    }
    else {
_L81:
      iVar3 = bredr_tx_one_pkt(in_stack_00000008);
    }
    phy_bt_track_pll_cap();
    if (iVar3 == 0) {
      iVar7 = iVar7 + 1;
    }
    else {
      iVar6 = iVar6 + 1;
    }
    iVar4 = GetStopCmd();
    if ((iVar4 == 0) || ((iVar6 + iVar7 == param_1 && (param_1 != 0)))) {
      if (in_stack_00000008 != 0) {
        _DAT_20101380 = _DAT_20101380 | 0x400;
        bredr_continue_tx_end();
        _DAT_20101380 = _DAT_20101380 & 0x7fffffff;
      }
      ets_delay_us(in_stack_0000000c - 100 & 0xffff);
      phy_printf("BREDR TX: n_tx_ok=%d,  n_tx_fail=%d \n",iVar6,iVar7);
      return;
    }
  } while( true );
}

