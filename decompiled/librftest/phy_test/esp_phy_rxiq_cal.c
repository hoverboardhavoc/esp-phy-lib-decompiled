/*
 * Last changed at upstream commit 98617ae683c7456706c7de6e27b7f0355c77dc9b
 * https://github.com/espressif/esp-phy-lib/commit/98617ae683c7456706c7de6e27b7f0355c77dc9b
 * Upstream date: 2023-12-29 17:32:23 +0800
 * Upstream subject: fix h2 crash at pos rssi bug
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
  undefined2 uVar4;
  undefined2 uVar5;
  char cVar6;
  uint uVar7;
  char cVar8;
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
  cVar8 = '\x04';
  uVar7 = 7;
  do {
    uVar1 = (uVar7 & 0x3fff) << 2 | 0xc0;
    pbus_force_test(1,2,uVar1);
    pbus_rx_dco_cal(0x800,&uStack_40,0);
    dc_iq_est(1,0x800,&uStack_3c);
    if (param_4 != 0) {
      phy_printf("%x,%x,%d,%d,%d\n",0x167,uVar1,uStack_3c,uStack_38,iStack_34);
    }
    if (iStack_34 - 0x24U < 0xd) break;
    if (iStack_34 < 0x2f) {
      cVar6 = (char)uVar7 + '\x02';
    }
    else {
      cVar6 = (char)uVar7 + -2;
    }
    cVar8 = cVar8 + -1;
    uVar7 = (uint)cVar6;
  } while (cVar8 != '\0');
  uVar3 = esp_phy_freq_cal(param_1,0);
  uVar4 = rxiq_cal_test(&uStack_44,param_4);
  uVar5 = get_rxiq_remain();
  *(char *)(param_2 + 0xb) = (char)uVar4;
  *(char *)(param_2 + 0xc) = (char)((ushort)uVar4 >> 8);
  *(undefined1 *)(param_2 + 10) = (undefined1)iStack_34;
  *(char *)(param_2 + 9) = (char)uVar7;
  uVar2 = get_data_sat(uStack_3c,100,0xffffff9c);
  *(undefined1 *)(param_2 + 0xd) = uVar2;
  uVar2 = get_data_sat(uStack_38,100,0xffffff9c);
  *(char *)(param_2 + 0xf) = (char)uVar5;
  *(char *)(param_2 + 0x10) = (char)((ushort)uVar5 >> 8);
  *(char *)(param_2 + 0x11) = (char)uVar3;
  *(undefined1 *)(param_2 + 0xe) = uVar2;
  *(undefined1 *)(param_2 + 5) = uStack_44;
  *(undefined1 *)(param_2 + 6) = uStack_43;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined1 *)(param_2 + 8) = 0;
  *(char *)(param_2 + 0x12) = (char)((ushort)uVar3 >> 8);
  if (param_4 != 0) {
    phy_printf("rxiq:%d,%d,vga=%d,sig=%d,iqpwr=%d,dc=%d,%d,rxiq_remain=%d,offset=%d\n",
               *(undefined1 *)(param_2 + 9),*(undefined1 *)(param_2 + 10),
               *(undefined2 *)(param_2 + 0xb),(int)*(char *)(param_2 + 0xd));
  }
  if (param_3 != 0) {
    start_tx_tone_step(0,0x40,0x28,0,0,0);
    pbus_xpd_rx_off();
    pbus_workmode();
  }
  return;
}

