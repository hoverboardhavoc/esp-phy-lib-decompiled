/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
 * Source: librftest -> bb_common.o -> test_tx_frame
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_tx_frame(undefined4 param_1,uint param_2,int param_3,undefined2 param_4,uint param_5,
                  uint param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  puVar1 = (uint *)Plcp1AddrGet();
  puVar2 = (uint *)HTsigAddrGet(param_1);
  puVar3 = (uint *)HT40LenAddrGet(param_1);
  if ((param_2 < 0x10) || (lr_enable == '\x01')) {
    *puVar1 = (param_2 & 0x1f) << 0xc | *puVar1 & 0xfffe0fff;
    *puVar1 = *puVar1 & 0xf9ffffff;
  }
  else {
    *puVar1 = *puVar1 & 0xfffe0fff | 0xb000;
    *puVar1 = *puVar1 & 0xf9ffffff | 0x2000000;
    *puVar2 = param_2 - 0x10 & 0x7f | *puVar2 & 0xffffff80;
    if (param_5 == 1) {
      *puVar3 = param_2 << 0x1c | *puVar3 & 0xfffffff;
    }
  }
  *puVar1 = (param_6 & 1) << 0x1b | *puVar1 & 0xf7ffffff;
  *puVar2 = (param_5 & 1) << 7 | *puVar2 & 0xffffff7f;
  if (param_5 == 0) {
    uVar5 = *puVar1 & 0xdfffffff;
  }
  else {
    uVar5 = *puVar1 | 0x20000000;
  }
  *puVar1 = uVar5;
  for (iVar6 = 0; param_3 != iVar6; iVar6 = iVar6 + 1) {
    tx_a_frame(param_1);
    if (phy_tx_pwr_track_en != '\0') {
      tx_pwctrl_background(phy_tx_pwr_correct_en,phy_tx_pwr_print_en);
    }
    if (phy_tx_pwr_print_en != '\0') {
      if (999999 < (uint)(_DAT_60035000 - tx_temp_time)) {
        uVar4 = rom1_tsens_temp_read();
        phy_printf(&_LC3,uVar4);
        tx_temp_time = _DAT_60035000;
      }
    }
    if (DAT_000130c8 != '\0') {
      ram2_rfpll_cap_track(DAT_000130c7);
    }
    ets_delay_us(param_4);
  }
  return;
}

