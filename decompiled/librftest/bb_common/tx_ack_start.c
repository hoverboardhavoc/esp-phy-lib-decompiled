/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uStack_54;
  uint uStack_50;
  
  puVar2 = (uint *)ConfAddrGet(10);
  _tx_pocket_num = 0;
  *puVar2 = (param_3 & 0xf) << 0x18 | *puVar2 & 0xf0ffffff;
  uStack_50 = 0;
  uVar6 = 0;
  iVar5 = 0;
  iVar1 = 0;
  uVar8 = 0xfffffb00;
  uStack_54 = 0;
  uVar10 = 0xfffffb00;
  uVar9 = 0;
  for (uVar7 = 0; uVar7 < param_1; uVar7 = uVar7 + 1) {
    tx_add_pocketnum();
    if (param_2 == 0) {
      param_2 = ((_DAT_6003507c & 0xf) + 1) * 8;
    }
    *puVar2 = (param_2 & 0x3ff) << 0xc | *puVar2 & 0xffc00fff;
    uVar3 = tx_data_frame(50000);
    if ((uVar3 & 0xff000000) == 0) {
      uVar3 = _DAT_600330ac >> 0x18;
      if ((int)uVar3 < (int)uVar9) {
        uVar9 = uVar3;
      }
      if ((int)uVar10 < (int)uVar3) {
        uVar10 = uVar3;
      }
      iVar1 = (int)((iVar1 + (uVar3 & 0xffff)) * 0x10000) >> 0x10;
      if (uVar7 < 0x20) {
        uStack_50 = uStack_50 | 1 << (uVar7 & 0x1f);
      }
      rx_ack_num = rx_ack_num + 1;
      uVar6 = uVar6 + 1 & 0xffff;
      if (4 < uVar6) {
        if ((int)uVar3 < (int)uStack_54) {
          uStack_54 = uVar3;
        }
        if ((int)uVar8 < (int)uVar3) {
          uVar8 = uVar3;
        }
        iVar5 = (int)((iVar5 + (uVar3 & 0xffff)) * 0x10000) >> 0x10;
      }
    }
    for (iVar4 = 0; iVar4 != param_4; iVar4 = iVar4 + 1) {
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
    uVar7 = (uint)(short)((iVar5 * 10) / (int)(uVar6 - 4));
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

