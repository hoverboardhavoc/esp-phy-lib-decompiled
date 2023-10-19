/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> mac_common.o -> fill_tx_frame
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void fill_tx_frame(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  byte bVar11;
  undefined1 *puVar12;
  byte bVar13;
  uint uVar14;
  undefined1 *puVar15;
  byte bVar16;
  int iVar17;
  undefined1 *puVar18;
  uint uVar19;
  int iVar20;
  int in_stack_00000000;
  uint in_stack_00000004;
  uint in_stack_00000008;
  uint local_f0 [47];
  
  uVar19 = param_1 & 0xff;
  crypto_disable();
  puVar5 = (uint *)Plcp0AddrGet(uVar19);
  puVar6 = (uint *)Plcp1AddrGet(uVar19);
  piVar7 = (int *)HTsigAddrGet(uVar19);
  puVar8 = (undefined4 *)ConfAddrGet(uVar19);
  puVar10 = (undefined1 *)0x40000000;
  *puVar8 = 0;
  bVar11 = 0xf;
  iVar17 = param_3 * 0x100;
  iVar20 = in_stack_00000008 * -0x80000000;
  iVar4 = (in_stack_00000008 & 4) * 0x10000000;
  if (param_2 < 0x10) {
    *puVar6 = param_8 * 0x20000 + in_stack_00000000 * 0x800000 + param_2 * 0x1000 +
              (param_3 & 0xfff);
    *piVar7 = iVar4 + param_2 + iVar20 + iVar17;
  }
  else {
    *puVar6 = param_8 * 0x20000 | param_3 & 0xfff | in_stack_00000000 * 0x800000 | 0x200b000;
    param_2 = param_2 & 0xf;
    if (uVar19 < 0x14) {
      if ((param_1 >> 8 & 0xff) == 0) {
        *piVar7 = iVar4 + iVar20 + 0x7000000 + param_2 + iVar17;
        puVar10 = &DAT_60012fd1;
        uVar14 = CONCAT13(DAT_60012fd4,CONCAT12(DAT_60012fd3,CONCAT11(DAT_60012fd2,DAT_60012fd1))) &
                 0xffffffef;
        DAT_60012fd2 = (undefined1)(uVar14 >> 8);
        puVar12 = (undefined1 *)(uint)DAT_60012fd4;
        bVar1 = DAT_60012fd1 & 0xef;
        bVar2 = (byte)(uVar14 >> 0x10);
        bVar3 = (byte)(uVar14 >> 0x18);
        bVar11 = DAT_60012fd1;
        bVar13 = DAT_60012fd3;
        bVar16 = DAT_60012fd4;
      }
      else {
        *piVar7 = iVar4 + iVar20 + 0xf000000 + param_2 + iVar17;
        bVar16 = DAT_60012fd4;
        puVar12 = &DAT_60012fd1;
        bVar13 = 0x10;
        DAT_60012fd1 = 0x10;
        DAT_60012fd2 = 0;
        DAT_60012fd3 = 0;
        DAT_60012fd4 = 0;
        bVar1 = DAT_60012fd1;
        bVar2 = DAT_60012fd3;
        bVar3 = DAT_60012fd4;
      }
    }
    else {
      *piVar7 = iVar4 + iVar20 + 0xf000000 + param_2 + iVar17;
      puVar12 = &DAT_60012fd1;
      puVar10 = (undefined1 *)(uint)DAT_60012fd1;
      uVar14 = CONCAT13(DAT_60012fd4,CONCAT12(DAT_60012fd3,CONCAT11(DAT_60012fd2,DAT_60012fd1))) &
               0xffffffef;
      DAT_60012fd2 = (undefined1)(uVar14 >> 8);
      bVar1 = DAT_60012fd1 & 0xef;
      bVar2 = (byte)(uVar14 >> 0x10);
      bVar3 = (byte)(uVar14 >> 0x18);
      bVar11 = DAT_60012fd3;
      bVar13 = DAT_60012fd4;
      bVar16 = DAT_60012fd4;
    }
    DAT_60012fd4 = bVar3;
    DAT_60012fd3 = bVar2;
    DAT_60012fd1 = bVar1;
    puVar6 = (uint *)HT40LenAddrGet(uVar19,puVar10,bVar11,bVar13,bVar16,puVar12);
    *puVar6 = *puVar6 & 0xfff80000 | param_3 & 0x7ffff;
  }
  if (((param_6 == 0 && param_7 == 0) && param_5 == 0) && param_4 == 0) {
    *puVar5 = in_stack_00000004 & 0xfffff;
    return;
  }
  *puVar5 = (uint)TXBUF_START & 0xfffff;
  iVar4 = 4;
  if (param_7 == 0) {
    if (param_6 == 0) {
      iVar4 = 2;
      if (param_5 == 0) {
        iVar4 = 1;
        iVar17 = -0x40000000;
        goto _L54;
      }
    }
    else {
      iVar4 = 3;
    }
  }
  iVar17 = -0x80000000;
_L54:
  *TXBUF_START = param_4 * 0x1001 + iVar17;
  TXBUF_START[1] = (int)PSDU0_OFFSET;
  TXBUF_START[2] = (int)(TXBUF_START + 4);
  iVar17 = -0x40000000;
  if (iVar4 != 2) {
    iVar17 = -0x80000000;
  }
  TXBUF_START[4] = param_5 * 0x1001 + iVar17;
  TXBUF_START[5] = (int)PSDU1_OFFSET;
  TXBUF_START[6] = (int)(TXBUF_START + 8);
  iVar17 = -0x40000000;
  if (iVar4 != 3) {
    iVar17 = -0x80000000;
  }
  TXBUF_START[8] = param_6 * 0x1001 + iVar17;
  TXBUF_START[9] = (int)PSDU2_OFFSET;
  TXBUF_START[10] = (int)(TXBUF_START + 0xc);
  iVar17 = -0x40000000;
  if (iVar4 != 4) {
    iVar17 = -0x80000000;
  }
  TXBUF_START[0xc] = param_7 * 0x1001 + iVar17;
  local_f0[3] = 0;
  TXBUF_START[0xd] = (int)PSDU3_OFFSET;
  local_f0[1] = 1;
  TXBUF_START[0xe] = 0;
  local_f0[0] = (uint)test_pocket_type;
  local_f0[2] = 0x2c;
  local_f0[10] = (uint)test_sta_mac;
  local_f0[0xb] = (uint)DAT_0001b6d9;
  local_f0[0xc] = (uint)DAT_0001b6da;
  local_f0[0x23] = 1;
  local_f0[0x18] = 0;
  local_f0[0xd] = (uint)DAT_0001b6db;
  local_f0[0x19] = 0;
  local_f0[0xe] = (uint)DAT_0001b6dc;
  local_f0[0xf] = (uint)DAT_0001b6dd;
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
  puVar10 = PSDU3_OFFSET;
  puVar12 = PSDU1_OFFSET;
  puVar15 = PSDU2_OFFSET;
  puVar18 = PSDU0_OFFSET;
  for (uVar19 = 0; uVar19 != param_3; uVar19 = uVar19 + 1) {
    uVar9 = (undefined1)uVar19;
    if (uVar19 < param_4) {
      if (uVar19 < 0x28) {
        *puVar18 = (char)local_f0[uVar19];
      }
      else {
        *puVar18 = uVar9;
      }
      puVar18 = puVar18 + 1;
    }
    else if (uVar19 < param_5 + param_4) {
      *puVar12 = uVar9;
      puVar12 = puVar12 + 1;
    }
    else if (uVar19 < param_6 + param_5 + param_4) {
      *puVar15 = uVar9;
      puVar15 = puVar15 + 1;
    }
    else {
      *puVar10 = uVar9;
      puVar10 = puVar10 + 1;
    }
  }
  return;
}

