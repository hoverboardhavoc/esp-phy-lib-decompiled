/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
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
  ets_printf("tx_cca_start_ts = %d\n",_DAT_600c20b8 >> 0x17 & 0xff);
  uVar7 = uVar7 & 0xff;
  ets_printf("tx_cca_end_ts   = %d\n",uVar7);
  uVar2 = uVar1 >> 0x13 & 0xff;
  ets_printf("bb_tx_on_delay  = %d\n",uVar2);
  ets_printf("rf_on_bt_delay  = %d\n",uVar4 >> 5 & 7);
  uVar6 = uVar4 >> 0xd & 7;
  ets_printf("pa_on_bt_delay  = %d\n",uVar6);
  uVar4 = uVar1 >> 0xb & 0x1f;
  ets_printf("tx_ramp_delay   = %d\n",uVar4);
  uVar8 = uVar8 >> 0x1b;
  ets_printf("tx_rampup_delay = %d\n",uVar8);
  uVar9 = uVar9 & 0xff;
  ets_printf("lc_tx_on_delay  = %d\n",uVar9);
  uVar4 = ((uVar9 - uVar2) - uVar4) - uVar8;
  ets_printf("constant_DC_time= %d\n",uVar4);
  if (param_1 == 0) {
    return;
  }
  cVar3 = uVar4 < 10;
  if ((bool)cVar3) {
    ets_printf("FAIL:DC is too short\n");
  }
  if (uVar2 < uVar7) {
    cVar3 = cVar3 + '\x01';
    ets_printf("FAIL:CCA_END is too late\n");
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
  ets_printf(pcVar5);
  return;
}

