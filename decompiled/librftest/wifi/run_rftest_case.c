/*
 * Last changed at upstream commit 7bdaf7da843d762451b59947318cd2c6cf733855
 * https://github.com/espressif/esp-phy-lib/commit/7bdaf7da843d762451b59947318cd2c6cf733855
 * Upstream date: 2023-07-27 11:33:55 +0800
 * Upstream subject: fix c3 ble tx bug
 * Source: librftest -> wifi.o -> run_rftest_case
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 run_rftest_case(char *param_1,uint *param_2,undefined4 param_3)

{
  code *pcVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  run_para_array_clear(param_2,param_3);
  iVar4 = strcmp(param_1,"temp_read");
  if (iVar4 != 0) {
    rftest_pll_track();
  }
  iVar4 = strcmp(param_1,"WifiTxStart");
  if (iVar4 == 0) {
    if ((int)param_2[1] < 1) {
      phy_printf("wifi tx out: 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x\n",*param_2,param_2[2],param_2[3],
                 param_2[4],param_2[5]);
    }
    WifiTxStart(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5]);
    phy_printf(" Tx Over, tx_state:0x%x!\n",_DAT_60033c68 & 0xff);
  }
  else {
    iVar4 = strcmp(param_1,"tx_cbw40m_en");
    if (iVar4 == 0) {
      tx_cbw40m_en = (undefined1)*param_2;
      phy_printf("%s: %d\n",param_1,*param_2 & 0xff);
    }
    else {
      iVar4 = strcmp(param_1,"cbw40m_en");
      if (iVar4 == 0) {
        cbw40m_en((char)*param_2);
      }
      else {
        iVar4 = strcmp(param_1,"short_gi_enable");
        if (iVar4 == 0) {
          short_gi_enable = *param_2;
          phy_printf("%s=%d\n",param_1);
        }
        else {
          iVar4 = strcmp(param_1,"tx_contin_en");
          if (iVar4 == 0) {
            tx_contin_en((char)*param_2);
          }
          else {
            iVar4 = strcmp(param_1,"wifitxout");
            if (iVar4 == 0) {
              wifitxout(param_2,param_3);
            }
            else {
              iVar4 = strcmp(param_1,"wifiscwout");
              if (iVar4 == 0) {
                wifiscwout(param_2);
              }
              else {
                iVar4 = strcmp(param_1,"phy_txtone_start");
                if (iVar4 == 0) {
                  phy_txtone_start((short)*param_2,(int)(short)param_2[1],(char)param_2[2]);
                  phy_printf("%s,freq=%d,offset=%d,atten=%d\n",param_1,*param_2,param_2[1],
                             param_2[2]);
                }
                else {
                  iVar4 = strcmp(param_1,"esp_tx");
                  if (iVar4 == 0) {
                    esp_tx_func(param_2,param_3);
                  }
                  else {
                    iVar4 = strcmp(param_1,"esp_rx");
                    if (iVar4 == 0) {
                      esp_rx_func(param_2);
                    }
                    else {
                      iVar4 = strcmp(param_1,"WifiRxStart");
                      if (iVar4 == 0) {
                        phy_printf(&_LC98,param_1);
                        WifiRxStart(*param_2);
                      }
                      else {
                        iVar4 = strcmp(param_1,"FillTxPacket");
                        if (iVar4 == 0) {
                          FillTxPacket(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],
                                       param_2[5],param_2[6],param_2[7]);
                          phy_printf(&_LC98,param_1);
                        }
                        else {
                          iVar4 = strcmp(param_1,"rd");
                          if (iVar4 == 0) {
                            phy_printf("0x%x\n",*(undefined4 *)*param_2);
                          }
                          else {
                            iVar4 = strcmp(param_1,"rd_dport");
                            if (iVar4 == 0) {
                              phy_printf("0x%x\n",*(undefined4 *)*param_2);
                            }
                            else {
                              iVar4 = strcmp(param_1,"wr_dport");
                              if (iVar4 == 0) {
                                *(uint *)*param_2 = param_2[1];
                                phy_printf("0x%x\n",*(undefined4 *)*param_2);
                              }
                              else {
                                iVar4 = strcmp(param_1,"wr");
                                if (iVar4 == 0) {
                                  *(uint *)*param_2 = param_2[1];
                                  phy_printf("0x%x\n",*(undefined4 *)*param_2);
                                }
                                else {
                                  iVar4 = strcmp(param_1,"rftest_init");
                                  if (iVar4 == 0) {
                                    rftest_init();
                                  }
                                  else {
                                    iVar4 = strcmp(param_1,"phy_close_rf");
                                    if (iVar4 == 0) {
                                      phy_close_rf();
                                      phy_printf(&_LC98,param_1);
                                    }
                                    else {
                                      iVar4 = strcmp(param_1,"RF_init_sel");
                                      if (iVar4 == 0) {
                                        RF_init_sel((char)*param_2,param_2[1]);
                                      }
                                      else {
                                        iVar4 = strcmp(param_1,"RF_init_ram_sel");
                                        if (iVar4 == 0) {
                                          RF_init_ram_sel((char)*param_2,param_2[1]);
                                        }
                                        else {
                                          iVar4 = strcmp(param_1,"esp_chg_freqoff");
                                          if (iVar4 == 0) {
                                            esp_chg_freqoff((int)(char)*param_2,param_2[1]);
                                          }
                                          else {
                                            iVar4 = strcmp(param_1,"rx_2440_opt_en");
                                            if (iVar4 == 0) {
                                              rx_2440_opt_en = (undefined1)*param_2;
                                              rx_2440_print_en = (undefined1)param_2[1];
                                              phy_printf("%s %d %d\n",param_1);
                                            }
                                            else {
                                              iVar4 = strcmp(param_1,"tx_reg_opt");
                                              if (iVar4 == 0) {
                                                tx_reg_opt = (undefined1)*param_2;
                                                phy_printf("%s %d\n",param_1);
                                              }
                                              else {
                                                iVar4 = strcmp(param_1,"RdMem");
                                                if (iVar4 == 0) {
                                                  for (puVar3 = (undefined4 *)*param_2;
                                                      puVar3 < (undefined4 *)(*param_2 + param_2[1])
                                                      ; puVar3 = puVar3 + 1) {
                                                    phy_printf("0x%x ",*puVar3);
                                                  }
                                                  phy_printf(&_LC12);
                                                }
                                                else {
                                                  iVar4 = strcmp(param_1,"sm");
                                                  if (iVar4 == 0) {
                                                    *(uint *)*param_2 =
                                                         *(uint *)*param_2 | param_2[1];
                                                    phy_printf("reg 0x%x=0x%x\n",
                                                               *(undefined4 *)*param_2);
                                                  }
                                                  else {
                                                    iVar4 = strcmp(param_1,"cm");
                                                    if (iVar4 == 0) {
                                                      *(uint *)*param_2 =
                                                           ~param_2[1] & *(uint *)*param_2;
                                                      phy_printf("reg 0x%x=0x%x\n",
                                                                 *(undefined4 *)*param_2);
                                                    }
                                                    else {
                                                      iVar4 = strcmp(param_1,"gb");
                                                      if (iVar4 == 0) {
                                                        phy_printf("0x%x\n",*(uint *)*param_2 >>
                                                                            (param_2[2] & 0x1f) &
                                                                            (1 << ((param_2[1] -
                                                                                   param_2[2]) + 1 &
                                                                                  0x1f)) - 1U);
                                                      }
                                                      else {
                                                        iVar4 = strcmp(param_1,"ri");
                                                        if (iVar4 == 0) {
                                                          uVar5 = (**(code **)(_g_phyFuns + 0x1ac))
                                                                            ((char)*param_2,
                                                                             (char)param_2[1],
                                                                             (char)param_2[2],
                                                                             *(code **)(_g_phyFuns +
                                                                                       0x1ac));
                                                          phy_printf("0x%x\n",uVar5);
                                                        }
                                                        else {
                                                          iVar4 = strcmp(param_1,"wi");
                                                          if (iVar4 == 0) {
                                                            (**(code **)(_g_phyFuns + 0x1b4))
                                                                      ((char)*param_2,
                                                                       (char)param_2[1],
                                                                       (char)param_2[2],
                                                                       (char)param_2[3],
                                                                       *(code **)(_g_phyFuns + 0x1b4
                                                                                 ));
                                                            phy_printf(&_LC98,param_1);
                                                          }
                                                          else {
                                                            iVar4 = strcmp(param_1,"wim");
                                                            if (iVar4 == 0) {
                                                              (**(code **)(_g_phyFuns + 0x1bc))
                                                                        ((char)*param_2,
                                                                         (char)param_2[1],
                                                                         (char)param_2[2],
                                                                         (char)param_2[3],
                                                                         (char)param_2[4],
                                                                         (char)param_2[5],
                                                                         *(code **)(_g_phyFuns +
                                                                                   0x1bc));
                                                              phy_printf(&_LC98,param_1);
                                                            }
                                                            else {
                                                              iVar4 = strcmp(param_1,"rim");
                                                              if (iVar4 == 0) {
                                                                uVar5 = (**(code **)(_g_phyFuns +
                                                                                    0x1b8))((char)*
                                                  param_2,(char)param_2[1],(char)param_2[2],
                                                  (char)param_2[3],(char)param_2[4],
                                                  *(code **)(_g_phyFuns + 0x1b8));
                                                  phy_printf("0x%x\n",uVar5);
                                                  }
                                                  else {
                                                    iVar4 = strcmp(param_1,"pbus_debugmode");
                                                    if (iVar4 == 0) {
                                                      (**(code **)(_g_phyFuns + 0x1d4))
                                                                (*(code **)(_g_phyFuns + 0x1d4));
                                                      phy_printf(&_LC98,param_1);
                                                    }
                                                    else {
                                                      iVar4 = strcmp(param_1,"pbus_workmode");
                                                      if (iVar4 == 0) {
                                                        (**(code **)(_g_phyFuns + 0x1d8))
                                                                  (*(code **)(_g_phyFuns + 0x1d8));
                                                        phy_printf(&_LC98,param_1);
                                                      }
                                                      else {
                                                        iVar4 = strcmp(param_1,"pbus");
                                                        if (iVar4 == 0) {
                                                          (**(code **)(_g_phyFuns + 0x1cc))
                                                                    ((char)*param_2,(char)param_2[1]
                                                                     ,(short)param_2[2],
                                                                     *(code **)(_g_phyFuns + 0x1cc))
                                                          ;
                                                          phy_printf(&_LC98,param_1);
                                                        }
                                                        else {
                                                          iVar4 = strcmp(param_1,"pbus_rd");
                                                          if (iVar4 == 0) {
                                                            uVar5 = (**(code **)(_g_phyFuns + 0x1d0)
                                                                    )((char)*param_2,
                                                                      (char)param_2[1],
                                                                      *(code **)(_g_phyFuns + 0x1d0)
                                                                     );
                                                            phy_printf("0x%x\n",uVar5);
                                                          }
                                                          else {
                                                            iVar4 = strcmp(param_1,"txtone");
                                                            if (iVar4 == 0) {
                                                              txtone_enable =
                                                                   *param_2 != 0 || param_2[3] != 0;
                                                              start_tx_tone(param_2[1],param_2[2],
                                                                            param_2[4],param_2[5]);
                                                              phy_printf(&_LC98,param_1);
                                                            }
                                                            else {
                                                              iVar4 = strcmp(param_1,"txtone_step");
                                                              if (iVar4 == 0) {
                                                                txtone_enable =
                                                                     *param_2 != 0 ||
                                                                     param_2[3] != 0;
                                                                start_tx_tone_step(*param_2 & 0xff,
                                                                                   (int)(short)
                                                  param_2[1],(char)param_2[2],param_2[3] & 0xff,
                                                  (int)(short)param_2[4],(char)param_2[5]);
                                                  phy_printf(&_LC98,param_1);
                                                  }
                                                  else {
                                                    iVar4 = strcmp(param_1,"stoptone");
                                                    if (iVar4 == 0) {
                                                      txtone_enable = 0;
                                                      stop_tx_tone(*param_2);
                                                      phy_printf(&_LC98,param_1);
                                                    }
                                                    else {
                                                      iVar4 = strcmp(param_1,"adctrig");
                                                      if (iVar4 == 0) {
                                                        adctrig(*param_2,param_2[1],param_2[2],
                                                                param_2[3],param_2[4],param_2[5],
                                                                param_2[6],param_2[7]);
                                                        phy_printf(&_LC98,param_1);
                                                      }
                                                      else {
                                                        iVar4 = strcmp(param_1,"flash_test_init");
                                                        if (iVar4 == 0) {
                                                          flash_test_init(*param_2,param_2[1],
                                                                          param_2[2],param_2[3]);
                                                          phy_printf(
                                                  "flash_test_init clk_div=%d, clk_drv=%d, data_drv=%d, flash_mode=%d, done\n"
                                                  ,*param_2,param_2[1],param_2[2],param_2[3]);
                                                  }
                                                  else {
                                                    iVar4 = strcmp(param_1,"flash_test_enable");
                                                    if (iVar4 == 0) {
                                                      _flash_test_enable =
                                                           CONCAT31(flash_test_enable_1,
                                                                    (char)*param_2);
                                                      phy_printf("flash_test_enable=%d\n",
                                                                 *param_2 & 0xff);
                                                    }
                                                    else {
                                                      iVar4 = strcmp(param_1,"flash_driver_read");
                                                      if (iVar4 == 0) {
                                                        phy_printf(
                                                  "flash_test_enable=%d, flash_freq=%d, flash_clk_drv=%d, flash_data_drv=%d\n"
                                                  ,_flash_test_enable & 0xff,_flash_clk,
                                                  _flash_clk_drv,_flash_data_drv);
                                                  }
                                                  else {
                                                    iVar4 = strcmp(param_1,"init_para_chg");
                                                    if (iVar4 == 0) {
                                                      if (*param_2 == 1) {
                                                        init_param_default[param_2[1]] =
                                                             (char)param_2[2];
                                                      }
                                                      register_chipv7_phy_init_param
                                                                (init_param_default);
                                                      phy_printf("init_param_default[%d]=0x%x\n",
                                                                 init_param_default[param_2[1]]);
                                                    }
                                                    else {
                                                      iVar4 = strcmp(param_1,"read_flash");
                                                      if (iVar4 == 0) {
                                                        read_flash(param_2);
                                                      }
                                                      else {
                                                        iVar4 = strcmp(param_1,"bb_init");
                                                        if (iVar4 == 0) {
                                                          _flash_test_enable = 0;
                                                          DAT_000180f2 = (undefined1)*param_2;
                                                          bb_init();
                                                          phy_printf("%s %d\n",param_1,*param_2);
                                                        }
                                                        else {
                                                          iVar4 = strcmp(param_1,"mac_init");
                                                          if (iVar4 == 0) {
                                                            mac_init();
                                                            phy_printf(&_LC98,param_1);
                                                          }
                                                          else {
                                                            iVar4 = strcmp(param_1,"rxdc_cal");
                                                            if (iVar4 == 0) {
                                                              local_34 = 0x1000100;
                                                              uStack_30 = 0x1000100;
                                                              (**(code **)(_g_phyFuns + 0x54))
                                                                        (1,*(code **)(_g_phyFuns +
                                                                                     0x54));
                                                              (**(code **)(_g_phyFuns + 0x50))
                                                                        (1,*(code **)(_g_phyFuns +
                                                                                     0x50));
                                                              pbus_rx_dco_cal(4000,&local_34,10,1,1)
                                                              ;
                                                              phy_printf("%d, %d, %d, %d\n",
                                                                         (int)(short)local_34,
                                                                         (int)local_34._2_2_,
                                                                         (int)(short)uStack_30,
                                                                         (int)uStack_30._2_2_);
                                                            }
                                                            else {
                                                              iVar4 = strcmp(param_1,"phy_set_freq")
                                                              ;
                                                              if (iVar4 == 0) {
                                                                uVar7 = *param_2;
                                                                uVar8 = param_2[1];
                                                                phy_set_freq(uVar7 & 0xffff,
                                                                             (int)(short)uVar8);
                                                                phy_printf(
                                                  "%s, freq=%d, freq_offset=%d\n",param_1,
                                                  uVar7 & 0xffff,(int)(short)uVar8);
                                                  }
                                                  else {
                                                    iVar6 = strcmp(param_1,"RFChannelSel");
                                                    iVar4 = _DAT_60035000;
                                                    if (iVar6 == 0) {
                                                      rftest_set_chan((char)*param_2,
                                                                      (char)param_2[1]);
                                                      phy_printf("%s %d %d, %dus\n",param_1,*param_2
                                                                 ,param_2[1],_DAT_60035000 - iVar4);
                                                    }
                                                    else {
                                                      iVar4 = strcmp(param_1,"set_chan");
                                                      if (iVar4 == 0) {
                                                        chip_v7_set_chan((int)(char)*param_2,
                                                                         (int)(char)param_2[1]);
                                                        phy_printf(" %s %d %d\n",param_1,*param_2,
                                                                   param_2[1]);
                                                      }
                                                      else {
                                                        iVar4 = strcmp(param_1,
                                                  "target_power_backoff");
                                                  if (iVar4 == 0) {
                                                    target_power_backoff((int)(char)*param_2);
                                                    phy_printf("%s %d dB set ok!\n",param_1,
                                                               (int)(char)*param_2 / 4);
                                                  }
                                                  else {
                                                    iVar4 = strcmp(param_1,"set_tx_gain");
                                                    if (iVar4 == 0) {
                                                      tx_pa_bb_gain = (short)*param_2;
                                                      DAT_000164fe = (short)param_2[1];
                                                      force_tx_gain((int)(char)param_2[2],
                                                                    (char)param_2[3]);
                                                      phy_printf("%s,0x%x,0x%x,%d,%d\n",param_1,
                                                                 *param_2,param_2[1],
                                                                 (int)(char)param_2[2],param_2[3]);
                                                    }
                                                    else {
                                                      iVar4 = strcmp(param_1,"set_ble_tx_gain");
                                                      if (iVar4 == 0) {
                                                        tx_pa_bb_gain = (short)*param_2;
                                                        DAT_000164fe = (short)param_2[1];
                                                        force_ble_tx_gain((int)(char)param_2[2],
                                                                          (char)param_2[3]);
                                                        phy_printf("%s, 0x%x,0x%x,%d,%d\n",param_1,
                                                                   *param_2,param_2[1],
                                                                   (int)(char)param_2[2],param_2[3])
                                                        ;
                                                      }
                                                      else {
                                                        iVar4 = strcmp(param_1,"check_noise_floor");
                                                        if (iVar4 == 0) {
                                                          check_noise_floor1();
                                                          phy_printf(&_LC157,_DAT_6001c050 |
                                                                             0xfffffc00);
                                                        }
                                                        else {
                                                          iVar4 = strcmp(param_1,"phy_set_most_tpw")
                                                          ;
                                                          if (iVar4 == 0) {
                                                            phy_set_most_tpw((int)(char)*param_2);
                                                            phy_printf("%s: %d\n",param_1,*param_2);
                                                          }
                                                          else {
                                                            iVar4 = strcmp(param_1,
                                                  "phy_get_most_tpw");
                                                  if (iVar4 == 0) {
                                                    uVar5 = phy_get_most_tpw();
                                                    phy_printf("%s: %d\n",param_1,uVar5);
                                                  }
                                                  else {
                                                    iVar4 = strcmp(param_1,"set_tx_dig_gain");
                                                    if (iVar4 != 0) {
                                                      iVar4 = strcmp(param_1,"accumiq");
                                                      if (iVar4 == 0) {
                                                        accumiq(*param_2,param_2[1]);
                                                      }
                                                      else {
                                                        iVar6 = strcmp(param_1,"phy_init");
                                                        iVar4 = _DAT_60035000;
                                                        if (iVar6 == 0) {
                                                          phy_init();
                                                          phy_printf("%s %dus\n",param_1,
                                                                     _DAT_60035000 - iVar4);
                                                        }
                                                        else {
                                                          iVar4 = strcmp(param_1,"set_chan_offset");
                                                          if (iVar4 == 0) {
                                                            uVar8 = *param_2;
                                                            chip_v7_set_chan_offset
                                                                      ((int)(short)uVar8);
                                                            phy_printf("freq: %d %dkhz %d\n",
                                                                       *param_2,(int)(short)uVar8,
                                                                       (int)_phy_param);
                                                          }
                                                          else {
                                                            iVar4 = strcmp(param_1,"rf_init");
                                                            if (iVar4 == 0) {
                                                              _phy_param = 0;
                                                              rf_init();
                                                              phy_printf(&_LC98,param_1);
                                                            }
                                                            else {
                                                              iVar4 = strcmp(param_1,
                                                  "esp_origin_mac");
                                                  if (iVar4 == 0) {
                                                    esp_origin_mac();
                                                  }
                                                  else {
                                                    iVar4 = strcmp(param_1,"print_ver");
                                                    if (iVar4 == 0) {
                                                      phy_printf("phy_version: %d.%d, %s, %s\n",0xb,
                                                                 10,"Jul 27 2023","10:43:28");
                                                    }
                                                    else {
                                                      iVar4 = strcmp(param_1,"init_print");
                                                      if (iVar4 == 0) {
                                                        module_test_cal_print();
                                                        phy_printf("print end\n");
                                                      }
                                                      else {
                                                        iVar4 = strcmp(param_1,"get_rx_buffer");
                                                        if (iVar4 == 0) {
                                                          phy_printf("%s: %d, 0x%x\n",param_1,
                                                                     *param_2,param_2[1]);
                                                          get_rx_buffer((char)*param_2,param_2[1]);
                                                          phy_printf(&_LC12);
                                                        }
                                                        else {
                                                          iVar4 = strcmp(param_1,"get_rx_buffer1");
                                                          if (iVar4 == 0) {
                                                            phy_printf("%s: %d, 0x%x\n",param_1,
                                                                       *param_2,param_2[1]);
                                                            get_rx_buffer1((char)*param_2,param_2[1]
                                                                          );
                                                            phy_printf(&_LC12);
                                                          }
                                                          else {
                                                            iVar4 = strcmp(param_1,
                                                  "dig_11b_filter_sel");
                                                  if (iVar4 == 0) {
                                                    _DAT_6001c400 =
                                                         (*param_2 & 3) << 0xd |
                                                         _DAT_6001c400 & 0xffff9fff;
                                                    phy_printf("%s: %d\n",param_1,*param_2);
                                                  }
                                                  else {
                                                    iVar4 = strcmp(param_1,"test_txtone_pwr");
                                                    if (iVar4 == 0) {
                                                      test_txtone_pwr(*param_2,param_2[1],param_2[2]
                                                                      ,(int)(short)param_2[3]);
                                                      phy_printf(&_LC12);
                                                    }
                                                    else {
                                                      iVar4 = strcmp(param_1,"txpwr_track_en");
                                                      if (iVar4 == 0) {
                                                        phy_tx_pwr_track_en = (char)*param_2;
                                                        _phy_param = CONCAT31(_DAT_00018051,
                                                                              phy_tx_pwr_track_en);
                                                        phy_tx_pwr_correct_en =
                                                             (undefined1)param_2[1];
                                                        phy_tx_pwr_print_en = (undefined1)param_2[2]
                                                        ;
                                                        (**(code **)(_g_phyFuns + 0x170))
                                                                  (1,*(code **)(_g_phyFuns + 0x170))
                                                        ;
                                                        phy_printf(
                                                  "%s: track_en=%d, correct_en=%d, print_en=%d\n",
                                                  param_1,phy_tx_pwr_track_en,phy_tx_pwr_correct_en,
                                                  phy_tx_pwr_print_en);
                                                  }
                                                  else {
                                                    iVar4 = strcmp(param_1,"packet_pwdet_out");
                                                    if (iVar4 == 0) {
                                                      uVar5 = pocket_sar_power((char)*param_2);
                                                      phy_printf(&_LC157,uVar5);
                                                    }
                                                    else {
                                                      iVar4 = strcmp(param_1,"adc_rand");
                                                      if (iVar4 == 0) {
                                                        phy_get_adc_rand((char)*param_2);
                                                        phy_printf("%s %d\n",param_1,*param_2);
                                                      }
                                                      else {
                                                        iVar4 = strcmp(param_1,"set_pbus_mem");
                                                        if (iVar4 == 0) {
                                                          set_pbus_mem_debug((short)*param_2,
                                                                             (short)param_2[1],
                                                                             (short)param_2[2],
                                                                             (short)param_2[3],
                                                                             (short)param_2[4],
                                                                             (short)param_2[5],
                                                                             (short)param_2[6],
                                                                             (short)param_2[7]);
                                                        }
                                                        else {
                                                          iVar4 = strcmp(param_1,
                                                  "rssi_min_max_print");
                                                  if (iVar4 == 0) {
                                                    rssi_min_max_print = (undefined1)*param_2;
                                                    phy_printf("%s=%d\n",param_1);
                                                  }
                                                  else {
                                                    iVar4 = strcmp(param_1,"pll_cap_track_en");
                                                    if (iVar4 == 0) {
                                                      _phy_param = CONCAT31(_DAT_00018051,
                                                                            (char)*param_2);
                                                      phy_printf("%s=%d\n",param_1,*param_2);
                                                    }
                                                    else {
                                                      iVar4 = strcmp(param_1,"burn_in_test");
                                                      if (iVar4 == 0) {
                                                        burn_in_test();
                                                        phy_printf(&_LC98,param_1);
                                                      }
                                                      else {
                                                        iVar4 = strcmp(param_1,"get_pll_vol");
                                                        if (iVar4 == 0) {
                                                          uVar5 = (**(code **)(_g_phyFuns + 0x154))
                                                                            (1,*(code **)(_g_phyFuns
                                                                                         + 0x154));
                                                          phy_printf(&_LC157,uVar5);
                                                        }
                                                        else {
                                                          iVar4 = strcmp(param_1,"phy_get_vdd33");
                                                          if (iVar4 == 0) {
                                                            uVar5 = phy_get_vdd33();
                                                            phy_printf(&_LC157,uVar5);
                                                          }
                                                          else {
                                                            iVar4 = strcmp(param_1,
                                                  "pll_cap_print_en");
                                                  if (iVar4 == 0) {
                                                    _phy_param = CONCAT31(_DAT_00018051,
                                                                          (char)*param_2);
                                                    phy_printf("%s=%d\n",param_1,*param_2 & 0xff);
                                                  }
                                                  else {
                                                    iVar6 = strcmp(param_1,"set_freq_time");
                                                    iVar4 = _DAT_60035000;
                                                    if (iVar6 == 0) {
                                                      (**(code **)(_g_phyFuns + 0x1b4))
                                                                (0x62,1,1,100,
                                                                 *(code **)(_g_phyFuns + 0x1b4));
                                                      set_rf_freq_offset(_phy_param & 0xff,
                                                                         (short)*param_2,0);
                                                      phy_printf("%s, %d, %d\n",param_1,*param_2,
                                                                 _DAT_60035000 - iVar4);
                                                    }
                                                    else {
                                                      iVar6 = strcmp(param_1,"test_i2c_time");
                                                      iVar4 = _DAT_60035000;
                                                      if (iVar6 == 0) {
                                                        uVar8 = *param_2;
                                                        iVar6 = 100;
                                                        do {
                                                          if ((uVar8 & 0xff) == 0) {
                                                            (**(code **)(_g_phyFuns + 0x1ac))
                                                                      (0x6b,0,10,
                                                                       *(code **)(_g_phyFuns + 0x1ac
                                                                                 ));
                                                          }
                                                          else {
                                                            (**(code **)(_g_phyFuns + 0x1b4))
                                                                      (0x6b,0,10,0x74,
                                                                       *(code **)(_g_phyFuns + 0x1b4
                                                                                 ));
                                                          }
                                                          iVar6 = iVar6 + -1;
                                                        } while (iVar6 != 0);
                                                        phy_printf("%s,%d,%d\n",param_1,uVar8 & 0xff
                                                                   ,_DAT_60035000 - iVar4);
                                                      }
                                                      else {
                                                        iVar4 = strcmp(param_1,"rc_cal");
                                                        if (iVar4 == 0) {
                                                          _phy_param = 0;
                                                          rc_cal();
                                                          phy_printf(&_LC98,param_1);
                                                        }
                                                        else {
                                                          iVar4 = strcmp(param_1,"force_iq_set");
                                                          if (iVar4 == 0) {
                                                            force_iq_set((char)*param_2,
                                                                         (char)param_2[1],
                                                                         (char)param_2[2],
                                                                         (char)param_2[3]);
                                                            phy_printf(&_LC98,param_1);
                                                          }
                                                          else {
                                                            iVar4 = strcmp(param_1,"txdc_cal");
                                                            if (iVar4 == 0) {
                                                              _flash_test_enable = 0;
                                                              txdc_cal_init(&phy_param,0xf,0x20,0);
                                                              pcVar2 = (code *)&phy_param;
                                                              phy_printf("TXDC, ");
                                                              do {
                                                                pcVar1 = pcVar2 + 0x124;
                                                                pcVar2 = pcVar2 + 2;
                                                                phy_printf(&_LC49,*(undefined2 *)
                                                                                   pcVar1);
                                                              } while (pcVar2 != 
                                                  phy_get_rf_cal_version);
                                                  }
                                                  else {
                                                    iVar4 = strcmp(param_1,"rfcal_track");
                                                    if (iVar4 == 0) {
                                                      rfcal_track(0);
                                                      phy_printf(&_LC98,param_1);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"tx_cap_init");
                                                    if (iVar4 == 0) {
                                                      _phy_param = 0;
                                                      tx_cap_init();
                                                      phy_printf(&_LC98,param_1);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"txpwr_offset");
                                                    if (iVar4 == 0) {
                                                      _phy_param = 0;
                                                      txpwr_offset();
                                                      phy_printf(&_LC98,param_1);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"tx_pwctrl_init");
                                                    if (iVar4 == 0) {
                                                      _phy_param = 0;
                                                      tx_pwctrl_init(1);
                                                      phy_printf(&_LC98,param_1);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"txiq_cal_init");
                                                    if (iVar4 == 0) {
                                                      _phy_param = 0;
                                                      txiq_cal_init();
                                                      phy_printf(&_LC98,param_1);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"bt_txiq_cal");
                                                    if (iVar4 == 0) {
                                                      _phy_param = 0;
                                                      bt_txiq_cal();
                                                      phy_printf(&_LC98,param_1);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"bt_tx_pwctrl_init");
                                                    if (iVar4 == 0) {
                                                      _phy_param = 0;
                                                      bt_tx_pwctrl_init();
                                                      phy_printf(&_LC98,param_1);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"test_rxgain_table");
                                                    if (iVar4 == 0) {
                                                      _phy_param = 0;
                                                      set_rx_gain_table(0x985,(char)*param_2);
                                                      phy_printf("%s %d\n",param_1,*param_2);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"get_sar2_vol");
                                                    if (iVar4 == 0) {
                                                      uVar5 = (**(code **)(_g_phyFuns + 0x150))
                                                                        ((char)*param_2,
                                                                         *(code **)(_g_phyFuns +
                                                                                   0x150));
                                                      phy_printf(&_LC157,uVar5);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"read_sar2_code");
                                                    if (iVar4 == 0) {
                                                      uVar5 = (**(code **)(_g_phyFuns + 0x14c))
                                                                        (*(code **)(_g_phyFuns +
                                                                                   0x14c));
                                                      phy_printf(&_LC157,uVar5);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"test_rf_cal_level");
                                                    if (iVar4 == 0) {
                                                      test_rf_cal_level((char)*param_2,param_2[1]);
                                                      phy_printf(
                                                  "test_rf_cal_level %d done,flash_addr 0x%x\n",
                                                  *param_2,param_2[1]);
                                                  return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"rf_cal_data_clear");
                                                  if (iVar4 == 0) {
                                                    rf_cal_data_clear();
                                                    phy_printf(&_LC98,param_1);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"esp_tester_cali_en");
                                                  if (iVar4 == 0) {
                                                    esp_tester_cali_en((char)*param_2);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"esp_set_bt_correct");
                                                  if (iVar4 == 0) {
                                                    esp_set_bt_correct((char)*param_2,
                                                                       (int)(char)param_2[1]);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"esp_set_wifi_index");
                                                  if (iVar4 == 0) {
                                                    esp_set_wifi_index((int)(char)*param_2);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"esp_set_wifi_cali_data");
                                                  if (iVar4 == 0) {
                                                    uVar5 = esp_set_wifi_cali_data(param_2);
                                                    phy_printf(&_LC157,uVar5);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"esp_set_bt_cali_data");
                                                  if (iVar4 == 0) {
                                                    uVar5 = esp_set_bt_cali_data(param_2);
                                                    phy_printf(&_LC157,uVar5);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"esp_wr_efuse_data");
                                                  if (iVar4 == 0) {
                                                    esp_wr_efuse_data((char)*param_2);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"esp_recover_efuse_data");
                                                  if (iVar4 == 0) {
                                                    read_cmd();
                                                    esp_recover_efuse_data((char)*param_2);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"efuse_cali_enable");
                                                  if (iVar4 == 0) {
                                                    efuse_cali_enable = (undefined1)*param_2;
                                                    phy_printf("efuse_cali_enable:%d\n",
                                                               *param_2 & 0xff);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"esp_wr_flash_data");
                                                  if (iVar4 == 0) {
                                                    esp_wr_cal_data(*param_2);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"meas_tone_pwr_db");
                                                  if (iVar4 == 0) {
                                                    uVar5 = meas_tone_pwr_db((int)(char)*param_2,
                                                                             (int)(short)param_2[1],
                                                                             (short)param_2[2]);
                                                    phy_printf(&_LC157,uVar5);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"tx_ack_test");
                                                  if (iVar4 == 0) {
                                                    tx_ack_test(*param_2,param_2[1],(char)param_2[2]
                                                                ,(short)param_2[3],param_2[4],
                                                                param_2[5],param_2[6],param_2[7]);
                                                    phy_printf(
                                                  "%s:ap_addr0=0x%x, ap_addr1=0x%x, tx_rate=0x%x, tx_num=%d, tx_length=%d, backoff=%d, aifs=%d, delay_ms=%d, tx_cbw40=%d\n"
                                                  ,param_1,*param_2,param_2[1],param_2[2],param_2[3]
                                                  ,param_2[4],param_2[5]);
                                                  return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"tx_ack_init");
                                                  if (iVar4 == 0) {
                                                    tx_ack_init(*param_2,param_2[1],(char)param_2[2]
                                                                ,param_2[3],(char)param_2[4],
                                                                (char)param_2[5]);
                                                    phy_printf(
                                                  "%s:ap_addr0=0x%x, ap_addr1=0x%x, tx_rate=0x%x, tx_length=%d,tx_cbw40=%d\n"
                                                  ,param_1,*param_2,param_2[1],param_2[2],param_2[3]
                                                  ,param_2[4]);
                                                  return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"tx_ack_start");
                                                  if (iVar4 == 0) {
                                                    tx_ack_start((short)*param_2,param_2[1],
                                                                 param_2[2],param_2[3],&local_34);
                                                    phy_printf(
                                                  "rx_flag:0x%x,ack_num:%d,rssi:%d,rssi_max:%d,rssi_min:%d\n"
                                                  ,local_34,uStack_30,uStack_2c,uStack_28,uStack_24)
                                                  ;
                                                  phy_printf(
                                                  "tx_ack_start: tx_num=%d, backoff=%d, aifs=%d, delay_ms=%d\n"
                                                  ,*param_2,param_2[1],param_2[2],param_2[3]);
                                                  return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"remove_11b_4p8G_spur");
                                                  if (iVar4 == 0) {
                                                    remove_11b_4p8G_spur
                                                              ((char)*param_2,(char)param_2[1],
                                                               (char)param_2[2]);
                                                    phy_printf("%s %d %d %d\n",param_1,*param_2,
                                                               param_2[1],param_2[2]);
                                                    return 1;
                                                  }
                                                  iVar6 = strcmp(param_1,"phy_wakeup_init");
                                                  iVar4 = _DAT_60035000;
                                                  if (iVar6 == 0) {
                                                    phy_wakeup_init();
                                                    phy_printf("%s %dus\n",param_1,
                                                               _DAT_60035000 - iVar4);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"phy_test_init");
                                                  if (iVar4 == 0) {
                                                    phy_test_init();
                                                    phy_printf(&_LC98,param_1);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"rfpll_cal_time");
                                                  if (iVar4 == 0) {
                                                    rfpll_cal_time((char)*param_2,(char)param_2[1]);
                                                    phy_printf("%s: chan_freq=%d, mode=%d\n",param_1
                                                               ,*param_2,param_2[1]);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"freq_init");
                                                  if (iVar4 == 0) {
                                                    _phy_param = 0;
                                                    get_rf_freq_init();
                                                    phy_printf(&_LC98,param_1);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"force_txtone");
                                                  if (iVar4 == 0) {
                                                    force_txtone(*param_2,param_2[1]);
                                                    phy_printf("%s atten=%d, delay_us=%d\n",param_1,
                                                               *param_2,param_2[1]);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"test_mem_time");
                                                  if (iVar4 == 0) {
                                                    test_mem_time((char)*param_2,(char)param_2[1]);
                                                    phy_printf("%s read_en=%d, func_en=%d\n",param_1
                                                               ,*param_2,param_2[1]);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"get_tx_rate");
                                                  if (iVar4 == 0) {
                                                    uVar5 = get_tx_rate();
                                                    phy_printf("txrate=%d\n",uVar5);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"set_rx_sense");
                                                  if (iVar4 == 0) {
                                                    adaptive_test_en = 1;
                                                    uVar8 = *param_2;
                                                    set_rx_sense((int)(char)uVar8);
                                                    phy_printf("%s: rssi=%d\n",param_1,
                                                               (int)(char)uVar8);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"close_peri");
                                                  if (iVar4 == 0) {
                                                    close_peri();
                                                    phy_printf(&_LC12);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"get_tone_sar_dout");
                                                  if (iVar4 == 0) {
                                                    uVar5 = get_tone_sar_dout((char)*param_2);
                                                    phy_printf(&_LC157,uVar5);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"get_power_db");
                                                  if (iVar4 == 0) {
                                                    uVar5 = get_power_db(0xf4);
                                                    phy_printf("%s %d\n",param_1,uVar5);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"pwdet_code_cal");
                                                  if (iVar4 == 0) {
                                                    pwdet_code_cal();
                                                    phy_printf(&_LC98,param_1);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"temp_read");
                                                  if (iVar4 == 0) {
                                                    uVar5 = rom1_tsens_temp_read();
                                                    phy_printf("temp=%d, init_temp=%d\n",uVar5,
                                                               (int)_phy_param);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"uart1_sel");
                                                  if (iVar4 != 0) {
                                                    iVar4 = strcmp(param_1,"btpwr_track_en");
                                                    if (iVar4 == 0) {
                                                      phy_bt_power_track((char)*param_2);
                                                      phy_printf("%s,%d\n",param_1,_phy_param & 0xff
                                                                );
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"rx_gain_comp");
                                                    if (iVar4 == 0) {
                                                      rx_gain_comp();
                                                      phy_printf(&_LC12);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"tx_chan_atten");
                                                    if (iVar4 == 0) {
                                                      tx_chan_atten();
                                                      phy_printf(&_LC12);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"rx_chan_noise");
                                                    if (iVar4 == 0) {
                                                      rx_chan_noise((char)*param_2);
                                                      phy_printf(&_LC12);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"rx_chan_noise_all");
                                                    if (iVar4 == 0) {
                                                      rx_chan_noise_all();
                                                      phy_printf(&_LC12);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"set_noise_floor");
                                                    if (iVar4 == 0) {
                                                      iVar4 = (int)(*param_2 * -0x10000) >> 0x10;
                                                      (**(code **)(_g_phyFuns + 0x8c))
                                                                (iVar4,*(code **)(_g_phyFuns + 0x8c)
                                                                );
                                                      phy_printf("%s %d\n",param_1,iVar4);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"get_iq_est_pwr");
                                                    if (iVar4 == 0) {
                                                      uVar5 = get_iq_est_pwr();
                                                      phy_printf(&_LC255,uVar5);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"dc_iq_est");
                                                    if (iVar4 == 0) {
                                                      (**(code **)(_g_phyFuns + 0x10c))
                                                                (1,(short)*param_2,&local_34,
                                                                 *(code **)(_g_phyFuns + 0x10c));
                                                      phy_printf("%d,%d,%d\n",local_34,uStack_30,
                                                                 uStack_2c);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"bt_pll_track_en");
                                                    if (iVar4 == 0) {
                                                      phy_printf("%s=%d\n",param_1,*param_2);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"freq_mem_backup");
                                                    if (iVar4 == 0) {
                                                      phy_printf("%s, %d 0x%x\n",param_1,*param_2,
                                                                 0x3fcb0000);
                                                      phy_freq_mem_backup((char)*param_2,0x3fcb0000)
                                                      ;
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"set_tx_power");
                                                    if (iVar4 == 0) {
                                                      set_tx_power((int)(char)*param_2,
                                                                   (char)param_2[1]);
                                                      phy_printf("%s %d %d\n",param_1,*param_2,
                                                                 param_2[1]);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"bt_rx_force");
                                                    if (iVar4 == 0) {
                                                      bt_rx_force((char)*param_2);
                                                      phy_printf("%s %d\n",param_1,*param_2);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"tx_gain_print");
                                                    if (iVar4 == 0) {
                                                      rom1_wifi_set_tx_gain(_phy_param & 0xff,1);
                                                      rom1_bt_set_tx_gain(1);
                                                      phy_printf(&_LC98,param_1);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"phy_temp_range_wifi");
                                                    if (iVar4 == 0) {
                                                      phy_printf("Init: %d %d\n",(int)_DAT_000180fe,
                                                                 (int)_bt_track_pll_cap);
                                                      _DAT_000180fe = (short)*param_2;
                                                      _bt_track_pll_cap = (short)param_2[1];
                                                      phy_printf("Modify: %s %d %d\n",param_1);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"phy_temp_range_bt");
                                                    if (iVar4 == 0) {
                                                      phy_printf("Init: %d %d\n",(int)_DAT_00018102,
                                                                 (int)_beacon_print);
                                                      _DAT_00018102 = (short)*param_2;
                                                      _beacon_print = (short)param_2[1];
                                                      phy_printf("Modify: %s %d %d\n",param_1);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"rx_2440m_opt");
                                                    if (iVar4 == 0) {
                                                      rx_2440m_opt();
                                                      phy_printf(&_LC98,param_1);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"phy_analog_delay_cal");
                                                    if (iVar4 == 0) {
                                                      phy_analog_delay_cal();
                                                      phy_printf(&_LC98,param_1);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"phy_internal_delay");
                                                    if (iVar4 == 0) {
                                                      uVar5 = phy_internal_delay();
                                                      phy_printf("%s %d\n",param_1,uVar5);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"phy_ftm_comp");
                                                    if (iVar4 == 0) {
                                                      uVar5 = phy_ftm_comp();
                                                      phy_printf("%s %d\n",param_1,uVar5);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"esp_txrx_test");
                                                    if (iVar4 == 0) {
                                                      esp_txrx_test((char)*param_2,(char)param_2[1],
                                                                    (short)param_2[2],
                                                                    (int)(char)param_2[3],
                                                                    (short)param_2[4],param_2[5],
                                                                    (char)param_2[6],
                                                                    (char)param_2[7]);
                                                      phy_printf("%s %d %d %d %d %d %d %d %d\n",
                                                                 param_1,*param_2,param_2[1],
                                                                 param_2[2],param_2[3],param_2[4],
                                                                 param_2[5]);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"esp_en_reboot");
                                                    if (iVar4 == 0) {
                                                      esp_en_reboot();
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"le_slave_test");
                                                    if (iVar4 == 0) {
                                                      phy_printf("%s %d %d %d %d\n",param_1,*param_2
                                                                 ,param_2[1],param_2[2],param_2[3]);
                                                      rw_le_pq_slave_test(param_2[1],*param_2,
                                                                          param_2[2],param_2[3]);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"le_master_test");
                                                    if (iVar4 == 0) {
                                                      le_master_test(*param_2,param_2[1],param_2[2],
                                                                     param_2[3],param_2[4]);
                                                      phy_printf("%s %d, %d, %d, %d %d\n",param_1,
                                                                 *param_2,param_2[1],param_2[2],
                                                                 param_2[3],param_2[4]);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"internal_vol_test");
                                                    if (iVar4 == 0) {
                                                      internal_vol_test(1);
                                                      phy_printf(&_LC98,param_1);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"phy_i2c_check");
                                                    if (iVar4 == 0) {
                                                      phy_i2c_check();
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"gpio_output_set");
                                                    if (iVar4 == 0) {
                                                      dig_gpio_out((char)*param_2,(char)param_2[1],
                                                                   (char)param_2[2]);
                                                      phy_printf(
                                                  "gpio_output_set: gpio_no=%d, out_set=%d, drv=%d\n"
                                                  ,*param_2,param_2[1],param_2[2]);
                                                  return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"gpio_dis_output");
                                                  if (iVar4 == 0) {
                                                    gpio_output_set(0,0,1 << (*param_2 & 0x1f));
                                                    phy_printf("gpio_dis_output: gpio_no=%d\n",
                                                               *param_2);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"gpio_input_get");
                                                  if (iVar4 == 0) {
                                                    uVar8 = *param_2;
                                                    uVar5 = dig_gpio_in(uVar8 & 0xff);
                                                    phy_printf(
                                                  "gpio_input_get: gpio_no=%d, get_value=%d\n",uVar8
                                                  ,uVar5);
                                                  return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"ESP_TEST_GPIO");
                                                  if (iVar4 == 0) {
                                                    ESP_TEST_GPIO(param_2,&local_34,3);
                                                    phy_printf("Input result:0x%x,0x%x\n",local_34,
                                                               uStack_30);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"cmdstop_gpio");
                                                  if (iVar4 == 0) {
                                                    CMDSTOP_GPIO();
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"adc_check_for_module");
                                                  if (iVar4 == 0) {
                                                    ate_adc_for_module();
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"adc_io_check_for_module");
                                                  if (iVar4 == 0) {
                                                    adc_check_for_module_by_gpio_out0
                                                              (*param_2,param_2[1],param_2[2],
                                                               param_2[3]);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"phy_disable_cca");
                                                  if (iVar4 == 0) {
                                                    (**(code **)(_g_phyFuns + 0x10))
                                                              (*(code **)(_g_phyFuns + 0x10));
                                                    phy_printf(&_LC98,param_1);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"phy_enable_cca");
                                                  if (iVar4 == 0) {
                                                    (**(code **)(_g_phyFuns + 0x14))
                                                              (*(code **)(_g_phyFuns + 0x14));
                                                    phy_printf(&_LC98,param_1);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"phy_current_level_set");
                                                  if (iVar4 == 0) {
                                                    phy_current_level_set((char)*param_2);
                                                    if (*param_2 == 0) {
                                                      (**(code **)(_g_phyFuns + 0x1bc))
                                                                (0x61,0,5,6,6,0,
                                                                 *(code **)(_g_phyFuns + 0x1bc));
                                                    }
                                                    phy_init();
                                                    phy_printf("%s %d\n",param_1,*param_2);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"rxdc_remain");
                                                  if (iVar4 == 0) {
                                                    ate_rxdc_remain_check(1);
                                                    phy_printf(&_LC98,param_1);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"bt_tx_cca_set");
                                                  if (iVar4 == 0) {
                                                    bt_bb_tx_cca_set(*param_2,param_2[1],param_2[2],
                                                                     param_2[3],param_2[4],
                                                                     param_2[5],param_2[6],
                                                                     param_2[7]);
                                                    phy_printf(&_LC98,param_1);
                                                    return 1;
                                                  }
                                                  iVar4 = strcmp(param_1,"noise_check_loop");
                                                  if (iVar4 != 0) {
                                                    iVar4 = strcmp(param_1,"rom_num");
                                                    if (iVar4 == 0) {
                                                      uVar5 = chip726_phyrom_version_num();
                                                      phy_printf("%s=%d\n",param_1,uVar5);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"erase_flash");
                                                    if (iVar4 == 0) {
                                                      erase_flash(param_2);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"write_flash");
                                                    if (iVar4 == 0) {
                                                      write_flash(param_2);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"bt_tx_tone");
                                                    if (iVar4 == 0) {
                                                      bt_tx_tone(*param_2,param_2[1],param_2[2]);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"phy_2480m_opt");
                                                    if (iVar4 == 0) {
                                                      phy_2480m_opt(1);
                                                      phy_printf(&_LC98,param_1);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"phy_corr_pwr");
                                                    if (iVar4 == 0) {
                                                      uVar5 = phy_corr_pwr_sum(0x80);
                                                      phy_printf(&_LC157,uVar5);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"read_hw_noisefloor");
                                                    if (iVar4 == 0) {
                                                      uVar5 = (**(code **)(_g_phyFuns + 0x88))
                                                                        (*(code **)(_g_phyFuns +
                                                                                   0x88));
                                                      phy_printf("read_hw_noisefloor %d\n",uVar5);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"rf_freq_debug");
                                                    if (iVar4 == 0) {
                                                      rf_freq_debug((char)*param_2,(char)param_2[1],
                                                                    (short)param_2[2],
                                                                    (short)param_2[3],
                                                                    (char)param_2[4],
                                                                    (char)param_2[5],
                                                                    (char)param_2[6]);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"enable_lr");
                                                    if (iVar4 == 0) {
                                                      phy_enable_low_rate();
                                                      lr_enable = 1;
                                                      phy_printf(&_LC98,param_1);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"disable_lr");
                                                    if (iVar4 == 0) {
                                                      phy_disable_low_rate();
                                                      lr_enable = 0;
                                                      phy_printf(&_LC98,param_1);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"force_rx_gain");
                                                    if (iVar4 == 0) {
                                                      force_rx_gain((char)*param_2,(char)param_2[1],
                                                                    (char)param_2[2]);
                                                      phy_printf("%s %d %d %d\n",param_1,*param_2,
                                                                 param_2[1],param_2[2]);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"force_txon_mode");
                                                    if (iVar4 == 0) {
                                                      phy_printf("%s %d %d %d\n",param_1,*param_2,
                                                                 param_2[1],param_2[2]);
                                                      force_txon_mode((char)*param_2,
                                                                      (char)param_2[1],
                                                                      (char)param_2[2]);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"phy_11p_set");
                                                    if (iVar4 == 0) {
                                                      phy_11p_set((char)*param_2,(char)param_2[1]);
                                                      phy_printf("%s, enable=%d, mode=%d\n",param_1,
                                                                 *param_2,param_2[1]);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"test_div_adc");
                                                    if (iVar4 == 0) {
                                                      test_div_adc((char)*param_2,(short)param_2[1])
                                                      ;
                                                      phy_printf("%s %d %d\n",param_1,*param_2,
                                                                 param_2[1]);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"get_tx_rate_pwr");
                                                    if (iVar4 == 0) {
                                                      uVar5 = get_tx_rate_pwr();
                                                      phy_printf("%s %d\n",param_1,uVar5);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"pll_cap_mem_update");
                                                    if (iVar4 == 0) {
                                                      rom2_pll_cap_mem_update((int)(char)*param_2);
                                                      phy_printf("%s %d\n",param_1,*param_2);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"phy_set_11b_param");
                                                    if (iVar4 == 0) {
                                                      phy_set_11b_param();
                                                      phy_printf(&_LC98,param_1);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"cpu_reset");
                                                    if (iVar4 == 0) {
                                                      cpu_reset();
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"esp_get_rx_result");
                                                    if (iVar4 == 0) {
                                                      uVar5 = esp_get_rx_result(&local_34);
                                                      phy_printf("%s: %d, %d, %d, flag=%d\n",param_1
                                                                 ,local_34,uStack_30,uStack_2c,uVar5
                                                                );
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"phy_chan_pwr_backoff");
                                                    if (iVar4 == 0) {
                                                      phy_chan_pwr_backoff((int)(char)*param_2);
                                                      phy_printf("%s, %d dBm\n",param_1,*param_2);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"rx_11b_opt");
                                                    if (iVar4 == 0) {
                                                      rx_11b_opt((char)*param_2);
                                                      phy_printf("%s %d\n",param_1,*param_2);
                                                      return 1;
                                                    }
                                                    iVar4 = strcmp(param_1,"phy_param_set");
                                                    if (iVar4 != 0) {
                                                      return 0;
                                                    }
                                                    rc_cal_en = (char)*param_2;
                                                    if (rc_cal_en == '\0') {
                                                      _wifi_txband = 0xbe;
                                                      _wifi_txband_ht40 = 0x19a;
                                                    }
                                                    else {
                                                      _wifi_txband = (undefined2)param_2[1];
                                                      _wifi_txband_ht40 = (undefined2)param_2[2];
                                                    }
                                                    phy_init();
                                                    phy_printf("%s, %d %d %d\n",param_1,*param_2,
                                                               set_rf_freq_offset,DAT_000181ba);
                                                    return 1;
                                                  }
                                                  iVar4 = 0;
                                                  do {
                                                    phy_printf(&_LC298,iVar4);
                                                    noise_check_loop(0xff,1);
                                                    iVar4 = iVar4 + 1;
                                                    ets_delay_us(1000);
                                                  } while (iVar4 != 10);
                                                  }
                                                  }
                                                  phy_printf(&_LC98,param_1);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

