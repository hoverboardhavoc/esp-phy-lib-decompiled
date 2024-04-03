/*
 * Last changed at upstream commit c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * https://github.com/espressif/esp-phy-lib/commit/c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * Upstream date: 2024-04-03 16:53:14 +0800
 * Upstream subject: fix coex test wifi affect ble s8 tx problm, and c3 s3 light sleep current opt, and c3 s3 ble rx problem
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
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = _DAT_600a08fc;
  uVar8 = _DAT_600a2010 >> 5 & 0xff;
  uVar5 = _DAT_600a2018 >> 3 & 0x1f;
  uVar7 = _DAT_600a1650 & 0xff;
  uVar3 = _DAT_600a2018 >> 0x13 & 0x1f;
  uVar9 = (uVar7 - (uVar8 + uVar5)) - uVar3;
  uVar6 = _DAT_600a20b8 >> 0xc;
  phy_printf("tx_cca_start_ts = %d\n",_DAT_600a20b8 >> 0x17 & 0xff);
  uVar6 = uVar6 & 0xff;
  phy_printf("tx_cca_end_ts   = %d\n",uVar6);
  phy_printf("bb_tx_on_delay  = %d\n",uVar8);
  uVar2 = (uVar1 >> 8 & 0xff) / 0x50;
  phy_printf("rf_on_bt_delay  = %d\n",(uVar1 & 0xff) / 0x50);
  phy_printf("pa_on_bt_delay  = %d\n",uVar2);
  phy_printf("tx_ramp_delay   = %d\n",uVar5);
  phy_printf("tx_rampup_delay = %d\n",uVar3);
  phy_printf("lc_tx_on_delay  = %d\n",uVar7);
  phy_printf("constant_DC_time= %d\n",uVar9);
  if (param_1 != 0) {
    if (uVar9 < 10) {
      pcVar4 = "FAIL:DC is too short\n";
    }
    else if (uVar8 < uVar6) {
      pcVar4 = "FAIL:CCA_END is too late\n";
    }
    else if (uVar3 < uVar2) {
      pcVar4 = "FAIL:PA_ON is too late\n";
    }
    else {
      pcVar4 = "PASS\n";
    }
    phy_printf(pcVar4);
    return;
  }
  return;
}

