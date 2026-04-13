/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
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
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar8 = _DAT_2010201c;
  uVar3 = _DAT_20102014;
  uVar9 = _DAT_20101650;
  uVar1 = _DAT_20100870;
  uVar7 = _DAT_201020b8 >> 0xc;
  phy_printf("tx_cca_start_ts = %d\n",_DAT_201020b8 >> 0x17 & 0xff);
  uVar7 = uVar7 & 0xff;
  phy_printf("tx_cca_end_ts   = %d\n",uVar7);
  uVar2 = uVar3 >> 0x13 & 0xff;
  phy_printf("bb_tx_on_delay  = %d\n",uVar2);
  uVar6 = uVar3 >> 0xb & 0x1f;
  uVar8 = uVar8 >> 0x1b;
  uVar9 = uVar9 & 0xff;
  uVar10 = ((uVar9 - uVar2) - uVar6) - uVar8;
  uVar3 = (uVar1 >> 8 & 0xff) / 0x50;
  phy_printf("rf_on_bt_delay  = %d\n",(uVar1 & 0xff) / 0x50);
  phy_printf("pa_on_bt_delay  = %d\n",uVar3);
  phy_printf("tx_ramp_delay   = %d\n",uVar6);
  phy_printf("tx_rampup_delay = %d\n",uVar8);
  phy_printf("lc_tx_on_delay  = %d\n",uVar9);
  phy_printf("constant_DC_time= %d\n",uVar10);
  if (param_1 == 0) {
    return;
  }
  cVar5 = uVar10 < 10;
  if ((bool)cVar5) {
    phy_printf("FAIL:DC is too short\n");
  }
  if (uVar2 < uVar7) {
    cVar5 = cVar5 + '\x01';
    phy_printf("FAIL:CCA_END is too late\n");
  }
  if ((uVar2 - uVar9) + uVar8 + (uVar9 - uVar2) < uVar3) {
    pcVar4 = "FAIL:PA_ON is too late\n";
  }
  else {
    if (cVar5 != '\0') {
      return;
    }
    pcVar4 = "PASS\n";
  }
  phy_printf(pcVar4);
  return;
}

