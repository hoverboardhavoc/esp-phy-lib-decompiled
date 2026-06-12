/*
 * Last changed at upstream commit e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * https://github.com/espressif/esp-phy-lib/commit/e294ff039e26b3486d6c9e5853d24d98ee3300b2
 * Upstream date: 2026-06-12 19:07:58 +0800
 * Upstream subject: update s31 for phy
 * Source: libbttestmode -> bredr_basic_test.o -> bredr_rx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void bredr_rx(uint param_1,uint param_2,uint param_3,undefined1 param_4,undefined2 param_5,
             int param_6,uint param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char in_stack_00000000;
  int iStack_48;
  uint auStack_44 [4];
  
  timeline_table = timeline_table & 0xf7e00000 | 0x8000000;
  tlTable = &timeline_table;
  iStack_48 = 0;
  auStack_44[0] = 0;
  DAT_00012dc8._2_2_ = DAT_00012dc8._2_2_ & 0xfc0f | 0x220;
  DAT_00012dee = 0xf;
  DAT_00012dd4 = DAT_00012dd4 & 0xff01ffff | (param_1 & 0x7f) << 0x11;
  DAT_00012de4 = 0x2aa;
  DAT_00012df8 = DAT_00012df8 | 0xf00000;
  _DAT_20101078 = _DAT_20101078 & 0xfff00000 | 0x4b70;
  _DAT_2010a048 = _DAT_2010a048 | 0x2000;
  _DAT_2010a04c = _DAT_2010a04c | 0x2000;
  DAT_00012dec = param_5;
  iVar1 = bb_init_device(&timeline_table);
  devTable = iVar1;
  if (tlTable != (undefined4 *)0x0) {
    tlTable[2] = tlTable[2] & 0xfff00000 | 0x4752;
  }
  linkTable = linkstat_table;
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0x1fffffff | 0x40000000;
  *(undefined1 *)(iVar1 + 0x54) = param_4;
  *(uint *)(iVar1 + 0x58) = *(uint *)(iVar1 + 0x58) & 0xefffffff | (param_2 & 1) << 0x1c;
  *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) & 0xff000000 | param_3 & 0xffffff;
  *(undefined2 *)(iVar1 + 0x48) = param_5;
  *(uint *)(iVar1 + 0x54) = *(uint *)(iVar1 + 0x54) & 0xdf0000ff;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  uVar4 = DAT_0001255c;
  rx_head_buf._4_4_ = rx_head_buf._4_4_ & 0xffffc000 | 2000;
  rx_head_buf._12_4_ = rx_head_buf._12_4_ | 0xffffff;
  rxHeadBuf = rx_head_buf;
  DAT_00012554 = DAT_00012554 & 0xfff00000 | 0x4964;
  DAT_0001255c._0_3_ = (uint3)DAT_0001255c & 0xffc000 | (uint3)param_7 & 0x3fff;
  rxLink0 = &rx_buflink;
  rx_buflink = rx_buflink & 0xfff00000;
  DAT_0001255c = CONCAT13((char)(uVar4 >> 0x18),(uint3)DAT_0001255c) & 0x3fffffff;
  DAT_00012558 = DAT_00012558 & 0xfff00000;
  enable_rxlink(0,1,iVar1,&rx_buflink);
  iVar7 = 0;
  iVar1 = 0;
  _DAT_2010a044 = _DAT_2010a044 | 2;
  uVar4 = 1;
  _DAT_201014b8 = _DAT_201014b8 | 8;
  iVar6 = 0;
  iVar5 = 0;
  do {
    bredr_rx_one_pkt(&iStack_48,auStack_44);
    uVar3 = _DAT_2010a03c & 0x200000;
    if (uVar3 != 0) {
      uVar4 = uVar4 + 1;
      param_7 = (uint)rx_head_buf._24_4_ >> 0x13 & 0x3ff;
      if ((param_2 == 0) && (((uint)rx_head_buf._24_4_ >> 3 & 0xf) < 5)) {
        param_7 = (uint)rx_head_buf._24_4_ >> 0x13 & 0x1f;
      }
    }
    _DAT_2010a044 = _DAT_2010a044 | 0x200000;
    if ((in_stack_00000000 == '\0') || ((auStack_44[0] & 1) != 0)) {
      if ((1 < uVar4) && (uVar3 != 0)) {
_L183:
        if ((auStack_44[0] & 9) == 0) {
          iVar7 = iVar7 + 1;
        }
        if (uVar3 != 0) {
          if (auStack_44[0] == 0x20) {
            iVar6 = iVar6 + 1;
            iVar1 = iVar1 + 1;
            if (param_6 != 0) {
              bredr_rx_ber(9000,1,0,param_7,param_8,in_stack_00000000);
            }
          }
          else if (iStack_48 != 0) {
            iVar5 = iVar5 + 1;
            iVar1 = iVar1 + 1;
          }
        }
      }
    }
    else if (uVar3 == 0) {
      phy_printf("tl status   = 0x%x\n",tlTable[0xe]);
    }
    else if (1 < uVar4) goto _L183;
    iVar2 = GetStopCmd();
    if (iVar2 == 0) {
      phy_printf("%x %x %x %x %x %x %x %x w %x %x %x %x %x %d %d %d p %d %d %d b %x %x\n",iVar1,
                 iVar5,iVar7,iVar6,uVar4,0,0);
      return;
    }
  } while( true );
}

