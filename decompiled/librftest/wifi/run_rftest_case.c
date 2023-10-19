/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> run_rftest_case
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 run_rftest_case(char *param_1,uint *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  run_para_array_clear(param_2,param_3);
  iVar3 = strcmp(param_1,"WifiTxStart");
  if (iVar3 == 0) {
    if (0 < (int)param_2[1]) {
      return 1;
    }
    phy_printf("wifi tx out: 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x\n",*param_2,param_2[2],param_2[3],
               param_2[4],param_2[5]);
    return 1;
  }
  iVar3 = strcmp(param_1,"tx_cbw40m_en");
  if (iVar3 == 0) {
    tx_cbw40m_en = (undefined1)*param_2;
    phy_printf("%s: %d\n",param_1,*param_2 & 0xff);
    return 1;
  }
  iVar3 = strcmp(param_1,"cbw40m_en");
  if (iVar3 == 0) {
    cbw40m_en((char)*param_2);
    return 1;
  }
  iVar3 = strcmp(param_1,"short_gi_enable");
  if (iVar3 == 0) {
    short_gi_enable = *param_2;
    phy_printf("%s=%d\n",param_1);
    return 1;
  }
  iVar3 = strcmp(param_1,"tx_contin_en");
  if (iVar3 == 0) {
    tx_contin_en((char)*param_2);
    return 1;
  }
  iVar3 = strcmp(param_1,"wifiscwout");
  if (iVar3 == 0) {
    wifiscwout(param_2);
    return 1;
  }
  iVar3 = strcmp(param_1,"rd");
  if (iVar3 == 0) {
    phy_printf("0x%x\n",*(undefined4 *)*param_2);
    return 1;
  }
  iVar3 = strcmp(param_1,"rd_dport");
  if (iVar3 == 0) {
    phy_printf("0x%x\n",*(undefined4 *)*param_2);
    return 1;
  }
  iVar3 = strcmp(param_1,"wr_dport");
  if (iVar3 == 0) {
    *(uint *)*param_2 = param_2[1];
    phy_printf("0x%x\n",*(undefined4 *)*param_2);
    return 1;
  }
  iVar3 = strcmp(param_1,"wr");
  if (iVar3 == 0) {
    *(uint *)*param_2 = param_2[1];
    phy_printf("0x%x\n",*(undefined4 *)*param_2);
    return 1;
  }
  iVar3 = strcmp(param_1,"rftest_init");
  if (iVar3 == 0) {
    rftest_init();
    return 1;
  }
  iVar3 = strcmp(param_1,"phy_close_rf");
  if (iVar3 == 0) {
    phy_close_rf();
    phy_printf(&_LC60,param_1);
    return 1;
  }
  iVar3 = strcmp(param_1,"RF_init_sel");
  if (iVar3 == 0) {
    RF_init_sel((char)*param_2,param_2[1]);
    return 1;
  }
  iVar3 = strcmp(param_1,"RdMem");
  if (iVar3 == 0) {
    for (puVar2 = (undefined4 *)*param_2; puVar2 < (undefined4 *)(*param_2 + param_2[1]);
        puVar2 = puVar2 + 1) {
      phy_printf("0x%x ",*puVar2);
    }
_L432:
    phy_printf(&_LC11);
  }
  else {
    iVar3 = strcmp(param_1,"sm");
    if (iVar3 == 0) {
      *(uint *)*param_2 = *(uint *)*param_2 | param_2[1];
      phy_printf("reg 0x%x readback is 0x%x\n",*(undefined4 *)*param_2);
      return 1;
    }
    iVar3 = strcmp(param_1,"cm");
    if (iVar3 == 0) {
      *(uint *)*param_2 = ~param_2[1] & *(uint *)*param_2;
      phy_printf("reg 0x%x readback is 0x%x\n",*(undefined4 *)*param_2);
      return 1;
    }
    iVar3 = strcmp(param_1,"gb");
    if (iVar3 == 0) {
      phy_printf("0x%x\n",*(uint *)*param_2 >> (param_2[2] & 0x1f) &
                          (1 << ((param_2[1] - param_2[2]) + 1 & 0x1f)) - 1U);
      return 1;
    }
    iVar3 = strcmp(param_1,"ri");
    if (iVar3 == 0) {
      uVar4 = i2c_readReg((char)*param_2,(char)param_2[1],(char)param_2[2]);
      phy_printf("0x%x\n",uVar4);
      return 1;
    }
    iVar3 = strcmp(param_1,"wi");
    if (iVar3 == 0) {
      i2c_writeReg((char)*param_2,(char)param_2[1],(char)param_2[2],(char)param_2[3]);
      phy_printf(&_LC60,param_1);
      return 1;
    }
    iVar3 = strcmp(param_1,"wim");
    if (iVar3 == 0) {
      i2c_writeReg_Mask((char)*param_2,(char)param_2[1],(char)param_2[2],(char)param_2[3],
                        (char)param_2[4],(char)param_2[5]);
      phy_printf(&_LC60,param_1);
      return 1;
    }
    iVar3 = strcmp(param_1,"rim");
    if (iVar3 == 0) {
      uVar4 = i2c_readReg_Mask((char)*param_2,(char)param_2[1],(char)param_2[2],(char)param_2[3],
                               (char)param_2[4]);
      phy_printf("0x%x\n",uVar4);
      return 1;
    }
    iVar3 = strcmp(param_1,"pbus_debugmode");
    if (iVar3 == 0) {
      pbus_debugmode();
      phy_printf(&_LC60,param_1);
      return 1;
    }
    iVar3 = strcmp(param_1,"pbus_workmode");
    if (iVar3 == 0) {
      pbus_workmode();
      phy_printf(&_LC60,param_1);
      return 1;
    }
    iVar3 = strcmp(param_1,"pbus");
    if (iVar3 == 0) {
      pbus_force_test((char)*param_2,(char)param_2[1],(short)param_2[2]);
      phy_printf(&_LC60,param_1);
      return 1;
    }
    iVar3 = strcmp(param_1,"pbus_rd");
    if (iVar3 == 0) {
      uVar4 = pbus_rd((char)*param_2,(char)param_2[1]);
      phy_printf("0x%x\n",uVar4);
      return 1;
    }
    iVar3 = strcmp(param_1,"txtone");
    if (iVar3 == 0) {
      txtone_enable = *param_2 != 0 || param_2[3] != 0;
      start_tx_tone(param_2[1],param_2[2],param_2[4],param_2[5]);
      phy_printf(&_LC60,param_1);
      return 1;
    }
    iVar3 = strcmp(param_1,"txtone_step");
    if (iVar3 == 0) {
      txtone_enable = *param_2 != 0 || param_2[3] != 0;
      start_tx_tone_step(*param_2 & 0xff,(int)(short)param_2[1],(char)param_2[2],param_2[3] & 0xff,
                         (int)(short)param_2[4],(char)param_2[5]);
      phy_printf(&_LC60,param_1);
      return 1;
    }
    iVar3 = strcmp(param_1,"stoptone");
    if (iVar3 == 0) {
      txtone_enable = 0;
      stop_tx_tone(*param_2);
      phy_printf(&_LC60,param_1);
      return 1;
    }
    iVar3 = strcmp(param_1,"adctrig");
    if (iVar3 == 0) {
      bt_adctrig(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_2[6],
                 param_2[7]);
      phy_printf(&_LC60,param_1);
      return 1;
    }
    iVar3 = strcmp(param_1,"init_para_chg");
    if (iVar3 == 0) {
      if (*param_2 == 1) {
        init_param_default[param_2[1]] = (char)param_2[2];
      }
      register_chipv7_phy_init_param(init_param_default);
      phy_printf("%s[%d]=0x%x\n",param_1,init_param_default[param_2[1]]);
      return 1;
    }
    iVar3 = strcmp(param_1,"bb_init");
    if (iVar3 == 0) {
      _phy_param = 0;
      bb_init();
      phy_printf(&_LC60,param_1);
      return 1;
    }
    iVar3 = strcmp(param_1,"rxdc_cal");
    if (iVar3 == 0) {
      local_30 = 0x800080;
      set_rxclk_en(1);
      set_txclk_en(1);
      pbus_rx_dco_cal(0x1000,&local_30,1);
      phy_printf("%d, %d, %d, %d\n",(int)(short)local_30,(int)local_30._2_2_);
      return 1;
    }
    iVar3 = strcmp(param_1,"phy_set_freq");
    if (iVar3 == 0) {
      uVar7 = *param_2;
      uVar6 = param_2[1];
      phy_set_freq(uVar7 & 0xffff,(int)(short)uVar6);
      phy_printf("%s, freq=%d, freq_offset=%d\n",param_1,uVar7 & 0xffff,(int)(short)uVar6);
      return 1;
    }
    iVar3 = strcmp(param_1,"RFChannelSel");
    if (iVar3 == 0) {
      iVar3 = phy_time_now();
      rftest_set_chan((short)*param_2,(char)param_2[1]);
      uVar6 = *param_2;
      uVar7 = param_2[1];
      iVar5 = phy_time_now();
      phy_printf(" %s %d %d, %dus\n",param_1,uVar6,uVar7,iVar5 - iVar3);
      return 1;
    }
    iVar3 = strcmp(param_1,"set_chan");
    if (iVar3 == 0) {
      chip_v7_set_chan((short)*param_2,(int)(char)param_2[1]);
      phy_printf("%s %d %d\n",param_1,*param_2,param_2[1]);
      return 1;
    }
    iVar3 = strcmp(param_1,"target_power_backoff");
    if (iVar3 == 0) {
      target_power_backoff((int)(char)*param_2);
      phy_printf("%s %d dB set ok!\n",param_1,*param_2);
      return 1;
    }
    iVar3 = strcmp(param_1,"set_tx_gain");
    if (iVar3 == 0) {
      _phy_param = CONCAT31(phy_param_1,1);
      tx_pa_bb_gain = (short)*param_2;
      DAT_00013eba = (short)param_2[1];
      force_tx_gain((int)(char)param_2[2],(char)param_2[3]);
      phy_printf("%s, 0x%x,0x%x,%d\n",param_1,*param_2,param_2[1],(int)(char)param_2[2],param_2[3]);
      return 1;
    }
    iVar3 = strcmp(param_1,"set_ble_tx_gain");
    if (iVar3 == 0) {
      _phy_param = CONCAT31(phy_param_1,1);
      tx_pa_bb_gain = (short)*param_2;
      DAT_00013eba = (short)param_2[1];
      force_tx_gain((int)(char)param_2[2],(char)param_2[3]);
      phy_printf("%s, 0x%x,0x%x,%d\n",param_1,*param_2,param_2[1],(int)(char)param_2[2]);
      return 1;
    }
    iVar3 = strcmp(param_1,"tx_gain_print");
    if (iVar3 == 0) {
      bt_set_tx_gain(1);
      phy_printf(&_LC60,param_1);
      return 1;
    }
    iVar3 = strcmp(param_1,"check_noise_floor");
    if (iVar3 == 0) {
      check_noise_floor();
      phy_printf(&_LC98,CONCAT11(DAT_60012396,DAT_60012395) | 0xfffffc00,DAT_60012397,DAT_60012398);
      return 1;
    }
    iVar3 = strcmp(param_1,"accumiq");
    if (iVar3 == 0) {
      accumiq(*param_2,param_2[1]);
      return 1;
    }
    iVar3 = strcmp(param_1,"phy_init");
    if (iVar3 == 0) {
      phy_init();
      phy_printf(&_LC60,param_1);
      return 1;
    }
    iVar3 = strcmp(param_1,"set_chan_offset");
    if (iVar3 == 0) {
      uVar6 = *param_2;
      chip_v7_set_chan_offset((int)(short)uVar6);
      phy_printf("freq: %d %dkhz %d\n",*param_2,(int)(short)uVar6,(int)_phy_param);
      return 1;
    }
    iVar3 = strcmp(param_1,"rf_init");
    if (iVar3 == 0) {
      _phy_param = 0;
      rf_init(1);
      phy_printf(&_LC60,param_1);
      return 1;
    }
    iVar3 = strcmp(param_1,"esp_origin_mac");
    if (iVar3 == 0) {
      esp_origin_mac();
      return 1;
    }
    iVar3 = strcmp(param_1,"print_ver");
    if (iVar3 == 0) {
      phy_printf("phy_version: %d.%d, %s, %s\n",2,0xb,"Oct 12 2023","11:16:25");
      return 1;
    }
    iVar3 = strcmp(param_1,"init_print");
    if (iVar3 == 0) {
      module_test_cal_print();
      phy_printf("print end\n");
      return 1;
    }
    iVar3 = strcmp(param_1,"get_rx_buffer");
    if (iVar3 == 0) {
      phy_printf("%s: %d, 0x%x\n",param_1,*param_2,param_2[1]);
      get_rx_buffer((char)*param_2,param_2[1]);
      phy_printf(&_LC11);
      return 1;
    }
    iVar3 = strcmp(param_1,"dig_11b_filter_sel");
    uVar1 = DAT_60012348;
    if (iVar3 == 0) {
      uVar6 = CONCAT13(DAT_60012348,CONCAT12(DAT_60012347,CONCAT11(DAT_60012346,DAT_60012345))) &
              0xffff9fff;
      DAT_60012346 = (byte)(((*param_2 & 3) << 0xd) >> 8) | (byte)(uVar6 >> 8);
      DAT_60012345 = (undefined1)uVar6;
      DAT_60012347 = (undefined1)(uVar6 >> 0x10);
      DAT_60012348 = (undefined1)(uVar6 >> 0x18);
      phy_printf("%s: %d\n",param_1,*param_2,uVar1);
      return 1;
    }
    iVar3 = strcmp(param_1,"test_txtone_pwr");
    if (iVar3 == 0) {
      test_txtone_pwr(*param_2,param_2[1],param_2[2],(int)(short)param_2[3]);
      phy_printf(&_LC11);
      return 1;
    }
    iVar3 = strcmp(param_1,"txpwr_track_en");
    if (iVar3 == 0) {
      DAT_00015091 = (undefined1)*param_2;
      DAT_0001508f = (undefined1)param_2[2];
      phy_printf("%s: track_en=%d, correct_en=%d, print_en=%d\n",param_1,*param_2 & 0xff,
                 phy_tx_pwr_print_en);
      return 1;
    }
    iVar3 = strcmp(param_1,"set_pbus_mem");
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = strcmp(param_1,"pll_cap_track_en");
    if (iVar3 == 0) {
      _phy_param = CONCAT31(phy_param_1,(char)*param_2);
      phy_printf("%s %d\n",param_1,*param_2);
      return 1;
    }
    iVar3 = strcmp(param_1,"burn_in_test");
    if (iVar3 == 0) {
      burn_in_test();
      phy_printf(&_LC60,param_1);
      return 1;
    }
    iVar3 = strcmp(param_1,"get_pll_vol");
    if (iVar3 == 0) {
      uVar4 = get_pll_vol(1);
      phy_printf(&_LC98,uVar4);
      return 1;
    }
    iVar3 = strcmp(param_1,"phy_get_vdd33");
    if (iVar3 == 0) {
      uVar4 = phy_get_vdd33();
      phy_printf(&_LC98,uVar4);
      return 1;
    }
    iVar3 = strcmp(param_1,"pll_cap_print_en");
    if (iVar3 == 0) {
      _phy_param = CONCAT31(phy_param_1,(char)*param_2);
      phy_printf("%s %d\n",param_1,*param_2 & 0xff);
      return 1;
    }
    iVar3 = strcmp(param_1,"set_freq_time");
    if (iVar3 == 0) {
      iVar3 = phy_time_now();
      i2c_writeReg(0x62,1,1,100);
      set_rf_freq_offset(_phy_param & 0xff,(short)*param_2,0);
      uVar6 = *param_2;
      iVar5 = phy_time_now();
      phy_printf("%s, %d, %d\n",param_1,uVar6,iVar5 - iVar3);
      return 1;
    }
    iVar3 = strcmp(param_1,"test_i2c_time");
    if (iVar3 == 0) {
      test_i2c_time((char)*param_2);
      return 1;
    }
    iVar3 = strcmp(param_1,"i2c_clk_sel");
    if (iVar3 == 0) {
      i2c_clk_sel((char)*param_2);
      phy_printf("%s,%d\n",param_1,*param_2);
      return 1;
    }
    iVar3 = strcmp(param_1,"rc_cal");
    if (iVar3 == 0) {
      i2c_rc_set_reg((char)*param_2,(char)param_2[1],(char)param_2[2]);
      uVar4 = get_rc_dout();
      phy_printf("%d,%d,%d,%d\n",uVar4,*param_2,param_2[1],param_2[2]);
      return 1;
    }
    iVar3 = strcmp(param_1,"tx_cap_init");
    if (iVar3 == 0) {
      _phy_param = 0;
      tx_cap_init();
      phy_printf(&_LC60,param_1);
      return 1;
    }
    iVar3 = strcmp(param_1,"tx_pwctrl_init");
    if (iVar3 == 0) {
      _phy_param = 0;
      bt_tx_pwctrl_init();
      phy_printf(&_LC60,param_1);
      return 1;
    }
    iVar3 = strcmp(param_1,"test_rxgain_table");
    if (iVar3 == 0) {
      _phy_param = 0;
      set_rx_gain_table(0x985,(char)*param_2);
      phy_printf("%s %d\n",param_1,*param_2);
      return 1;
    }
    iVar3 = strcmp(param_1,"get_sar2_vol");
    if (iVar3 == 0) {
      uVar4 = get_sar2_vol((char)*param_2);
      phy_printf(&_LC98,uVar4);
      return 1;
    }
    iVar3 = strcmp(param_1,"read_sar2_code");
    if (iVar3 == 0) {
      uVar4 = read_sar2_code();
      phy_printf(&_LC98,uVar4);
      return 1;
    }
    iVar3 = strcmp(param_1,"test_rf_cal_level");
    if (iVar3 == 0) {
      test_rf_cal_level((char)*param_2,param_2[1]);
      phy_printf("%s %d done,flash_addr 0x%x\n",param_1,*param_2,param_2[1]);
      return 1;
    }
    iVar3 = strcmp(param_1,"rf_cal_data_clear");
    if (iVar3 == 0) {
      rf_cal_data_clear();
      phy_printf(&_LC60,param_1);
      return 1;
    }
    iVar3 = strcmp(param_1,"meas_tone_pwr_db");
    if (iVar3 == 0) {
      uVar4 = meas_tone_pwr_db((int)(char)*param_2,(int)(short)param_2[1],(short)param_2[2]);
      phy_printf(&_LC98,uVar4);
      return 1;
    }
    iVar3 = strcmp(param_1,"phy_wakeup_init");
    if (iVar3 == 0) {
      iVar3 = phy_time_now();
      phy_wakeup_init();
      iVar5 = phy_time_now();
      phy_printf("%s %dus\n",param_1,iVar5 - iVar3);
      return 1;
    }
    iVar3 = strcmp(param_1,"phy_test_init");
    if (iVar3 == 0) {
      phy_test_init();
      phy_printf(&_LC60,param_1);
      return 1;
    }
    iVar3 = strcmp(param_1,"rfpll_cal_time");
    if (iVar3 == 0) {
      rfpll_cal_time((char)*param_2,(char)param_2[1]);
      phy_printf("%s: %d, %d\n",param_1,*param_2,param_2[1]);
      return 1;
    }
    iVar3 = strcmp(param_1,"force_txtone");
    if (iVar3 == 0) {
      force_txtone(*param_2,param_2[1]);
      phy_printf("%s atten=%d, delay_us=%d\n",param_1,*param_2,param_2[1]);
      return 1;
    }
    iVar3 = strcmp(param_1,"set_rx_sense");
    if (iVar3 == 0) {
      adaptive_test_en = 1;
      uVar6 = *param_2;
      set_rx_sense((int)(char)uVar6);
      phy_printf("%s %d\n",param_1,(int)(char)uVar6);
      return 1;
    }
    iVar3 = strcmp(param_1,"close_peri");
    if (iVar3 == 0) {
      close_peri();
      phy_printf(&_LC60,param_1);
      return 1;
    }
    iVar3 = strcmp(param_1,"regulator_slt");
    if ((iVar3 != 0) && (iVar3 = strcmp(param_1,"clk10m_enable"), iVar3 != 0)) {
      iVar3 = strcmp(param_1,"get_tone_sar_dout");
      if (iVar3 == 0) {
        uVar4 = get_tone_sar_dout((char)*param_2);
        phy_printf(&_LC98,uVar4);
        return 1;
      }
      iVar3 = strcmp(param_1,"get_power_db");
      if (iVar3 == 0) {
        uVar4 = get_power_db(0x90);
        phy_printf("%s %d\n",param_1,uVar4);
        return 1;
      }
      iVar3 = strcmp(param_1,"pwdet_code_cal");
      if (iVar3 == 0) {
        pwdet_code_cal();
        phy_printf(&_LC60,param_1);
        return 1;
      }
      iVar3 = strcmp(param_1,"temp_read");
      if (iVar3 == 0) {
        uVar4 = tsens_temp_read();
        phy_printf("temp=%d, init_temp=%d\n",uVar4,(int)_phy_param);
        return 1;
      }
      iVar3 = strcmp(param_1,"uart1_sel");
      if (iVar3 != 0) {
        iVar3 = strcmp(param_1,"btpwr_track_en");
        if (iVar3 == 0) {
          phy_bt_power_track((char)*param_2);
          phy_printf("%s %d\n",param_1,_phy_param & 0xff);
          return 1;
        }
        iVar3 = strcmp(param_1,"rx_gain_comp");
        if (iVar3 != 0) {
          iVar3 = strcmp(param_1,"set_noise_floor");
          if (iVar3 == 0) {
            iVar3 = (int)(*param_2 * -0x10000) >> 0x10;
            set_noise_floor(iVar3);
            phy_printf("%s %d\n",param_1,iVar3);
            return 1;
          }
          iVar3 = strcmp(param_1,"get_iq_est_pwr");
          if (iVar3 == 0) {
            uVar4 = get_iq_est_pwr();
            phy_printf(&_LC159,uVar4);
            return 1;
          }
          iVar3 = strcmp(param_1,"dc_iq_est");
          if (iVar3 == 0) {
            dc_iq_est_test(1,(short)*param_2,&uStack_3c,&local_30);
            phy_printf("%d,%d,%d,%d,%d,%d,%s\n",uStack_3c,uStack_38,uStack_34,local_30,uStack_2c,
                       uStack_28,param_1);
            return 1;
          }
          iVar3 = strcmp(param_1,"bt_pll_track_en");
          if (iVar3 != 0) {
            iVar3 = strcmp(param_1,"freq_mem_backup");
            if (iVar3 == 0) {
              phy_printf("%s, %d 0x%x\n",param_1,*param_2,0x40820000);
              phy_freq_mem_backup((char)*param_2,0x40820000);
              return 1;
            }
            iVar3 = strcmp(param_1,"set_tx_power");
            if (iVar3 != 0) {
              iVar3 = strcmp(param_1,"bt_tx_pwctrl_init");
              if (iVar3 == 0) {
                _rtc_reset_cause = _rtc_reset_cause & 0xffff7fff;
                bt_tx_pwctrl_init();
                phy_printf(&_LC60,param_1);
                return 1;
              }
              iVar3 = strcmp(param_1,"esp_en_reboot");
              if (iVar3 == 0) {
                esp_en_reboot();
                return 1;
              }
              iVar3 = strcmp(param_1,"le_master_test");
              if (iVar3 == 0) {
                uStack_50 = 0;
                uStack_4c = 0;
                uStack_48 = 0;
                uStack_44 = 0;
                uStack_40 = 0;
                uStack_3c = 0;
                local_30 = 0;
                le_master_test((char)*param_2,param_2[1] + 1 & 0xff,(char)param_2[2],
                               (short)param_2[3],param_2[4],&uStack_50,&uStack_4c,&uStack_48);
                phy_printf("le_txrx_num: %d, %d, %d,",uStack_50,uStack_48,uStack_44);
                phy_printf("le_rssi: avg=%d, max=%d, min=%d\n",uStack_40,uStack_3c,local_30);
                phy_printf("%s %d, %d, %d, %d, %d\n",param_1,*param_2,param_2[1],param_2[2],
                           param_2[3],param_2[4]);
                return 1;
              }
              iVar3 = strcmp(param_1,"le_slave_test");
              if (iVar3 == 0) {
                phy_printf("%s %d, %d, %d, %d\n",param_1,*param_2,param_2[1],param_2[2],param_2[3]);
                le_slave_test((char)*param_2,param_2[1] + 1 & 0xff,(char)param_2[2],param_2[3]);
                return 1;
              }
              iVar3 = strcmp(param_1,"zb_master_test");
              if (iVar3 == 0) {
                uStack_50 = 0;
                uStack_4c = 0;
                uStack_48 = 0;
                uStack_44 = 0;
                uStack_40 = 0;
                uStack_3c = 0;
                local_30 = 0;
                zb_master_test(*param_2,param_2[1],param_2[2],param_2[3],(char)param_2[4],&uStack_50
                               ,&uStack_4c,&uStack_48);
                phy_printf("zb_txrx_num: %d, %d, ",uStack_50,uStack_48);
                phy_printf("zb_rssi: avg=%d, max=%d, min=%d\n",uStack_40,uStack_3c,local_30);
                phy_printf("%s chan=%d, pwr=%d, tx_num=%d, tx_len=%d, hw_ack_en=%d\n",param_1,
                           *param_2,param_2[1],param_2[2],param_2[3],param_2[4]);
                return 1;
              }
              iVar3 = strcmp(param_1,"zb_slave_test");
              if (iVar3 == 0) {
                phy_printf("%s chan=%d, pwr=%d, tx_len=%d, hw_ack_en=%d\n",param_1,*param_2,
                           param_2[1],param_2[2],param_2[3]);
                zb_slave_test(*param_2,param_2[1],param_2[2],(char)param_2[3]);
                return 1;
              }
              iVar3 = strcmp(param_1,"internal_vol_test");
              if (iVar3 == 0) {
                internal_vol_test(1);
                phy_printf(&_LC60,param_1);
                return 1;
              }
              iVar3 = strcmp(param_1,"get_internal_vol");
              if (iVar3 == 0) {
                get_inernal_vol(0x66,10,2,2,1,10,1,0);
                phy_printf("%s %d,%d,%d,%d,%d\n",param_1,*param_2,local_30 & 0xffff,local_30 >> 0x10
                           ,uStack_2c & 0xffff,uStack_2c >> 0x10);
                return 1;
              }
              iVar3 = strcmp(param_1,"phy_i2c_check");
              if (iVar3 == 0) {
                phy_i2c_check();
                return 1;
              }
              iVar3 = strcmp(param_1,"phy_reg_check");
              if (iVar3 == 0) {
                phy_reg_check();
                return 1;
              }
              iVar3 = strcmp(param_1,"gpio_output_set");
              if (iVar3 == 0) {
                dig_gpio_out((char)*param_2,(char)param_2[1],(char)param_2[2]);
                phy_printf("%s: gpio_no=%d, out_set=%d, drv=%d\n",param_1,*param_2,param_2[1],
                           param_2[2]);
                return 1;
              }
              iVar3 = strcmp(param_1,"gpio_dis_output");
              if (iVar3 == 0) {
                gpio_output_set(0,0,1 << (*param_2 & 0x1f));
                phy_printf("command: gpio_no=%d\n",param_1,*param_2);
                return 1;
              }
              iVar3 = strcmp(param_1,"gpio_input_get");
              if (iVar3 == 0) {
                uVar6 = *param_2;
                uVar4 = dig_gpio_in(uVar6 & 0xff);
                phy_printf("%s: gpio_no=%d, get_value=%d\n",param_1,uVar6,uVar4);
                return 1;
              }
              iVar3 = strcmp(param_1,"ESP_TEST_GPIO");
              if (iVar3 == 0) {
                ESP_TEST_GPIO(param_2,&local_30,3);
                phy_printf("Input result:0x%x,0x%x\n",local_30,uStack_2c);
                CMDSTOP_GPIO();
                return 1;
              }
              iVar3 = strcmp(param_1,"cmdstop_gpio");
              if (iVar3 == 0) {
                CMDSTOP_GPIO();
                phy_printf("GPIO END!\n");
                return 1;
              }
              iVar3 = strcmp(param_1,"rxdc_remain");
              if (iVar3 == 0) {
                ate_rxdc_remain_check(1);
                phy_printf(&_LC60,param_1);
                return 1;
              }
              iVar3 = strcmp(param_1,"bt_tx_cca_set");
              if (iVar3 == 0) {
                bt_bb_tx_cca_set(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],
                                 param_2[6],param_2[7]);
                phy_printf(&_LC60,param_1);
                return 1;
              }
              iVar3 = strcmp(param_1,"rxiq_get_pwr");
              if (iVar3 == 0) {
                rxiq_get_pwr((char)*param_2,&local_30);
                phy_printf("%s, %d,%lld,%lld\n",param_1,*param_2,local_30,uStack_2c,uStack_28,
                           uStack_24);
                return 1;
              }
              iVar3 = strcmp(param_1,"read_flash");
              if (iVar3 == 0) {
                read_flash(param_2);
                return 1;
              }
              iVar3 = strcmp(param_1,"erase_flash");
              if (iVar3 == 0) {
                erase_flash(param_2);
                return 1;
              }
              iVar3 = strcmp(param_1,"write_flash");
              if (iVar3 == 0) {
                write_flash(param_2);
                return 1;
              }
              iVar3 = strcmp(param_1,"bt_tx_tone");
              if (iVar3 == 0) {
                bt_zb_tx_tone(*param_2,param_2[1],param_2[2],0);
                return 1;
              }
              iVar3 = strcmp(param_1,"zb_tx_tone");
              if (iVar3 == 0) {
                bt_zb_tx_tone(*param_2,param_2[1],param_2[2],1);
                return 1;
              }
              iVar3 = strcmp(param_1,"dump_pbus");
              if (iVar3 == 0) {
                dump_pbus_get(param_2);
                return 1;
              }
              iVar3 = strcmp(param_1,"cpu_update");
              if (iVar3 == 0) {
                ets_update_cpu_frequency(*param_2);
                phy_printf("%s %d\n",param_1,*param_2);
                return 1;
              }
              iVar3 = strcmp(param_1,"delay_us_test");
              if (iVar3 == 0) {
                iVar3 = phy_time_now();
                ets_delay_us((short)*param_2);
                iVar5 = phy_time_now();
                phy_printf("delay=%d %d\n",iVar5 - iVar3,*param_2);
                return 1;
              }
              iVar3 = strcmp(param_1,"bt_init");
              if (iVar3 == 0) {
                bt_testmode_init();
                phy_printf(&_LC60,param_1);
                return 1;
              }
              iVar3 = strcmp(param_1,"force_rx_gain");
              if (iVar3 == 0) {
                force_rx_gain((char)*param_2,(char)param_2[1],(char)param_2[2]);
                phy_printf("%s %d %d %d\n",param_1,*param_2,param_2[1],param_2[2]);
                return 1;
              }
              iVar3 = strcmp(param_1,"force_txon_mode");
              if (iVar3 == 0) {
                phy_printf("%s txon=%d bt_mode=%d index=%d\n",param_1,*param_2,param_2[1],param_2[2]
                          );
                force_txon_mode((char)*param_2,(char)param_2[1],(char)param_2[2]);
                return 1;
              }
              iVar3 = strcmp(param_1,"force_iq_set");
              if (iVar3 == 0) {
                force_iq_set((char)*param_2,(char)param_2[1],(int)(char)param_2[2],
                             (int)(char)param_2[3]);
                phy_printf("%s en=%d tx=%d %d %d\n",param_1,*param_2,param_2[1],param_2[2],
                           param_2[3]);
                return 1;
              }
              iVar3 = strcmp(param_1,"pll_cap_update");
              if (iVar3 == 0) {
                pll_cap_mem_update((int)(short)*param_2);
                phy_printf("%s,%d\n",param_1,*param_2);
                return 1;
              }
              iVar3 = strcmp(param_1,"pll_dac_update");
              if (iVar3 == 0) {
                pll_dac_mem_update((char)*param_2);
                phy_printf("%s,%d\n",param_1,*param_2);
                return 1;
              }
              iVar3 = strcmp(param_1,"pll_mem_update");
              if (iVar3 == 0) {
                pll_mem_update((char)*param_2,(char)param_2[1]);
                phy_printf("%s,%d %d\n",param_1,*param_2,param_2[1]);
                return 1;
              }
              iVar3 = strcmp(param_1,"cpu_reset");
              if (iVar3 == 0) {
                cpu_reset();
                return 1;
              }
              iVar3 = strcmp(param_1,"ble_tone_start");
              if (iVar3 == 0) {
                set_rf_freq_offset(_phy_param & 0xff,(short)*param_2,0);
                force_tx_gain(0x7f0d,0,0,0);
                force_txon_mode(1,0,0);
                phy_printf("%s,%d\n",param_1,*param_2);
                return 1;
              }
              iVar3 = strcmp(param_1,"ble_tone_stop");
              if (iVar3 == 0) {
                force_txon_mode(0,0);
                phy_printf(&_LC60,param_1);
                return 1;
              }
              iVar3 = strcmp(param_1,"esp_phy_rxiq_cal");
              if (iVar3 == 0) {
                if ((int)param_2[1] < 1) {
                  ate_rxiq_cal((short)*param_2,0,1);
                }
                else {
                  esp_phy_rxiq_cal(&local_30,0,1);
                }
                phy_printf("%s %d %d %d\n",param_1,*param_2,param_2[1],param_2[2]);
                return 1;
              }
              iVar3 = strcmp(param_1,"rxiq_cal_test");
              if (iVar3 == 0) {
                rxiq_cal_test(&local_30,1);
                phy_printf(&_LC60,param_1);
                return 1;
              }
              iVar3 = strcmp(param_1,"get_rxiq_pwr");
              if (iVar3 == 0) {
                uVar6 = *param_2;
                uVar4 = get_rxiq_pwr(uVar6 & 0xff);
                phy_printf("%s %d %d\n",param_1,uVar6,uVar4);
                return 1;
              }
              iVar3 = strcmp(param_1,"freq_rx_cal_en");
              if (iVar3 == 0) {
                freq_rx_cal_en = (undefined1)*param_2;
                phy_printf("%s %d\n",param_1,*param_2 & 0xff);
                return 1;
              }
              iVar3 = strcmp(param_1,"xtal_freq_rx_cal");
              if (iVar3 == 0) {
                xtal_freq_rx_cal((char)*param_2,(short)param_2[1],1);
                phy_printf("%s %d %d\n",param_1,*param_2,param_2[1]);
                return 1;
              }
              iVar3 = strcmp(param_1,"esp_phy_rx_snr");
              if (iVar3 == 0) {
                esp_phy_rx_snr((short)*param_2,(int)(char)param_2[1],(int)(char)param_2[2]);
                phy_printf("%s %d %d %d\n",param_1,*param_2,param_2[1],param_2[2]);
                return 1;
              }
              iVar3 = strcmp(param_1,"bb_cfo_cfg");
              if (iVar3 == 0) {
                phy_bb_cfo_cfg((char)*param_2,(short)param_2[1]);
                return 1;
              }
              iVar3 = strcmp(param_1,"rftest_open_clk");
              if (iVar3 == 0) {
                rftest_open_clk();
                phy_printf(&_LC60,param_1);
                return 1;
              }
              iVar3 = strcmp(param_1,"phy_mem_print");
              if (iVar3 == 0) {
                phy_mem_print();
                phy_printf(&_LC60,param_1);
                return 1;
              }
              iVar3 = strcmp(param_1,"phy_get_rf_freq_init");
              if (iVar3 == 0) {
                iVar3 = phy_time_now();
                phy_get_rf_freq_init(0x55,0);
                iVar5 = phy_time_now();
                phy_printf("%s %dus\n",param_1,iVar5 - iVar3);
                return 1;
              }
              iVar3 = strcmp(param_1,"pbus_tx_test");
              if (iVar3 == 0) {
                phy_printf("%d,%d,%d,%d,%d,%d,%d,%d\n",*param_2,param_2[1],param_2[2],param_2[3],
                           param_2[4],param_2[5],param_2[6]);
                pbus_tx_test((char)*param_2,(char)param_2[1],(char)param_2[2]);
                phy_printf(&_LC60,param_1);
                return 1;
              }
              iVar3 = strcmp(param_1,"pbus_mem_update");
              if (iVar3 == 0) {
                pbus_mem_update((char)*param_2,(char)param_2[1],(char)param_2[2],(char)param_2[3]);
                phy_printf("%d %d %d %d\n",*param_2,param_2[1],param_2[2],param_2[3]);
                return 1;
              }
              iVar3 = strcmp(param_1,"phy_tx_table");
              if (iVar3 != 0) {
                return 0;
              }
              phy_printf("%s %d 0x%x\n",param_1,*(undefined2 *)(&phy_tx_table + *param_2 * 2));
              return 1;
            }
          }
          phy_printf("%s %d\n",param_1,*param_2);
          return 1;
        }
        goto _L432;
      }
    }
    phy_printf(&_LC60,param_1);
  }
  return 1;
}

