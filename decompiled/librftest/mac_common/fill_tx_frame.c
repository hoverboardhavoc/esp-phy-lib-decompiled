/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> mac_common.o -> fill_tx_frame
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fill_tx_frame(uint param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int in_stack_00000000;
  uint in_stack_00000004;
  uint in_stack_00000008;
  uint local_c8 [49];
  
  _DAT_600a4d68 = 0;
  iVar3 = (in_stack_00000008 & 4) * 0x10000000;
  if (param_1 < 0x10) {
    _DAT_600a5488 =
         in_stack_00000000 * 0x800000 + param_7 * 0x20000 + param_1 * 0x1000 + (param_2 & 0xfff);
    _DAT_600a5494 = iVar3 + param_1 + in_stack_00000008 * -0x80000000;
  }
  else {
    _DAT_600a5488 = param_7 * 0x20000 | param_2 & 0xfff | in_stack_00000000 * 0x800000 | 0x200b000;
    _DAT_600a5494 = (param_1 & 0xf) + in_stack_00000008 * -0x80000000 + 0x7000000 + iVar3;
    _DAT_600a54b8 = _DAT_600a54b8 & 0xfff80000 | param_2 & 0x7ffff;
    _DAT_600a4c8c = _DAT_600a4c8c & 0xffffffef;
  }
  _DAT_600a5494 = _DAT_600a5494 + param_2 * 0x100;
  if (((param_5 == 0 && param_6 == 0) && param_4 == 0) && param_3 == 0) {
    _DAT_600a4d68 = 0;
    _DAT_600a4d6c = in_stack_00000004 & 0xfffff;
    return;
  }
  _DAT_600a4d6c = (uint)TXBUF_START & 0xfffff;
  iVar3 = 4;
  if (param_6 == 0) {
    if (param_5 == 0) {
      iVar3 = 2;
      if (param_4 == 0) {
        iVar3 = 1;
        iVar1 = -0x40000000;
        goto _L72;
      }
    }
    else {
      iVar3 = 3;
    }
  }
  iVar1 = -0x80000000;
_L72:
  *TXBUF_START = (param_3 + 8) * 0x4000 + 0x1000 + iVar1;
  TXBUF_START[1] = PSDU0_OFFSET;
  TXBUF_START[2] = (int)(TXBUF_START + 4);
  iVar1 = -0x40000000;
  if (iVar3 != 2) {
    iVar1 = -0x80000000;
  }
  TXBUF_START[4] = (param_4 + 8) * 0x4000 + 0x100 + iVar1;
  TXBUF_START[5] = PSDU1_OFFSET;
  TXBUF_START[6] = (int)(TXBUF_START + 8);
  iVar1 = -0x40000000;
  if (iVar3 != 3) {
    iVar1 = -0x80000000;
  }
  TXBUF_START[8] = (param_5 + 8) * 0x4000 + 0x100 + iVar1;
  TXBUF_START[9] = PSDU2_OFFSET;
  TXBUF_START[10] = (int)(TXBUF_START + 0xc);
  iVar1 = -0x40000000;
  if (iVar3 != 4) {
    iVar1 = -0x80000000;
  }
  TXBUF_START[0xc] = (param_6 + 8) * 0x4000 + 0x100 + iVar1;
  TXBUF_START[0xd] = PSDU3_OFFSET;
  local_c8[1] = 0;
  TXBUF_START[0xe] = 0;
  iVar3 = PSDU0_OFFSET;
  local_c8[0] = param_2 & 0x3fff;
  puVar8 = (undefined1 *)(PSDU0_OFFSET + 8);
  puVar6 = (undefined1 *)(PSDU1_OFFSET + 8);
  puVar7 = (undefined1 *)(PSDU2_OFFSET + 8);
  puVar2 = (undefined1 *)(PSDU3_OFFSET + 8);
  local_c8[0x22] = 0;
  do {
    puVar10 = (undefined1 *)((int)local_c8 + local_c8[0x22]);
    puVar9 = (undefined1 *)(iVar3 + local_c8[0x22]);
    local_c8[0x22] = local_c8[0x22] + 1;
    *puVar9 = *puVar10;
  } while (local_c8[0x22] != 8);
  _DAT_600a54a4 = (param_2 + 4) * 0x800 & 0xffff800 | _DAT_600a54a4 & 0xf00007ff;
  local_c8[3] = 1;
  local_c8[2] = (uint)test_pocket_type;
  local_c8[4] = 0x2c;
  local_c8[5] = 0;
  local_c8[0x10] = (uint)DAT_0001bedc;
  local_c8[0xc] = (uint)test_sta_mac;
  local_c8[0x11] = (uint)DAT_0001bedd;
  local_c8[0xd] = (uint)DAT_0001bed9;
  local_c8[0xe] = (uint)DAT_0001beda;
  local_c8[0xf] = (uint)DAT_0001bedb;
  local_c8[0x12] = (uint)test_sta_mac;
  local_c8[0x13] = (uint)DAT_0001bed9;
  local_c8[0x17] = (uint)DAT_0001bedd;
  local_c8[0x18] = 0x60;
  local_c8[0x19] = 0x47;
  local_c8[0x1c] = 0xaa;
  local_c8[0x1d] = 0xaa;
  local_c8[0x1e] = 3;
  local_c8[0x23] = 6;
  local_c8[0x24] = 0x6b;
  local_c8[0x27] = 2;
  local_c8[0x28] = 4;
  local_c8[0x16] = (uint)DAT_0001bedc;
  local_c8[0x29] = 0xb;
  local_c8[0x14] = (uint)DAT_0001beda;
  local_c8[0x15] = (uint)DAT_0001bedb;
  local_c8[0x1a] = 0;
  local_c8[0x1b] = 0;
  local_c8[0x1f] = 0;
  local_c8[0x20] = 0;
  local_c8[0x21] = 0;
  local_c8[0x25] = 1;
  local_c8[0x26] = local_c8[0x22];
  for (uVar5 = 0; uVar5 != param_2; uVar5 = uVar5 + 1) {
    uVar4 = (undefined1)uVar5;
    if (uVar5 < param_3) {
      if (uVar5 < 0x28) {
        *puVar8 = (char)local_c8[uVar5 + 2];
      }
      else {
        *puVar8 = uVar4;
      }
      puVar8 = puVar8 + 1;
    }
    else if (uVar5 < param_4 + param_3) {
      *puVar6 = uVar4;
      puVar6 = puVar6 + 1;
    }
    else if (uVar5 < param_5 + param_4 + param_3) {
      *puVar7 = uVar4;
      puVar7 = puVar7 + 1;
    }
    else {
      *puVar2 = uVar4;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}

