/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> bb_common.o -> test_tx_frame
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void test_tx_frame(undefined4 param_1,uint param_2,int param_3,undefined2 param_4,uint param_5,
                  uint param_6)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  puVar2 = (uint *)Plcp1AddrGet();
  puVar3 = (uint *)HTsigAddrGet(param_1);
  puVar4 = (uint *)HT40LenAddrGet(param_1);
  if (param_2 < 0x10) {
    *puVar2 = *puVar2 & 0xfffe0fff | param_2 << 0xc;
    *puVar2 = *puVar2 & 0xf9ffffff;
  }
  else {
    *puVar2 = *puVar2 & 0xfffe0fff | 0xb000;
    *puVar2 = *puVar2 & 0xf9ffffff | 0x2000000;
    *puVar3 = param_2 - 0x10 & 0x7f | *puVar3 & 0xffffff80;
    if (param_5 == 1) {
      *puVar4 = param_2 << 0x1c | *puVar4 & 0xfffffff;
    }
  }
  *puVar2 = (param_6 & 1) << 0x1b | *puVar2 & 0xf7ffffff;
  *puVar3 = (param_5 & 1) << 7 | *puVar3 & 0xffffff7f;
  if (param_5 == 0) {
    uVar7 = *puVar2 & 0xdfffffff;
  }
  else {
    uVar7 = *puVar2 | 0x20000000;
  }
  *puVar2 = uVar7;
  for (iVar1 = 0; iVar1 != param_3; iVar1 = iVar1 + 1) {
    tx_a_frame(param_1);
    if (phy_tx_pwr_track_en != '\0') {
      tx_pwctrl_background(phy_tx_pwr_correct_en,phy_tx_pwr_print_en);
    }
    if (phy_tx_pwr_print_en != '\0') {
      iVar5 = phy_time_now();
      if (999999 < (uint)(iVar5 - tx_temp_time)) {
        uVar6 = tsens_temp_read();
        phy_printf(&_LC0,uVar6);
        tx_temp_time = phy_time_now();
      }
    }
    ets_delay_us(param_4);
  }
  return;
}

