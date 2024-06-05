/*
 * Last changed at upstream commit c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * https://github.com/espressif/esp-phy-lib/commit/c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * Upstream date: 2024-06-05 14:35:04 +0800
 * Upstream subject: update C6 H2 libphy for coex test ble 154 chan bug
 * Source: libbtbb -> bt_bb_v2.o -> ble_tx_config_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_tx_config_check(int param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = _DAT_600a08fc;
  uVar7 = _DAT_600a2010 >> 5 & 0xff;
  uVar5 = _DAT_600a2018 >> 3 & 0x1f;
  uVar6 = _DAT_600a1650 & 0xff;
  uVar1 = _DAT_600a2018 >> 0x13 & 0x1f;
  uVar4 = _DAT_600a20b8 >> 0xc;
  uVar8 = (uVar6 - (uVar7 + uVar5)) - uVar1;
  phy_printf("tx_cca_start_ts = %d\n",_DAT_600a20b8 >> 0x17 & 0xff);
  uVar4 = uVar4 & 0xff;
  phy_printf("tx_cca_end_ts   = %d\n",uVar4);
  phy_printf("bb_tx_on_delay  = %d\n",uVar7);
  phy_printf("rf_on_bt_delay  = %d\n",uVar2 >> 5 & 7);
  uVar2 = uVar2 >> 0xd & 7;
  phy_printf("pa_on_bt_delay  = %d\n",uVar2);
  phy_printf("tx_ramp_delay   = %d\n",uVar5);
  phy_printf("tx_rampup_delay = %d\n",uVar1);
  phy_printf("lc_tx_on_delay  = %d\n",uVar6);
  phy_printf("constant_DC_time= %d\n",uVar8);
  if (param_1 != 0) {
    if (uVar8 < 10) {
      pcVar3 = "FAIL:DC is too short\n";
    }
    else if (uVar7 < uVar4) {
      pcVar3 = "FAIL:CCA_END is too late\n";
    }
    else if (uVar1 < uVar2) {
      pcVar3 = "FAIL:PA_ON is too late\n";
    }
    else {
      pcVar3 = "PASS\n";
    }
    phy_printf(pcVar3);
    return;
  }
  return;
}

