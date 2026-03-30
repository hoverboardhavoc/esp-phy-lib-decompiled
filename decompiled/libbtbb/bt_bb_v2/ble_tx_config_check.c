/*
 * Last changed at upstream commit 3dad662616b80b89abed23f218fb8ef2222ceb63
 * https://github.com/espressif/esp-phy-lib/commit/3dad662616b80b89abed23f218fb8ef2222ceb63
 * Upstream date: 2026-03-30 10:56:56 +0800
 * Upstream subject: support h4eco1 libphy
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
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = _DAT_600c201c;
  uVar1 = _DAT_600c2014;
  uVar9 = _DAT_600c1650;
  uVar4 = _DAT_600c0870;
  uVar7 = _DAT_600c20b8 >> 0xc;
  phy_printf("tx_cca_start_ts = %d\n",_DAT_600c20b8 >> 0x17 & 0xff);
  uVar7 = uVar7 & 0xff;
  phy_printf("tx_cca_end_ts   = %d\n",uVar7);
  uVar2 = uVar1 >> 0x13 & 0xff;
  phy_printf("bb_tx_on_delay  = %d\n",uVar2);
  phy_printf("rf_on_bt_delay  = %d\n",uVar4 >> 5 & 7);
  uVar6 = uVar4 >> 0xd & 7;
  phy_printf("pa_on_bt_delay  = %d\n",uVar6);
  uVar4 = uVar1 >> 0xb & 0x1f;
  phy_printf("tx_ramp_delay   = %d\n",uVar4);
  uVar8 = uVar8 >> 0x1b;
  phy_printf("tx_rampup_delay = %d\n",uVar8);
  uVar9 = uVar9 & 0xff;
  phy_printf("lc_tx_on_delay  = %d\n",uVar9);
  uVar4 = ((uVar9 - uVar2) - uVar4) - uVar8;
  phy_printf("constant_DC_time= %d\n",uVar4);
  if (param_1 == 0) {
    return;
  }
  cVar3 = uVar4 < 10;
  if ((bool)cVar3) {
    phy_printf("FAIL:DC is too short\n");
  }
  if (uVar2 < uVar7) {
    cVar3 = cVar3 + '\x01';
    phy_printf("FAIL:CCA_END is too late\n");
  }
  if ((uVar2 - uVar9) + uVar8 + (uVar9 - uVar2) < uVar6) {
    pcVar5 = "FAIL:PA_ON is too late\n";
  }
  else {
    if (cVar3 != '\0') {
      return;
    }
    pcVar5 = "PASS\n";
  }
  phy_printf(pcVar5);
  return;
}

