/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> bb_common.o -> tx_ack_start
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_ack_start(uint param_1,uint param_2,uint param_3,int param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uStack_54;
  uint uStack_50;
  
  puVar3 = (uint *)ConfAddrGet(10);
  _tx_pocket_num = 0;
  *puVar3 = (param_3 & 0xf) << 0x18 | *puVar3 & 0xf0ffffff;
  uStack_50 = 0;
  uVar6 = 0;
  iVar2 = 0;
  iVar1 = 0;
  uVar8 = 0xfffffb00;
  uStack_54 = 0;
  uVar10 = 0xfffffb00;
  uVar9 = 0;
  for (uVar7 = 0; uVar7 < param_1; uVar7 = uVar7 + 1) {
    tx_add_pocketnum();
    if (param_2 == 0) {
      param_2 = 10;
    }
    *puVar3 = (param_2 & 0x3ff) << 0xc | *puVar3 & 0xffc00fff;
    uVar4 = tx_data_frame(50000);
    if ((uVar4 & 0xff000000) == 0) {
      uVar4 = (uint)DAT_600123f4;
      if ((int)uVar4 < (int)uVar9) {
        uVar9 = uVar4;
      }
      if ((int)uVar10 < (int)uVar4) {
        uVar10 = uVar4;
      }
      iVar1 = (int)((iVar1 + (uVar4 & 0xffff)) * 0x10000) >> 0x10;
      if (uVar7 < 0x20) {
        uStack_50 = uStack_50 | 1 << (uVar7 & 0x1f);
      }
      rx_ack_num = rx_ack_num + 1;
      uVar6 = uVar6 + 1 & 0xffff;
      if (4 < uVar6) {
        if ((int)uVar4 < (int)uStack_54) {
          uStack_54 = uVar4;
        }
        if ((int)uVar8 < (int)uVar4) {
          uVar8 = uVar4;
        }
        iVar2 = (int)((iVar2 + (uVar4 & 0xffff)) * 0x10000) >> 0x10;
      }
    }
    for (iVar5 = 0; iVar5 != param_4; iVar5 = iVar5 + 1) {
      ets_delay_us(1000);
    }
  }
  if (uVar6 < 10) {
    if (uVar6 == 0) {
      uVar7 = 0;
      uVar10 = 0xfffffb00;
      uVar9 = 0;
    }
    else {
      uVar7 = (uint)(short)((iVar1 * 10) / (int)uVar6);
    }
  }
  else {
    uVar7 = (uint)(short)((iVar2 * 10) / (int)(uVar6 - 4));
    uVar9 = uStack_54;
    uVar10 = uVar8;
  }
  param_5[2] = uVar7;
  param_5[1] = uVar6;
  param_5[3] = uVar10;
  param_5[4] = uVar9;
  *param_5 = uStack_50;
  return;
}

