/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> phy_test.o -> esp_phy_rxiq_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void esp_phy_rxiq_cal(undefined4 param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  char cVar4;
  uint uVar5;
  char cVar6;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  uStack_40 = 0x800080;
  rftest_open_clk();
  rf_init(0);
  set_rf_freq_offset(0,param_1,0);
  set_txclk_en(1);
  set_rxclk_en(1);
  start_tx_tone_step(1,0x40,0x28,0,0,0);
  pbus_debugmode();
  pbus_xpd_rx_on(0);
  pbus_force_test(0,1,0x167);
  cVar6 = '\x04';
  uVar5 = 7;
  do {
    uVar1 = (uVar5 & 0x3fff) << 2 | 0xc0;
    pbus_force_test(1,2,uVar1);
    pbus_rx_dco_cal(0x800,&uStack_40,0);
    dc_iq_est(1,0x800,&uStack_3c);
    if (param_4 != 0) {
      phy_printf("%x,%x,%d,%d,%d\n",0x167,uVar1,uStack_3c,uStack_38,iStack_34);
    }
    if (iStack_34 - 0x24U < 0xd) break;
    if (iStack_34 < 0x2f) {
      cVar4 = (char)uVar5 + '\x02';
    }
    else {
      cVar4 = (char)uVar5 + -2;
    }
    cVar6 = cVar6 + -1;
    uVar5 = (uint)cVar4;
  } while (cVar6 != '\0');
  uVar3 = rxiq_cal_test(&uStack_44,param_4);
  *(undefined2 *)(param_2 + 0xc) = uVar3;
  *(char *)(param_2 + 10) = (char)iStack_34;
  *(char *)(param_2 + 9) = (char)uVar5;
  uVar2 = get_data_sat(uStack_3c,100,0xffffff9c);
  *(undefined1 *)(param_2 + 0xe) = uVar2;
  uVar2 = get_data_sat(uStack_38,100,0xffffff9c);
  *(undefined1 *)(param_2 + 0xf) = uVar2;
  *(undefined1 *)(param_2 + 5) = uStack_44;
  *(undefined1 *)(param_2 + 6) = uStack_43;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined1 *)(param_2 + 8) = 0;
  if (param_4 != 0) {
    phy_printf("rxiq:%d,%d,vga=%d,sig=%d,iqpwr=%d,dc=%d,%d\n",*(undefined1 *)(param_2 + 9),
               *(undefined1 *)(param_2 + 10),*(undefined2 *)(param_2 + 0xc),
               (int)*(char *)(param_2 + 0xe));
  }
  if (param_3 != 0) {
    pbus_xpd_rx_off();
    pbus_workmode();
  }
  return;
}

