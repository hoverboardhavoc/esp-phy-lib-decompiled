/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> tx_ack_start
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_ack_start(undefined4 param_1,uint param_2,char param_3,uint param_4,int param_5,
                 uint *param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  puVar3 = (uint *)Plcp0AddrGet(0);
  puVar4 = (uint *)ConfAddrGet(0);
  _tx_pocket_num = 0;
  *puVar4 = (param_4 & 0xf) << 0x18 | *puVar4 & 0xf0ffffff;
  *puVar3 = *puVar3 & 0xf8ffffff | 0x1000000;
  target_power_backoff((int)param_3);
  set_rate_power_index(param_1);
  uVar10 = 0;
  uVar12 = 0;
  iVar13 = 0;
  iVar2 = 0;
  uVar7 = 0xfffffb00;
  uVar11 = 0;
  uVar9 = 0xfffffb00;
  uVar8 = 0;
  for (uVar1 = 0; uVar1 < param_2; uVar1 = uVar1 + 1) {
    *puVar4 = *puVar4 & 0xffc00fff | 0xa000;
    set_tx_rate(0,param_1,param_7,0,0,0);
    uVar5 = tx_data_frame(50000);
    if ((uVar5 & 0xff00) == 0) {
      uVar5 = (int)_DAT_600a40ac >> 0x18;
      param_6[5] = _DAT_600a40ac >> 0x10 & 0xff;
      if ((int)uVar5 < (int)uVar8) {
        uVar8 = uVar5;
      }
      if ((int)uVar9 < (int)uVar5) {
        uVar9 = uVar5;
      }
      iVar2 = iVar2 + uVar5;
      if (uVar1 < 0x20) {
        uVar10 = uVar10 | 1 << (uVar1 & 0x1f);
      }
      rx_ack_num = rx_ack_num + 1;
      uVar12 = uVar12 + 1 & 0xffff;
      if (4 < uVar12) {
        if ((int)uVar5 < (int)uVar11) {
          uVar11 = uVar5;
        }
        if ((int)uVar7 < (int)uVar5) {
          uVar7 = uVar5;
        }
        iVar13 = iVar13 + uVar5;
      }
    }
    for (iVar6 = 0; iVar6 != param_5; iVar6 = iVar6 + 1) {
      ets_delay_us(1000);
    }
  }
  if (uVar12 < 10) {
    if (uVar12 == 0) {
      uVar1 = 0;
      uVar9 = 0xfffffb00;
      uVar8 = 0;
    }
    else {
      uVar1 = (iVar2 * 10) / (int)uVar12;
    }
  }
  else {
    uVar1 = (iVar13 * 10) / (int)(uVar12 - 4);
    uVar8 = uVar11;
    uVar9 = uVar7;
  }
  param_6[2] = uVar1;
  *param_6 = uVar10;
  param_6[1] = uVar12;
  param_6[3] = uVar9;
  param_6[4] = uVar8;
  return;
}

