/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librfate -> ate_test.o -> rx_gain_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rx_gain_check(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte local_64 [8];
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  short local_50 [4];
  short local_48 [4];
  short local_40 [4];
  undefined2 local_38 [4];
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  local_58 = 0x1570147;
  uStack_54 = 0x1770167;
  local_64[0] = 0x23;
  local_64[1] = 0x2d;
  local_64[2] = 0x2c;
  local_64[3] = 0x2c;
  local_64[4] = 0xf;
  local_64[5] = 0xf;
  local_64[6] = 7;
  local_64[7] = 4;
  uStack_5c = 0x800080;
  set_rf_freq_offset(0,param_1,param_2);
  force_iq_set(1,0,(int)(char)read_pll_cap,(int)DAT_00012061);
  set_txclk_en(1);
  set_rxclk_en(1);
  start_tx_tone_step(1,0x40,0,0,0,0);
  pbus_debugmode();
  pbus_xpd_rx_on(0);
  iVar1 = 0;
  pbVar4 = local_64 + 4;
  do {
    pbus_force_test(0,1,*(undefined2 *)((int)&local_58 + iVar1));
    pbus_force_test(1,2,(uint)*pbVar4 << 2 | 0xc0);
    pbus_rx_dco_cal(0x800,&uStack_5c,0);
    get_corr_power(&uStack_30,0xc,0);
    pbVar4 = pbVar4 + 1;
    iVar2 = linear_to_db(uStack_30,0);
    *(short *)((int)local_50 + iVar1) = (short)(iVar2 + 8 >> 4);
    iVar2 = linear_to_db(uStack_24,0);
    *(short *)((int)local_48 + iVar1) = (short)(iVar2 + 8 >> 4);
    iVar2 = linear_to_db(iStack_2c + iStack_28,0);
    *(short *)((int)local_40 + iVar1) = (short)(iVar2 + 8 >> 4);
    iVar2 = linear_to_db(iStack_28,0);
    iVar3 = linear_to_db(iStack_2c,0);
    *(short *)((int)local_38 + iVar1) = (short)((iVar2 - iVar3) + 8 >> 4);
    iVar1 = iVar1 + 2;
  } while (iVar1 != 8);
  stop_tx_tone(0);
  pbus_xpd_rx_on(0);
  pbus_workmode();
  set_txclk_en(0);
  force_iq_set(0,0,0,0);
  iVar1 = 0;
  do {
    if (param_3 != 0) {
      phy_printf("rx_gain_data_%d: rfrx1=0x%x, bbgain=%d, tot_pwr=%d, sig_pwr=%d, dc_pwr=%d, sw_g=%d, rxiq=%d\n"
                 ,iVar1,*(undefined2 *)((int)&local_58 + iVar1 * 2),(local_64 + 4)[iVar1],
                 (int)local_40[iVar1],(int)local_48[iVar1],
                 (int)(((int)local_50[iVar1] - (uint)local_64[iVar1]) * 0x1000000) >> 0x18);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  return;
}

