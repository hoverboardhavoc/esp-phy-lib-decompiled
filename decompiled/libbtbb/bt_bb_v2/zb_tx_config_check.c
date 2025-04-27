/*
 * Last changed at upstream commit 5466bfa8fde26f45cb1f7fb5dc864cbb7e50e139
 * https://github.com/espressif/esp-phy-lib/commit/5466bfa8fde26f45cb1f7fb5dc864cbb7e50e139
 * Upstream date: 2025-04-27 17:15:29 +0800
 * Upstream subject: support c5 eco2 test
 * Source: libbtbb -> bt_bb_v2.o -> zb_tx_config_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_tx_config_check(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  
  uVar5 = _DAT_600a3114;
  uVar4 = _DAT_600a3110;
  uVar3 = _DAT_600a310c;
  uVar2 = _DAT_600a201c;
  uVar1 = _DAT_600a2010;
  uVar6 = _DAT_600a3104 & 0x3ff;
  phy_printf("read_zb_mactx_on_delay      = %d\n",uVar6);
  phy_printf("read_zb_macrx_on_delay      = %d\n",uVar4 & 0x7ff);
  phy_printf("read_zb_mactrx_switch_delay = %d\n",uVar5 & 0x3ff);
  phy_printf("read_zb_mac_txoff_delay     = %d\n",uVar3 & 0x3f);
  phy_printf("read_zb_bbtx_on_delay       = %d\n",uVar1 >> 0x18);
  phy_printf("read_zb_txramp_signal_sel   = %d\n",uVar2 & 3);
  if (uVar6 - (uVar1 >> 0x18) < 0xf) {
    pcVar7 = "FAIL:zb_bbtx_on too late\n";
  }
  else if ((uVar2 & 3) == 0) {
    pcVar7 = "PASS\n";
  }
  else {
    pcVar7 = "warning: NOTE TX spur!!!!!!!\n";
  }
  phy_printf(pcVar7);
  return;
}

