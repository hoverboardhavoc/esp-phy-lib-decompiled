/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> mac_common.o -> fill_tx_frame
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fill_tx_frame(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int in_stack_00000000;
  uint in_stack_00000004;
  uint in_stack_00000008;
  uint local_f0 [47];
  
  uVar13 = param_1 & 0xff;
  crypto_disable();
  puVar2 = (uint *)Plcp0AddrGet(uVar13);
  puVar3 = (uint *)Plcp1AddrGet(uVar13);
  piVar4 = (int *)HTsigAddrGet(uVar13);
  puVar5 = (undefined4 *)ConfAddrGet(uVar13);
  *puVar5 = 0;
  iVar10 = param_3 * 0x100;
  iVar14 = in_stack_00000008 * -0x80000000;
  iVar1 = (in_stack_00000008 & 4) * 0x10000000;
  if (param_2 < 0x10) {
    *puVar3 = param_8 * 0x20000 + in_stack_00000000 * 0x800000 + param_2 * 0x1000 +
              (param_3 & 0xfff);
    *piVar4 = iVar1 + param_2 + iVar14 + iVar10;
  }
  else {
    *puVar3 = param_8 * 0x20000 | param_3 & 0xfff | in_stack_00000000 * 0x800000 | 0x200b000;
    if (uVar13 < 0x14) {
      if ((param_1 >> 8 & 0xff) == 0) {
        iVar12 = 0x7000000;
        goto _L73;
      }
      *piVar4 = iVar1 + iVar14 + 0xf000000 + (param_2 & 0xf) + iVar10;
      _DAT_60033c6c = 0x10;
    }
    else {
      iVar12 = 0xf000000;
_L73:
      *piVar4 = iVar1 + iVar14 + iVar12 + (param_2 & 0xf) + iVar10;
      _DAT_60033c6c = _DAT_60033c6c & 0xffffffef;
    }
    puVar3 = (uint *)HT40LenAddrGet(uVar13);
    *puVar3 = *puVar3 & 0xfff80000 | param_3 & 0x7ffff;
  }
  if (((param_6 == 0 && param_7 == 0) && param_5 == 0) && param_4 == 0) {
    *puVar2 = in_stack_00000004 & 0xfffff;
    return;
  }
  *puVar2 = (uint)TXBUF_START & 0xfffff;
  iVar1 = 4;
  if (param_7 == 0) {
    if (param_6 == 0) {
      iVar1 = 2;
      if (param_5 == 0) {
        iVar1 = 1;
        iVar10 = -0x40000000;
        goto _L54;
      }
    }
    else {
      iVar1 = 3;
    }
  }
  iVar10 = -0x80000000;
_L54:
  *TXBUF_START = param_4 * 0x1001 + iVar10;
  TXBUF_START[1] = (int)PSDU0_OFFSET;
  TXBUF_START[2] = (int)(TXBUF_START + 4);
  iVar10 = -0x40000000;
  if (iVar1 != 2) {
    iVar10 = -0x80000000;
  }
  TXBUF_START[4] = param_5 * 0x1001 + iVar10;
  TXBUF_START[5] = (int)PSDU1_OFFSET;
  TXBUF_START[6] = (int)(TXBUF_START + 8);
  iVar10 = -0x40000000;
  if (iVar1 != 3) {
    iVar10 = -0x80000000;
  }
  TXBUF_START[8] = param_6 * 0x1001 + iVar10;
  TXBUF_START[9] = (int)PSDU2_OFFSET;
  TXBUF_START[10] = (int)(TXBUF_START + 0xc);
  iVar10 = -0x40000000;
  if (iVar1 != 4) {
    iVar10 = -0x80000000;
  }
  TXBUF_START[0xc] = param_7 * 0x1001 + iVar10;
  local_f0[3] = 0;
  TXBUF_START[0xd] = (int)PSDU3_OFFSET;
  local_f0[1] = 1;
  TXBUF_START[0xe] = 0;
  local_f0[0] = (uint)test_pocket_type;
  local_f0[2] = 0x2c;
  local_f0[10] = (uint)test_sta_mac;
  local_f0[0xb] = (uint)DAT_0001b089;
  local_f0[0xc] = (uint)DAT_0001b08a;
  local_f0[0x23] = 1;
  local_f0[0x18] = 0;
  local_f0[0xd] = (uint)DAT_0001b08b;
  local_f0[0x19] = 0;
  local_f0[0xe] = (uint)DAT_0001b08c;
  local_f0[0xf] = (uint)DAT_0001b08d;
  local_f0[0x10] = 0xff;
  local_f0[0x11] = 0xff;
  local_f0[0x12] = 0xff;
  local_f0[0x13] = 0xff;
  local_f0[0x14] = 0xff;
  local_f0[0x15] = 0xff;
  local_f0[0x16] = 0x60;
  local_f0[0x17] = 0x47;
  local_f0[0x1a] = 0xaa;
  local_f0[0x1b] = 0xaa;
  local_f0[0x1c] = 3;
  local_f0[0x20] = 8;
  local_f0[0x24] = 8;
  local_f0[0x25] = 2;
  local_f0[0x21] = 6;
  local_f0[0x26] = 4;
  local_f0[0x22] = 0x6b;
  local_f0[0x1d] = 0;
  local_f0[0x1e] = 0;
  local_f0[0x1f] = 0;
  local_f0[0x27] = 0xb;
  puVar6 = PSDU3_OFFSET;
  puVar8 = PSDU1_OFFSET;
  puVar9 = PSDU2_OFFSET;
  puVar11 = PSDU0_OFFSET;
  for (uVar13 = 0; uVar13 != param_3; uVar13 = uVar13 + 1) {
    uVar7 = (undefined1)uVar13;
    if (uVar13 < param_4) {
      if (uVar13 < 0x28) {
        *puVar11 = (char)local_f0[uVar13];
      }
      else {
        *puVar11 = uVar7;
      }
      puVar11 = puVar11 + 1;
    }
    else if (uVar13 < param_5 + param_4) {
      *puVar8 = uVar7;
      puVar8 = puVar8 + 1;
    }
    else if (uVar13 < param_6 + param_5 + param_4) {
      *puVar9 = uVar7;
      puVar9 = puVar9 + 1;
    }
    else {
      *puVar6 = uVar7;
      puVar6 = puVar6 + 1;
    }
  }
  return;
}

