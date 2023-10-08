/*
 * Last changed at upstream commit ea648e92ecaba36b0f2437849569795d85433497
 * https://github.com/espressif/esp-phy-lib/commit/ea648e92ecaba36b0f2437849569795d85433497
 * Upstream date: 2023-10-08 11:21:03 +0800
 * Upstream subject: update c6 libphy for sleep cuash
 * Source: librftest -> wifi.o -> run_rftest_case
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 run_rftest_case(char *param_1,uint *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  rftest_pll_track();
  run_para_array_clear(param_2,param_3);
  iVar2 = strcmp(param_1,"WifiTxStart");
  if (iVar2 == 0) {
    if ((int)param_2[1] < 1) {
      phy_printf("%s: 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x\n",param_1,*param_2,param_2[2],param_2[3],
                 param_2[4],param_2[5]);
    }
    WifiTxStart(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_2[6],
                param_2[7]);
    phy_printf("tx_state:0x%x!\n",_DAT_600a4c74);
    return 1;
  }
  iVar2 = strcmp(param_1,"tx_cbw40m_en");
  if (iVar2 == 0) {
    tx_cbw40m_en = (undefined1)*param_2;
    phy_printf("%s: %d\n",param_1,*param_2 & 0xff);
    return 1;
  }
  iVar2 = strcmp(param_1,"cbw40m_en");
  if (iVar2 == 0) {
    cbw40m_en((char)*param_2);
    return 1;
  }
  iVar2 = strcmp(param_1,"short_gi_enable");
  if (iVar2 == 0) {
    short_gi_enable = *param_2;
    phy_printf("%s=%d\n",param_1);
    return 1;
  }
  iVar2 = strcmp(param_1,"tx_contin_en");
  if (iVar2 == 0) {
    tx_contin_en((char)*param_2);
    return 1;
  }
  iVar2 = strcmp(param_1,"wifitxout");
  if (iVar2 == 0) {
    wifitxout(param_2,param_3);
    return 1;
  }
  iVar2 = strcmp(param_1,"wifiscwout");
  if (iVar2 == 0) {
    wifiscwout(param_2);
    return 1;
  }
  iVar2 = strcmp(param_1,"esp_tx");
  if (iVar2 == 0) {
    esp_tx_func(param_2,param_3);
    return 1;
  }
  iVar2 = strcmp(param_1,"esp_rx");
  if (iVar2 == 0) {
    esp_rx_func(param_2);
    return 1;
  }
  iVar2 = strcmp(param_1,"WifiRxStart");
  if (iVar2 == 0) {
    phy_printf(&_LC62,param_1);
    WifiRxStart(*param_2);
    return 1;
  }
  iVar2 = strcmp(param_1,"FillTxPacket");
  if (iVar2 == 0) {
    FillTxPacket(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_2[6],
                 param_2[7]);
    phy_printf(&_LC62,param_1);
    return 1;
  }
  iVar2 = strcmp(param_1,"beacon_print");
  if (iVar2 == 0) {
    phy_printf(&_LC65,param_1);
    beacon_print(*param_2);
    return 1;
  }
  iVar2 = strcmp(param_1,"sw_chan_test");
  if (iVar2 == 0) {
    phy_printf(&_LC62,param_1);
    sw_chan_test(*param_2,param_2[1],param_2[2],param_2[3]);
    return 1;
  }
  iVar2 = strcmp(param_1,"rd");
  if (iVar2 == 0) {
    phy_printf("0x%x\n",*(undefined4 *)*param_2);
    return 1;
  }
  iVar2 = strcmp(param_1,"rd_dport");
  if (iVar2 == 0) {
    phy_printf("0x%x\n",*(undefined4 *)*param_2);
    return 1;
  }
  iVar2 = strcmp(param_1,"wr_dport");
  if (iVar2 == 0) {
    *(uint *)*param_2 = param_2[1];
    phy_printf("0x%x\n",*(undefined4 *)*param_2);
    return 1;
  }
  iVar2 = strcmp(param_1,"wr");
  if (iVar2 == 0) {
    *(uint *)*param_2 = param_2[1];
    phy_printf("0x%x\n",*(undefined4 *)*param_2);
    return 1;
  }
  iVar2 = strcmp(param_1,"rftest_init");
  if (iVar2 == 0) {
    rftest_init();
    return 1;
  }
  iVar2 = strcmp(param_1,"phy_close_rf");
  if (iVar2 == 0) {
    phy_close_rf();
    phy_printf(&_LC62,param_1);
    return 1;
  }
  iVar2 = strcmp(param_1,"RdMem");
  if (iVar2 == 0) {
    for (puVar1 = (undefined4 *)*param_2; puVar1 < (undefined4 *)(*param_2 + param_2[1]);
        puVar1 = puVar1 + 1) {
      phy_printf("0x%x ",*puVar1);
    }
  }
  else {
    iVar2 = strcmp(param_1,"sm");
    if (iVar2 == 0) {
      *(uint *)*param_2 = *(uint *)*param_2 | param_2[1];
      phy_printf("reg 0x%x=0x%x\n",*(undefined4 *)*param_2);
      return 1;
    }
    iVar2 = strcmp(param_1,"cm");
    if (iVar2 == 0) {
      *(uint *)*param_2 = ~param_2[1] & *(uint *)*param_2;
      phy_printf("reg 0x%x=0x%x\n",*(undefined4 *)*param_2);
      return 1;
    }
    iVar2 = strcmp(param_1,"gb");
    if (iVar2 == 0) {
      phy_printf("0x%x\n",*(uint *)*param_2 >> (param_2[2] & 0x1f) &
                          (1 << ((param_2[1] - param_2[2]) + 1 & 0x1f)) - 1U);
      return 1;
    }
    iVar2 = strcmp(param_1,"ri");
    if (iVar2 == 0) {
      uVar3 = (**(code **)(_g_phyFuns + 0x50))
                        ((char)*param_2,(char)param_2[1],(char)param_2[2],
                         *(code **)(_g_phyFuns + 0x50));
      phy_printf("0x%x\n",uVar3);
      return 1;
    }
    iVar2 = strcmp(param_1,"wi");
    if (iVar2 == 0) {
      (**(code **)(_g_phyFuns + 0x58))
                ((char)*param_2,(char)param_2[1],(char)param_2[2],(char)param_2[3],
                 *(code **)(_g_phyFuns + 0x58));
      phy_printf(&_LC62,param_1);
      return 1;
    }
    iVar2 = strcmp(param_1,"wim");
    if (iVar2 == 0) {
      (**(code **)(_g_phyFuns + 0x60))
                ((char)*param_2,(char)param_2[1],(char)param_2[2],(char)param_2[3],(char)param_2[4],
                 (char)param_2[5],*(code **)(_g_phyFuns + 0x60));
      phy_printf(&_LC62,param_1);
      return 1;
    }
    iVar2 = strcmp(param_1,"rim");
    if (iVar2 == 0) {
      uVar3 = (**(code **)(_g_phyFuns + 0x5c))
                        ((char)*param_2,(char)param_2[1],(char)param_2[2],(char)param_2[3],
                         (char)param_2[4],*(code **)(_g_phyFuns + 0x5c));
      phy_printf("0x%x\n",uVar3);
      return 1;
    }
    iVar2 = strcmp(param_1,"pbus_debugmode");
    if (iVar2 == 0) {
      pbus_debugmode();
      phy_printf(&_LC62,param_1);
      return 1;
    }
    iVar2 = strcmp(param_1,"pbus_workmode");
    if (iVar2 == 0) {
      pbus_workmode();
      phy_printf(&_LC62,param_1);
      return 1;
    }
    iVar2 = strcmp(param_1,"pbus");
    if (iVar2 == 0) {
      (**(code **)(_g_phyFuns + 0x74))
                ((char)*param_2,(char)param_2[1],(short)param_2[2],*(code **)(_g_phyFuns + 0x74));
      phy_printf(&_LC62,param_1);
      return 1;
    }
    iVar2 = strcmp(param_1,"pbus_rd");
    if (iVar2 == 0) {
      uVar3 = (**(code **)(_g_phyFuns + 0x78))
                        ((char)*param_2,(char)param_2[1],*(code **)(_g_phyFuns + 0x78));
      phy_printf("0x%x\n",uVar3);
      return 1;
    }
    iVar2 = strcmp(param_1,"txtone");
    if (iVar2 == 0) {
      txtone_enable = *param_2 != 0 || param_2[3] != 0;
      start_tx_tone(param_2[1],param_2[2],param_2[4],param_2[5]);
      phy_printf(&_LC62,param_1);
      return 1;
    }
    iVar2 = strcmp(param_1,"txtone_step");
    if (iVar2 == 0) {
      txtone_enable = *param_2 != 0 || param_2[3] != 0;
      (**(code **)(_g_phyFuns + 0x98))
                (*param_2 & 0xff,(int)(short)param_2[1],(char)param_2[2],param_2[3] & 0xff,
                 (int)(short)param_2[4],(char)param_2[5],*(code **)(_g_phyFuns + 0x98));
      phy_printf(&_LC62,param_1);
      return 1;
    }
    iVar2 = strcmp(param_1,"stoptone");
    if (iVar2 == 0) {
      txtone_enable = 0;
      (**(code **)(_g_phyFuns + 0x9c))(*param_2,*(code **)(_g_phyFuns + 0x9c));
      phy_printf(&_LC62,param_1);
      return 1;
    }
    iVar2 = strcmp(param_1,"adctrig");
    if (iVar2 == 0) {
      adctrig(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_2[6],param_2[7])
      ;
      phy_printf(&_LC62,param_1);
      return 1;
    }
    iVar2 = strcmp(param_1,"init_para_chg");
    if (iVar2 == 0) {
      if (*param_2 == 1) {
        init_param_default[param_2[1]] = (char)param_2[2];
      }
      register_chipv7_phy_init_param(init_param_default);
      phy_printf("%s[%d]=0x%x\n",param_1,init_param_default[param_2[1]]);
      return 1;
    }
    iVar2 = strcmp(param_1,"RF_init_sel");
    if (iVar2 == 0) {
      RF_init_sel((char)*param_2,param_2[1]);
      return 1;
    }
    iVar2 = strcmp(param_1,"bb_init");
    if (iVar2 == 0) {
      _phy_param = 0;
      bb_init();
      phy_printf(&_LC62,param_1);
      return 1;
    }
    iVar2 = strcmp(param_1,"mac_init");
    if (iVar2 == 0) {
      mac_init();
      phy_printf(&_LC62,param_1);
      return 1;
    }
    iVar2 = strcmp(param_1,"rxdc_cal");
    if (iVar2 == 0) {
      local_30 = 0x1000100;
      uStack_2c = 0x1000100;
      set_rxclk_en(1);
      set_txclk_en(1);
      pbus_rx_dco_cal(4000,&local_30,2,10,1);
      phy_printf("%d, %d, %d, %d\n",(int)(short)local_30,(int)local_30._2_2_,(int)(short)uStack_2c,
                 (int)uStack_2c._2_2_);
      return 1;
    }
    iVar2 = strcmp(param_1,"phy_set_freq");
    if (iVar2 == 0) {
      uVar6 = *param_2;
      uVar5 = param_2[1];
      phy_set_freq(uVar6 & 0xffff,(int)(short)uVar5);
      phy_printf("%s, freq=%d, freq_offset=%d\n",param_1,uVar6 & 0xffff,(int)(short)uVar5);
      return 1;
    }
    iVar4 = strcmp(param_1,"RFChannelSel");
    iVar2 = _DAT_600ad000;
    if (iVar4 == 0) {
      rftest_set_chan((short)*param_2,(char)param_2[1]);
      phy_printf("%s %d %d, %dus\n",param_1,*param_2,param_2[1],_DAT_600ad000 - iVar2);
      return 1;
    }
    iVar2 = strcmp(param_1,"set_chan");
    if (iVar2 == 0) {
      chip_v7_set_chan((short)*param_2,(int)(char)param_2[1]);
      phy_printf(" %s %d %d\n",param_1,*param_2,param_2[1]);
      return 1;
    }
    iVar2 = strcmp(param_1,"target_power_backoff");
    if (iVar2 == 0) {
      target_power_backoff((int)(char)*param_2);
      phy_printf("%s %d dB set ok!\n",param_1,*param_2);
      return 1;
    }
    iVar2 = strcmp(param_1,"set_tx_gain");
    if (iVar2 == 0) {
      _phy_param = CONCAT31(phy_param_1,1);
      tx_pa_bb_gain = (short)*param_2;
      DAT_00014d46 = (short)param_2[1];
      force_tx_gain((int)(char)param_2[2]);
      phy_printf("%s, 0x%x,0x%x,%d\n",param_1,*param_2,param_2[1],(int)(char)param_2[2]);
      return 1;
    }
    iVar2 = strcmp(param_1,"set_ble_tx_gain");
    if (iVar2 == 0) {
      _phy_param = CONCAT31(phy_param_1,1);
      tx_pa_bb_gain = (short)*param_2;
      DAT_00014d46 = (short)param_2[1];
      force_ble_tx_gain((int)(char)param_2[2]);
      phy_printf("%s, 0x%x,0x%x,%d\n",param_1,*param_2,param_2[1],(int)(char)param_2[2]);
      return 1;
    }
    iVar2 = strcmp(param_1,"check_noise_floor");
    if (iVar2 == 0) {
      check_noise_floor();
      phy_printf(&_LC110,_DAT_600a7050 | 0xfffffc00);
      return 1;
    }
    iVar2 = strcmp(param_1,"phy_set_most_tpw");
    if (iVar2 == 0) {
      phy_set_most_tpw((int)(char)*param_2);
      phy_printf("%s: %d\n",param_1,*param_2);
      return 1;
    }
    iVar2 = strcmp(param_1,"phy_get_most_tpw");
    if (iVar2 == 0) {
      uVar3 = phy_get_most_tpw();
      phy_printf("%s: %d\n",param_1,uVar3);
      return 1;
    }
    iVar2 = strcmp(param_1,"set_tx_dig_gain");
    if (iVar2 == 0) {
      force_dig_gain((char)*param_2,(int)(char)param_2[1]);
      phy_printf("%s, 0x%x, 0x%x\n",param_1,*param_2,(int)(char)param_2[1]);
      return 1;
    }
    iVar2 = strcmp(param_1,"accumiq");
    if (iVar2 == 0) {
      accumiq(*param_2,param_2[1]);
      return 1;
    }
    iVar2 = strcmp(param_1,"phy_init");
    if (iVar2 == 0) {
      phy_init();
      phy_printf(&_LC62,param_1);
      return 1;
    }
    iVar2 = strcmp(param_1,"set_chan_offset");
    if (iVar2 == 0) {
      uVar5 = *param_2;
      chip_v7_set_chan_offset((int)(short)uVar5);
      phy_printf("freq: %d %dkhz %d\n",*param_2,(int)(short)uVar5,(int)_phy_param);
      return 1;
    }
    iVar2 = strcmp(param_1,"rf_init");
    if (iVar2 == 0) {
      _phy_param = 0;
      rf_init();
      phy_printf(&_LC62,param_1);
      return 1;
    }
    iVar2 = strcmp(param_1,"esp_origin_mac");
    if (iVar2 == 0) {
      esp_origin_mac();
      return 1;
    }
    iVar2 = strcmp(param_1,"print_ver");
    if (iVar2 == 0) {
      phy_printf("phy_version: %d.%d, %s, %s\n",2,0x1e,"Oct  8 2023","10:41:09");
      return 1;
    }
    iVar2 = strcmp(param_1,"init_print");
    if (iVar2 == 0) {
      module_test_cal_print();
      phy_printf("print end\n");
      return 1;
    }
    iVar2 = strcmp(param_1,"get_rx_buffer");
    if (iVar2 == 0) {
      phy_printf("%s: %d, 0x%x\n",param_1,*param_2,param_2[1]);
      get_rx_buffer((char)*param_2,param_2[1]);
      phy_printf(&_LC11);
      return 1;
    }
    iVar2 = strcmp(param_1,"dig_11b_filter_sel");
    if (iVar2 == 0) {
      _DAT_600a7400 = (*param_2 & 3) << 0xd | _DAT_600a7400 & 0xffff9fff;
      phy_printf("%s: %d\n",param_1,*param_2);
      return 1;
    }
    iVar2 = strcmp(param_1,"test_txtone_pwr");
    if (iVar2 == 0) {
      test_txtone_pwr(*param_2,param_2[1],param_2[2],(int)(short)param_2[3]);
      phy_printf(&_LC11);
      return 1;
    }
    iVar2 = strcmp(param_1,"txpwr_track_en");
    if (iVar2 == 0) {
      phy_tx_pwr_track_en = (undefined1)*param_2;
      phy_tx_pwr_correct_en = (undefined1)param_2[1];
      phy_tx_pwr_print_en = (undefined1)param_2[2];
      phy_printf("%s: track_en=%d, correct_en=%d, print_en=%d\n",param_1,*param_2 & 0xff,
                 param_2[1] & 0xff,param_2[2] & 0xff);
      return 1;
    }
    iVar2 = strcmp(param_1,"adc_rand");
    if (iVar2 == 0) {
      phy_get_adc_rand((char)*param_2);
      phy_printf("%s %d\n",param_1,*param_2);
      return 1;
    }
    iVar2 = strcmp(param_1,"set_pbus_mem");
    if (iVar2 == 0) {
      set_pbus_mem_debug((short)*param_2,(short)param_2[1],(short)param_2[2]);
      phy_printf("%s %x %x %x\n",param_1,*param_2,param_2[1],param_2[2]);
      return 1;
    }
    iVar2 = strcmp(param_1,"rssi_min_max_print");
    if (iVar2 == 0) {
      rssi_min_max_print = (undefined1)*param_2;
      phy_printf("%s=%d\n",param_1);
      return 1;
    }
    iVar2 = strcmp(param_1,"pll_cap_track_en");
    if (iVar2 == 0) {
      _phy_param = CONCAT31(phy_param_1,(char)*param_2);
      phy_printf("%s=%d\n",param_1,*param_2);
      return 1;
    }
    iVar2 = strcmp(param_1,"burn_in_test");
    if (iVar2 == 0) {
      burn_in_test();
      phy_printf(&_LC62,param_1);
      return 1;
    }
    iVar2 = strcmp(param_1,"get_pll_vol");
    if (iVar2 == 0) {
      uVar3 = get_pll_vol(1);
      phy_printf(&_LC110,uVar3);
      return 1;
    }
    iVar2 = strcmp(param_1,"phy_get_vdd33");
    if (iVar2 == 0) {
      uVar3 = phy_get_vdd33();
      phy_printf(&_LC110,uVar3);
      return 1;
    }
    iVar2 = strcmp(param_1,"pll_cap_print_en");
    if (iVar2 == 0) {
      _phy_param = CONCAT31(phy_param_1,(char)*param_2);
      phy_printf("%s=%d\n",param_1,*param_2 & 0xff);
      return 1;
    }
    iVar4 = strcmp(param_1,"set_freq");
    iVar2 = _DAT_600ad000;
    if (iVar4 == 0) {
      set_rf_freq_offset(_phy_param & 0xff,(short)*param_2,0);
      phy_printf("%s, %d, %d\n",param_1,*param_2,_DAT_600ad000 - iVar2);
      return 1;
    }
    iVar2 = strcmp(param_1,"rc_cal");
    if (iVar2 == 0) {
      i2c_rc_set_reg((char)*param_2,(char)param_2[1],(char)param_2[2]);
      uVar3 = get_rc_dout();
      phy_printf("%d,%d,%d,%d\n",uVar3,*param_2,param_2[1],param_2[2]);
      return 1;
    }
    iVar2 = strcmp(param_1,"txdc_cal");
    if (iVar2 == 0) {
      _phy_param = 0;
      txdc_cal_init_new(&phy_param,0xf,0,0);
      phy_printf(&_LC62,param_1);
      return 1;
    }
    iVar2 = strcmp(param_1,"tx_cap_init");
    if (iVar2 == 0) {
      _phy_param = 0;
      tx_cap_init();
      phy_printf(&_LC62,param_1);
      return 1;
    }
    iVar2 = strcmp(param_1,"tx_pwctrl_init");
    if (iVar2 == 0) {
      _phy_param = 0;
      tx_pwctrl_init(1);
      phy_printf(&_LC62,param_1);
      return 1;
    }
    iVar2 = strcmp(param_1,"txiq_cal_init");
    if (iVar2 == 0) {
      _phy_param = 0;
      txiq_cal_init_new();
      phy_printf(&_LC62,param_1);
      return 1;
    }
    iVar2 = strcmp(param_1,"test_rxgain_table");
    if (iVar2 == 0) {
      _phy_param = 0;
      set_rx_gain_table((short)*param_2,1);
      phy_printf("%s %d\n",param_1,*param_2);
      return 1;
    }
    iVar2 = strcmp(param_1,"get_sar2_vol");
    if (iVar2 == 0) {
      uVar3 = get_sar2_vol_new((char)*param_2);
      phy_printf(&_LC110,uVar3);
      return 1;
    }
    iVar2 = strcmp(param_1,"read_sar2_code");
    if (iVar2 == 0) {
      uVar3 = read_sar2_code();
      phy_printf(&_LC110,uVar3);
      return 1;
    }
    iVar2 = strcmp(param_1,"meas_tone_pwr_db");
    if (iVar2 == 0) {
      uVar3 = meas_tone_pwr_db((int)(char)*param_2,(int)(short)param_2[1],_phy_param & 0xffff);
      phy_printf(&_LC110,uVar3);
      return 1;
    }
    iVar2 = strcmp(param_1,"tx_ack_test");
    if (iVar2 == 0) {
      tx_ack_test(*param_2,param_2[1],(char)param_2[2],(short)param_2[3],param_2[4],param_2[5],
                  param_2[6],param_2[7]);
      phy_printf("%s:ap_addr0=0x%x, ap_addr1=0x%x, tx_rate=0x%x, tx_num=%d, tx_length=%d, backoff=%d, aifs=%d, delay_ms=%d, tx_cbw40=%d\n"
                 ,param_1,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5]);
      return 1;
    }
    iVar2 = strcmp(param_1,"tx_ack_init");
    if (iVar2 == 0) {
      tx_ack_init(*param_2,param_2[1],(char)param_2[2],param_2[3],(char)param_2[4],(char)param_2[5])
      ;
      phy_printf("%s:ap_addr0=0x%x, ap_addr1=0x%x, tx_rate=0x%x, tx_length=%d,tx_cbw40=%d\n",param_1
                 ,*param_2,param_2[1],param_2[2],param_2[3],param_2[4]);
      return 1;
    }
    iVar2 = strcmp(param_1,"remove_11b_4p8G_spur");
    if (iVar2 == 0) {
      remove_11b_4p8G_spur((char)*param_2,(char)param_2[1],(char)param_2[2]);
      phy_printf("%s %d %d %d\n",param_1,*param_2,param_2[1],param_2[2]);
      return 1;
    }
    iVar4 = strcmp(param_1,"phy_wakeup_init");
    iVar2 = _DAT_600ad000;
    if (iVar4 == 0) {
      phy_wakeup_init();
      phy_printf("%s %dus\n",param_1,_DAT_600ad000 - iVar2);
      return 1;
    }
    iVar2 = strcmp(param_1,"phy_test_init");
    if (iVar2 == 0) {
      phy_test_init();
      phy_printf(&_LC62,param_1);
      return 1;
    }
    iVar2 = strcmp(param_1,"rfpll_cal_time");
    if (iVar2 == 0) {
      rfpll_cal_time((char)*param_2,(char)param_2[1]);
      phy_printf("%s: chan_freq=%d, mode=%d\n",param_1,*param_2,param_2[1]);
      return 1;
    }
    iVar2 = strcmp(param_1,"freq_init");
    if (iVar2 == 0) {
      _phy_param = 0;
      get_rf_freq_init(0x55,0);
      phy_printf(&_LC62,param_1);
      return 1;
    }
    iVar2 = strcmp(param_1,"force_txtone");
    if (iVar2 == 0) {
      force_txtone(*param_2,param_2[1]);
      phy_printf("%s atten=%d, delay_us=%d\n",param_1,*param_2,param_2[1]);
      return 1;
    }
    iVar2 = strcmp(param_1,"test_mem_time");
    if (iVar2 == 0) {
      test_mem_time((char)*param_2,(char)param_2[1]);
      phy_printf("%s read_en=%d, func_en=%d\n",param_1,*param_2,param_2[1]);
      return 1;
    }
    iVar2 = strcmp(param_1,"get_tx_rate");
    if (iVar2 == 0) {
      uVar3 = phy_get_tx_rate();
      phy_printf("txrate=%d\n",uVar3);
      return 1;
    }
    iVar2 = strcmp(param_1,"set_rx_sense");
    if (iVar2 == 0) {
      adaptive_test_en = 1;
      uVar5 = *param_2;
      set_rx_sense((int)(char)uVar5);
      phy_printf("%s: rssi=%d\n",param_1,(int)(char)uVar5);
      return 1;
    }
    iVar2 = strcmp(param_1,"close_peri");
    if (iVar2 != 0) {
      iVar2 = strcmp(param_1,"clk10m_enable");
      if (iVar2 != 0) {
        iVar2 = strcmp(param_1,"get_tone_sar_dout");
        if (iVar2 == 0) {
          uVar3 = get_tone_sar_dout((char)*param_2);
          phy_printf(&_LC110,uVar3);
          return 1;
        }
        iVar2 = strcmp(param_1,"get_power_db");
        if (iVar2 == 0) {
          uVar3 = get_power_db(_phy_param & 0xffff);
          phy_printf("%s %d\n",param_1,uVar3);
          return 1;
        }
        iVar2 = strcmp(param_1,"pwdet_code_cal");
        if (iVar2 == 0) {
          pwdet_code_cal();
          phy_printf(&_LC62,param_1);
          return 1;
        }
        iVar2 = strcmp(param_1,"esp_en_retest");
        if (iVar2 == 0) {
          esp_en_retest();
          return 1;
        }
        iVar2 = strcmp(param_1,"temp_read");
        if (iVar2 == 0) {
          uVar3 = tsens_temp_read_new();
          phy_printf("temp=%d, init_temp=%d\n",uVar3,(int)_phy_param);
          return 1;
        }
        iVar2 = strcmp(param_1,"uart1_sel");
        if (iVar2 != 0) {
          iVar2 = strcmp(param_1,"btpwr_track_en");
          if (iVar2 == 0) {
            phy_bt_power_track((char)*param_2);
            phy_printf("%s,%d\n",param_1,_phy_param & 0xff);
            return 1;
          }
          iVar2 = strcmp(param_1,"rx_gain_comp");
          if (iVar2 != 0) {
            iVar2 = strcmp(param_1,"tx_chan_atten");
            if (iVar2 == 0) {
              tx_chan_atten();
              phy_printf(&_LC11);
              return 1;
            }
            iVar2 = strcmp(param_1,"rx_chan_noise");
            if (iVar2 == 0) {
              rx_chan_noise((char)*param_2);
              phy_printf(&_LC11);
              return 1;
            }
            iVar2 = strcmp(param_1,"rx_chan_noise_all");
            if (iVar2 == 0) {
              rx_chan_noise_all();
              phy_printf(&_LC11);
              return 1;
            }
            iVar2 = strcmp(param_1,"set_noise_floor");
            if (iVar2 == 0) {
              iVar2 = (int)(*param_2 * -0x10000) >> 0x10;
              set_noise_floor(iVar2);
              phy_printf("%s %d\n",param_1,iVar2);
              return 1;
            }
            iVar2 = strcmp(param_1,"get_iq_est_pwr");
            if (iVar2 == 0) {
              uVar3 = get_iq_est_pwr();
              phy_printf(&_LC190,uVar3);
              return 1;
            }
            iVar2 = strcmp(param_1,"dc_iq_est");
            if (iVar2 == 0) {
              dc_iq_est_test(1,(short)*param_2,&uStack_3c,&local_30);
              phy_printf("%d,%d,%d,%d,%d,%d\n",uStack_3c,uStack_38,uStack_34,local_30,uStack_2c,
                         uStack_28);
              return 1;
            }
            iVar2 = strcmp(param_1,"bt_pll_track_en");
            if (iVar2 == 0) {
              phy_printf("%s=%d\n",param_1,*param_2);
              return 1;
            }
            iVar2 = strcmp(param_1,"freq_mem_backup");
            if (iVar2 == 0) {
              phy_printf("%s, %d 0x%x\n",param_1,*param_2,0x40840000);
              phy_freq_mem_backup((char)*param_2,0x40840000);
              return 1;
            }
            iVar2 = strcmp(param_1,"set_tx_power");
            if (iVar2 == 0) {
              set_tx_power((int)(char)*param_2);
              phy_printf("%s %d\n",param_1,*param_2);
              return 1;
            }
            iVar2 = strcmp(param_1,"bt_rx_force");
            if (iVar2 == 0) {
              bt_rx_force((char)*param_2,1);
              phy_printf("%s %d\n",param_1,*param_2);
              return 1;
            }
            iVar2 = strcmp(param_1,"tx_gain_print");
            if (iVar2 == 0) {
              wifi_set_tx_gain(_phy_param & 0xffff,1);
              bt_set_tx_gain(1);
              phy_printf(&_LC62,param_1);
              return 1;
            }
            iVar2 = strcmp(param_1,"phy_ftm_comp");
            if (iVar2 == 0) {
              uVar3 = phy_ftm_comp();
              phy_printf("phy_ftm_comp %d\n",uVar3);
              return 1;
            }
            iVar2 = strcmp(param_1,"esp_txrx_test");
            if (iVar2 == 0) {
              esp_txrx_test((char)*param_2,(char)param_2[1],(short)param_2[2],(int)(char)param_2[3],
                            (short)param_2[4],param_2[5],(char)param_2[6],(char)param_2[7]);
              phy_printf("%s %d %d %d %d %d %d %d %d\n",param_1,*param_2,param_2[1],param_2[2],
                         param_2[3],param_2[4],param_2[5]);
              return 1;
            }
            iVar2 = strcmp(param_1,"le_master_test");
            if (iVar2 == 0) {
              uStack_50 = 0;
              uStack_4c = 0;
              uStack_48 = 0;
              uStack_44 = 0;
              uStack_40 = 0;
              uStack_3c = 0;
              local_30 = 0;
              le_master_test((char)*param_2,param_2[1] + 1 & 0xff,(char)param_2[2],(short)param_2[3]
                             ,param_2[4],&uStack_50,&uStack_4c,&uStack_48);
              phy_printf("le_txrx_num: %d, %d, %d,",uStack_50,uStack_48,uStack_44);
              phy_printf("le_rssi: avg=%d, max=%d, min=%d\n",uStack_40,uStack_3c,local_30);
              phy_printf("%s %d, %d, %d, %d, %d\n",param_1,*param_2,param_2[1],param_2[2],param_2[3]
                         ,param_2[4]);
              return 1;
            }
            iVar2 = strcmp(param_1,"le_slave_test");
            if (iVar2 == 0) {
              phy_printf("%s %d, %d, %d, %d\n",param_1,*param_2,param_2[1],param_2[2],param_2[3]);
              le_slave_test((char)*param_2,param_2[1] + 1 & 0xff,(char)param_2[2],param_2[3]);
              return 1;
            }
            iVar2 = strcmp(param_1,"zb_master_test");
            if (iVar2 == 0) {
              uStack_50 = 0;
              uStack_4c = 0;
              uStack_48 = 0;
              uStack_44 = 0;
              uStack_40 = 0;
              uStack_3c = 0;
              local_30 = 0;
              zb_master_test(*param_2,param_2[1],param_2[2],param_2[3],(char)param_2[4],&uStack_50,
                             &uStack_4c,&uStack_48);
              phy_printf("zb_txrx_num: %d, %d, ",uStack_50,uStack_48);
              phy_printf("zb_rssi: avg=%d, max=%d, min=%d\n",uStack_40,uStack_3c,local_30);
              phy_printf("%s chan=%d, pwr=%d, tx_num=%d, tx_len=%d, hw_ack_en=%d\n",param_1,*param_2
                         ,param_2[1],param_2[2],param_2[3],param_2[4]);
              return 1;
            }
            iVar2 = strcmp(param_1,"zb_slave_test");
            if (iVar2 == 0) {
              phy_printf("%s chan=%d, pwr=%d, tx_len=%d, hw_ack_en=%d\n",param_1,*param_2,param_2[1]
                         ,param_2[2],param_2[3]);
              zb_slave_test(*param_2,param_2[1],param_2[2],(char)param_2[3]);
              return 1;
            }
            iVar2 = strcmp(param_1,"phy_i2c_check");
            if (iVar2 == 0) {
              phy_i2c_check();
              return 1;
            }
            iVar2 = strcmp(param_1,"gpio_output_set");
            if (iVar2 == 0) {
              dig_gpio_out((char)*param_2,(char)param_2[1],(char)param_2[2]);
              phy_printf("%s: gpio_no=%d, out_set=%d, drv=%d\n",param_1,*param_2,param_2[1],
                         param_2[2]);
              return 1;
            }
            iVar2 = strcmp(param_1,"gpio_dis_output");
            if (iVar2 == 0) {
              gpio_output_set(0,0,1 << (*param_2 & 0x1f));
              phy_printf("command: gpio_no=%d\n",param_1,*param_2);
              return 1;
            }
            iVar2 = strcmp(param_1,"gpio_input_get");
            if (iVar2 == 0) {
              uVar5 = *param_2;
              uVar3 = dig_gpio_in(uVar5 & 0xff);
              phy_printf("%s: gpio_no=%d, get_value=%d\n",param_1,uVar5,uVar3);
              return 1;
            }
            iVar2 = strcmp(param_1,"ESP_TEST_GPIO");
            if (iVar2 == 0) {
              ESP_TEST_GPIO(param_2,&local_30,3);
              phy_printf("Input result:0x%x,0x%x\n",local_30,uStack_2c);
              CMDSTOP_GPIO();
              return 1;
            }
            iVar2 = strcmp(param_1,"cmdstop_gpio");
            if (iVar2 == 0) {
              CMDSTOP_GPIO();
              phy_printf("GPIO END!\n");
              return 1;
            }
            iVar2 = strcmp(param_1,"trig_tx_frame");
            if (iVar2 == 0) {
              trig_tx_frame();
              phy_printf(&_LC62,param_1);
              return 1;
            }
            iVar2 = strcmp(param_1,"phy_disable_cca");
            if (iVar2 == 0) {
              phy_disable_cca();
              phy_printf(&_LC62,param_1);
              return 1;
            }
            iVar2 = strcmp(param_1,"phy_enable_cca");
            if (iVar2 == 0) {
              phy_enable_cca();
              phy_printf(&_LC62,param_1);
              return 1;
            }
            iVar2 = strcmp(param_1,"bt_tx_cca_set");
            if (iVar2 == 0) {
              bt_bb_tx_cca_set(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],
                               param_2[6],param_2[7]);
              phy_printf(&_LC62,param_1);
              return 1;
            }
            iVar2 = strcmp(param_1,"tx_force_pwr_en");
            if (iVar2 == 0) {
              tx_force_pwr_en = (undefined1)*param_2;
              phy_printf("%s,%d\n",param_1,*param_2 & 0xff);
              return 1;
            }
            iVar2 = strcmp(param_1,"rx_init_gain");
            if (iVar2 == 0) {
              rx_init_gain((char)*param_2);
              phy_printf("%s %d\n",param_1,*param_2);
              return 1;
            }
            iVar2 = strcmp(param_1,"dump_pbus");
            if (iVar2 == 0) {
              get_dump_pbus(param_2);
              return 1;
            }
            iVar2 = strcmp(param_1,"read_hw_noisefloor");
            if (iVar2 == 0) {
              uVar3 = read_hw_noisefloor();
              phy_printf("%s %d\n",param_1,uVar3);
              return 1;
            }
            iVar2 = strcmp(param_1,"bt_txiq_cal");
            if (iVar2 == 0) {
              _set_mac_filter = _set_mac_filter & 0xfffff7ff;
              bt_txiq_cal();
              phy_printf(&_LC62,param_1);
              return 1;
            }
            iVar2 = strcmp(param_1,"bt_txdc_cal");
            if (iVar2 == 0) {
              _set_mac_filter = _set_mac_filter & 0xffffefff;
              bt_txdc_cal_new();
              phy_printf(&_LC62,param_1);
              return 1;
            }
            iVar2 = strcmp(param_1,"rf_freq_debug");
            if (iVar2 == 0) {
              rf_freq_debug((char)*param_2,(char)param_2[1],(short)param_2[2],(short)param_2[3],
                            (char)param_2[4],(char)param_2[5],(char)param_2[6]);
              return 1;
            }
            iVar2 = strcmp(param_1,"phy_11ax_tx_set");
            if (iVar2 == 0) {
              phy_11ax_tx_set(param_2,param_3);
              phy_printf("he_format=%d\n",*param_2);
              return 1;
            }
            iVar2 = strcmp(param_1,"phy_11ax_rx_set");
            if (iVar2 == 0) {
              phy_11ax_rx_set(*param_2);
              phy_printf(&_LC62,param_1);
              return 1;
            }
            iVar2 = strcmp(param_1,"esp_hetb_enable");
            if (iVar2 == 0) {
              esp_hetb_enable((char)*param_2);
              phy_printf("%s %d\n",param_1,*param_2);
              return 1;
            }
            iVar2 = strcmp(param_1,"force_rx_gain");
            if (iVar2 == 0) {
              force_rx_gain((char)*param_2,(char)param_2[1],(char)param_2[2]);
              phy_printf("%s %d %d %d\n",param_1,*param_2,param_2[1],param_2[2]);
              return 1;
            }
            iVar2 = strcmp(param_1,"force_txon_mode");
            if (iVar2 == 0) {
              phy_printf("%s txon=%d bt_mode=%d index=%d\n",param_1,*param_2,param_2[1],param_2[2]);
              force_txon_mode((char)*param_2,(char)param_2[1],(char)param_2[2]);
              return 1;
            }
            iVar2 = strcmp(param_1,"force_iq_set");
            if (iVar2 == 0) {
              force_iq_set((char)*param_2,(char)param_2[1],(char)param_2[2],(char)param_2[3]);
              phy_printf(&_LC62,param_1);
              return 1;
            }
            iVar2 = strcmp(param_1,"rx_spur_remove");
            if (iVar2 == 0) {
              rx_spur_remove(*param_2,(char)param_2[1],(int)(char)param_2[2]);
              phy_printf("%s %d %d %d\n",param_1,*param_2,param_2[1],param_2[2]);
              return 1;
            }
            iVar2 = strcmp(param_1,"usb_clk_en");
            if (iVar2 == 0) {
              _DAT_6009608c = *param_2 & 1 | _DAT_6009608c & 0xfffffffe;
              phy_printf("%s %d\n",param_1,*param_2);
              return 1;
            }
            iVar2 = strcmp(param_1,"bt_set_rx_comp");
            if (iVar2 == 0) {
              bt_set_rx_comp((int)(char)*param_2,(int)(char)param_2[1],(int)(char)param_2[2],
                             (int)(char)param_2[3],(int)(char)param_2[4]);
              phy_printf("%s %d %d %d %d %d\n",param_1,*param_2,param_2[1],param_2[2],param_2[3],
                         param_2[4]);
              return 1;
            }
            iVar2 = strcmp(param_1,"rxiq_get_pwr");
            if (iVar2 == 0) {
              rxiq_get_pwr((char)*param_2,&local_30);
              phy_printf("%s, %d,%lld,%lld\n",param_1,*param_2,local_30,uStack_2c,uStack_28,
                         uStack_24);
              return 1;
            }
            iVar2 = strcmp(param_1,"fedump_wr_txmem");
            if (iVar2 == 0) {
              fedump_wr_txmem(*param_2,param_2[1],param_2 + 2);
              phy_printf("%s %d %d\n",param_1,*param_2,param_2[1]);
              return 1;
            }
            iVar2 = strcmp(param_1,"fedump_rd_txmem");
            if (iVar2 == 0) {
              fedump_rd_txmem(*param_2,param_2[1]);
              phy_printf("%s %d %d\n",param_1,*param_2,param_2[1]);
              return 1;
            }
            iVar2 = strcmp(param_1,"fedump_rd_rxmem");
            if (iVar2 == 0) {
              fedump_rd_rxmem(*param_2,param_2[1]);
              phy_printf("%s %d %d\n",param_1,*param_2,param_2[1]);
              return 1;
            }
            iVar2 = strcmp(param_1,"set_cpu_freq");
            if (iVar2 == 0) {
              rtc_set_cpu_freq((char)*param_2);
              phy_printf("%s %d\n",param_1,*param_2);
              return 1;
            }
            iVar2 = strcmp(param_1,"loop_mode");
            if (iVar2 == 0) {
              loop_mode_set((short)*param_2,(short)param_2[1],(short)param_2[2]);
              phy_printf("%s 0x%x 0x%x 0x%x\n",param_1,*param_2,param_2[1],param_2[2]);
              return 1;
            }
            iVar2 = strcmp(param_1,"rxiq_cal_test");
            if (iVar2 == 0) {
              rxiq_cal_test((char)*param_2);
              phy_printf("%s %d\n",param_1,*param_2);
              return 1;
            }
            iVar2 = strcmp(param_1,"get_cal_iq");
            if (iVar2 == 0) {
              get_cal_iq((char)*param_2);
              phy_printf("%s %d\n",param_1,*param_2);
              return 1;
            }
            iVar2 = strcmp(param_1,"cpu_reset");
            if (iVar2 == 0) {
              cpu_reset();
              return 1;
            }
            iVar2 = strcmp(param_1,"phy_reg_check");
            if (iVar2 == 0) {
              phy_reg_check();
              return 1;
            }
            iVar2 = strcmp(param_1,"read_sar_dout");
            if (iVar2 == 0) {
              read_sar_dout_test((char)*param_2,param_2[1]);
              return 1;
            }
            iVar2 = strcmp(param_1,"rx_max_gain");
            if (iVar2 == 0) {
              uVar3 = rx_max_gain((char)*param_2);
              phy_printf(&_LC110,uVar3);
              return 1;
            }
            iVar2 = strcmp(param_1,"ble_rx_start");
            if (iVar2 == 0) {
              ble_rx_start(0);
              phy_printf(&_LC62,param_1);
              return 1;
            }
            iVar2 = strcmp(param_1,"i2c_clk_sel");
            if (iVar2 == 0) {
              i2c_clk_sel((char)*param_2);
              phy_printf("%s, %d\n",param_1,*param_2);
              return 1;
            }
            iVar2 = strcmp(param_1,"ht20_rx_opt");
            if (iVar2 == 0) {
              ht20_rx_opt = (undefined1)*param_2;
              phy_printf("%s, %d\n",param_1,*param_2 & 0xff);
              return 1;
            }
            iVar2 = strcmp(param_1,"ble_rx_opt_en");
            if (iVar2 == 0) {
              ble_rx_opt_en = (undefined1)*param_2;
              phy_printf("%s, %d\n",param_1);
              return 1;
            }
            iVar2 = strcmp(param_1,"ate_txframe");
            if (iVar2 == 0) {
              ate_txframe_dut(param_2[1],1,(short)*param_2,1,1);
              phy_printf("%s %d %d\n",param_1,*param_2,param_2[1]);
              return 1;
            }
            iVar2 = strcmp(param_1,"ate_bt");
            if (iVar2 == 0) {
              ate_bt_dut_func(1);
              phy_printf(&_LC62,param_1);
              return 1;
            }
            iVar2 = strcmp(param_1,"read_flash");
            if (iVar2 == 0) {
              read_flash(param_2);
              return 1;
            }
            iVar2 = strcmp(param_1,"erase_flash");
            if (iVar2 == 0) {
              erase_flash(param_2);
              return 1;
            }
            iVar2 = strcmp(param_1,"write_flash");
            if (iVar2 != 0) {
              iVar2 = strcmp(param_1,"txdc_cal_to_flash");
              if (iVar2 == 0) {
                txdc_cal_to_flash(param_2);
                return 1;
              }
              iVar2 = strcmp(param_1,"set_txdc_dig");
              if (iVar2 == 0) {
                set_txdc_dig((int)(short)*param_2,(int)(short)param_2[1]);
                phy_printf("%s %d %d\n",param_1,*param_2,param_2[1]);
                return 1;
              }
              iVar2 = strcmp(param_1,"force_txdc");
              if (iVar2 == 0) {
                force_txdc((char)*param_2,param_2 + 1);
                phy_printf("%s %d\n",param_1,*param_2);
                return 1;
              }
              iVar4 = strcmp(param_1,"txdc_cal_pwdet_init");
              iVar2 = _DAT_600ad000;
              if (iVar4 == 0) {
                txdc_cal_pwdet_init(1,(char)*param_2);
                phy_printf("%s,%d,%d,%dus\n",param_1,_DAT_0001719a,_get_rc_dout,
                           _DAT_600ad000 - iVar2);
                return 1;
              }
              iVar2 = strcmp(param_1,"txdc_cal_pwdet");
              if (iVar2 == 0) {
                txdc_cal_pwdet(&phy_param,1);
                phy_printf(&_LC62,param_1);
                return 1;
              }
              iVar2 = strcmp(param_1,"ate_rfpll_cap_sign");
              if (iVar2 == 0) {
                ate_rfpll_cap_sign(1);
                phy_printf(&_LC62,param_1);
                return 1;
              }
              iVar2 = strcmp(param_1,"freq_stable_test");
              if (iVar2 == 0) {
                phy_printf("%s start\n",param_1);
                freq_stable_test();
                phy_printf("%s end\n",param_1);
                return 1;
              }
              iVar2 = strcmp(param_1,"pll_cap_mem_update");
              if (iVar2 == 0) {
                pll_cap_mem_update_new((int)(short)*param_2);
                phy_printf("%s %d\n",param_1,(int)(short)*param_2);
                return 1;
              }
              iVar2 = strcmp(param_1,"phy_cal_track");
              if (iVar2 == 0) {
                phy_cal_param_track(1);
                phy_printf(&_LC62,param_1);
                return 1;
              }
              iVar2 = strcmp(param_1,"rftest_open_clk");
              if (iVar2 == 0) {
                rftest_open_clk();
                phy_printf(&_LC62,param_1);
                return 1;
              }
              iVar2 = strcmp(param_1,"phy_set_clk_conf");
              if (iVar2 == 0) {
                phy_set_clk_conf((char)*param_2);
                phy_printf(&_LC62,param_1);
                return 1;
              }
              iVar2 = strcmp(param_1,"rxiq_cal_init");
              if (iVar2 == 0) {
                if (*param_2 == 0) {
                  rxiq_cal_init(&phy_param);
                }
                else {
                  get_rfcal_rxiq_data_new(0x80,(char)param_2[1],1);
                }
                phy_printf("%s %d %d\n",param_1,*param_2,param_2[1]);
                return 1;
              }
              iVar2 = strcmp(param_1,"bt_tx_tone");
              if (iVar2 == 0) {
                bt_zb_tx_tone(*param_2,param_2[1],param_2[2],0);
                return 1;
              }
              iVar2 = strcmp(param_1,"zb_tx_tone");
              if (iVar2 == 0) {
                bt_zb_tx_tone(*param_2,param_2[1],param_2[2],1);
                return 1;
              }
              iVar2 = strcmp(param_1,"phy_corr_pwr");
              if (iVar2 == 0) {
                uVar3 = phy_corr_pwr_sum(0x80);
                phy_printf(&_LC110,uVar3);
                return 1;
              }
              iVar2 = strcmp(param_1,"rx_11b_opt");
              if (iVar2 != 0) {
                iVar2 = strcmp(param_1,"phy_ble_set_chan_base");
                if (iVar2 == 0) {
                  phy_ble_set_chan_base((char)*param_2);
                  phy_printf("%s, %d\n",param_1,*param_2);
                  return 1;
                }
                iVar2 = strcmp(param_1,"phy_init_param_set");
                if (iVar2 != 0) {
                  iVar2 = strcmp(param_1,"get_rfcal_num");
                  if (iVar2 == 0) {
                    phy_printf("%s, %d\n",param_1,0x1a8);
                    return 1;
                  }
                  return 0;
                }
                phy_init_param_set((char)*param_2);
                phy_printf("%s, %d\n",param_1,*param_2);
                return 1;
              }
              rx_11b_opt((char)*param_2);
              phy_printf("%s, %d\n",param_1,*param_2);
              return 1;
            }
            write_flash(param_2);
            return 1;
          }
          goto _L487;
        }
      }
      phy_printf(&_LC62,param_1);
      return 1;
    }
  }
_L487:
  phy_printf(&_LC11);
  return 1;
}

