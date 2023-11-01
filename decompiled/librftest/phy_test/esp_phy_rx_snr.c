/*
 * Last changed at upstream commit a8e8b9532e2874ac167d4ade7808fda70fe05820
 * https://github.com/espressif/esp-phy-lib/commit/a8e8b9532e2874ac167d4ade7808fda70fe05820
 * Upstream date: 2023-11-01 14:13:34 +0800
 * Upstream subject: h2 libphy fix ble track
 * Source: librftest -> phy_test.o -> esp_phy_rx_snr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void esp_phy_rx_snr(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_70;
  undefined1 auStack_6c [8];
  int iStack_64;
  undefined1 auStack_60 [52];
  
  local_70 = 0x800080;
  rftest_open_clk();
  rf_init(0);
  set_rf_freq_offset(0,param_1,0);
  set_txclk_en(1);
  set_rxclk_en(1);
  start_tx_tone_step(1,0x40,0x28,0,0,0);
  pbus_debugmode();
  pbus_xpd_rx_on(0);
  pbus_force_test(0,1,0x157);
  uVar3 = 4;
  uVar2 = 7;
  do {
    pbus_force_test(1,2,(uVar2 & 0x3fff) << 2 | 0xc0);
    pbus_rx_dco_cal(0x800,&local_70,0);
    dc_iq_est(1,0x800,auStack_6c);
    if (iStack_64 - 0x24U < 0xd) {
      uVar3 = 0;
      break;
    }
    if (iStack_64 < 0x2f) {
      cVar1 = (char)uVar2 + '\x02';
    }
    else {
      cVar1 = (char)uVar2 + -2;
    }
    uVar3 = uVar3 - 1 & 0xff;
    uVar2 = (uint)cVar1;
  } while (uVar3 != 0);
  for (; iVar7 = param_2 + uVar3, iVar7 * 0x1000000 >> 0x18 < param_3; uVar3 = uVar3 + 1) {
    set_rf_freq_offset(0,param_1,iVar7 * 0x10000 >> 0x10);
    start_tx_tone_step(1,0x40,0,0,0,0);
    uVar4 = get_rxiq_pwr();
    iq_est_disable();
    iq_est_enable(1,0x1000);
    uVar5 = get_iq_est_snr(auStack_60,0xc,0,0x7fe53,0x7fe53);
    uVar6 = get_iq_est_snr(auStack_60,0xc,0,0x7fdaa,0x7fdaa);
    phy_printf("%d,%d,%d,%d\n",iVar7,uVar4,uVar5,uVar6);
  }
  pbus_xpd_rx_off();
  pbus_workmode();
  return;
}

