/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> run_bt_testmode_case
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 run_bt_testmode_case(char *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = strcmp(param_1,"fcc_le_tx");
  if (iVar2 == 0) {
    fcc_le_v9_tx(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5]);
  }
  iVar2 = strcmp(param_1,"fcc_le_tx_syncw");
  if (iVar2 == 0) {
    esp_ble_tx_func(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_2[6]);
    return 1;
  }
  iVar2 = strcmp(param_1,"bt_tx_cca_set");
  if (iVar2 == 0) {
    bt_bb_tx_cca_set(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_2[6],
                     param_2[7]);
    pcVar3 = "TX CCA!\n";
    goto _L394;
  }
  iVar2 = strcmp(param_1,"sw_cca_test");
  if (iVar2 == 0) {
    sw_cca_test(*param_2,param_2[1]);
    return 1;
  }
  iVar2 = strcmp(param_1,"rw_rx_per");
  if (iVar2 == 0) {
    rw_bt_v9_rx_per_ulap(*param_2,param_2[1],param_2[2],param_2[3]);
    return 1;
  }
  iVar2 = strcmp(param_1,"rw_le_rx_per");
  if (iVar2 == 0) {
    iVar6 = param_2[2];
    iVar5 = param_2[1];
    iVar2 = *param_2;
  }
  else {
    iVar2 = strcmp(param_1,"rw_le_rx_per_chan");
    if (iVar2 != 0) {
      iVar2 = strcmp(param_1,"le_v9_adv");
      if (iVar2 == 0) {
        rw_le_v9_adv();
        pcVar3 = "rw le v9 adv ok \n";
      }
      else {
        iVar2 = strcmp(param_1,"le_v9_adv_scan");
        if (iVar2 == 0) {
          rw_le_v9_adv_scan();
          pcVar3 = "rw le v9 adv scan ok \n";
        }
        else {
          iVar2 = strcmp(param_1,"le_rx_bg");
          if (iVar2 == 0) {
            rw_le_v9_testmode_rx_init(*param_2,param_2[1],param_2[2]);
            interrupt_set_wrapper(0,0x22,2,1);
            interrupt_handler_set_wrapper(2,t1_toggle_refresh_rw_v9,0);
            interrupt_on_wrapper(2);
            t1_start_toggle(100);
            pcVar3 = "le rx in background start \n";
          }
          else {
            iVar2 = strcmp(param_1,"le_rx_bg_stop");
            if (iVar2 == 0) {
              rf_rw_v9_le_disable();
              _DAT_60031000 = _DAT_60031000 | 0x80000000;
              interrupt_off_wrapper(2);
              pcVar3 = "le rx in background stop \n";
            }
            else {
              iVar2 = strcmp(param_1,"le_rx");
              if (iVar2 == 0) {
                rw_le_v9_testmode_rx(*param_2,param_2[1]);
                pcVar3 = "le rx stop \n";
              }
              else {
                iVar2 = strcmp(param_1,"adctrig");
                if (iVar2 == 0) {
                  pcVar3 = "btadctrig done \n";
                }
                else {
                  iVar2 = strcmp(param_1,"wifi_pti_toggle");
                  if (iVar2 == 0) {
                    phy_printf("wifi pti toggle start!\n");
                    wifi_pti_toggle_start(*param_2,param_2[1],param_2[2]);
                    return 1;
                  }
                  iVar2 = strcmp(param_1,"wifi_pti_toggle_stop");
                  if (iVar2 == 0) {
                    phy_printf("wifi pti toggle stop!\n");
                    wifi_pti_toggle_stop();
                    return 1;
                  }
                  iVar2 = strcmp(param_1,"le_adv_service");
                  if (iVar2 == 0) {
                    rw_le_v9_adv_service(*param_2);
                    return 1;
                  }
                  iVar2 = strcmp(param_1,"le_adv_service_stop");
                  if (iVar2 == 0) {
                    rw_le_v9_adv_service_stop();
                    return 1;
                  }
                  iVar2 = strcmp(param_1,"cmd_polling_test");
                  if (iVar2 == 0) {
                    cmd_polling_test();
                  }
                  else {
                    iVar2 = strcmp(param_1,"cmd_polling_start");
                    if (iVar2 != 0) {
                      iVar2 = strcmp(param_1,"le_adv_polling");
                      if (iVar2 == 0) {
                        rw_le_v9_adv_polling(*param_2);
                        pcVar3 = "le adv\n";
                      }
                      else {
                        iVar2 = strcmp(param_1,"le_adv_polling_stop");
                        if (iVar2 != 0) {
                          iVar2 = strcmp(param_1,"wifi_pti_toggle_polling");
                          if (iVar2 == 0) {
                            phy_printf(&_LC62,wifi_pti_toggle_polling_pti_period);
                            wifi_pti_toggle_polling_pti_period = *param_2;
                            uVar4 = cmd_polling_attach(0,0,wifi_pti_toggle_service_polling,0);
                            pcVar3 = "wifi pti toggle %d\n";
                          }
                          else {
                            iVar2 = strcmp(param_1,"wifi_pti_toggle_polling_stop");
                            if (iVar2 != 0) {
                              iVar2 = strcmp(param_1,"rw_le_rx_per_polling");
                              if (iVar2 == 0) {
                                rw_le_v9_rx_per_syncw_polling(*param_2,param_2[1],param_2[2]);
                                return 1;
                              }
                              iVar2 = strcmp(param_1,"rw_le_rx_per_polling_stop");
                              if (iVar2 == 0) {
                                rw_le_v9_rx_per_syncw_polling_stop();
                                return 1;
                              }
                              iVar2 = strcmp(param_1,"bt_pll_track_start");
                              if (iVar2 == 0) {
                                bt_pll_track_start();
                                pcVar3 = "bt_pll_track_start\n";
                              }
                              else {
                                iVar2 = strcmp(param_1,"le_pq_adv");
                                if (iVar2 == 0) {
                                  rw_le_pq_adv_evt();
                                  pcVar3 = "le_pq_adv ok \n";
                                }
                                else {
                                  iVar2 = strcmp(param_1,"le_pq_adv_scan");
                                  if (iVar2 == 0) {
                                    rw_le_pq_scan_evt();
                                    pcVar3 = "le_pq_scan ok \n";
                                  }
                                  else {
                                    iVar2 = strcmp(param_1,"le_pq_tmd_tx");
                                    if (iVar2 == 0) {
                                      rw_le_pq_testmode_txevt
                                                (0x40a1df7c,0xbc2f,*param_2,param_2[1],param_2[2],
                                                 param_2[3],param_2[4],param_2[5]);
                                      pcVar3 = "le_pq_tmd_tx ok \n";
                                    }
                                    else {
                                      iVar2 = strcmp(param_1,"le_pq_tmd_rx");
                                      if (iVar2 == 0) {
                                        rw_le_pq_testmode_rxevt
                                                  (0x40a1df7c,0xe02f,*param_2,param_2[1],param_2[2],
                                                   param_2[3],param_2[4],param_2[5]);
                                        pcVar3 = "le_pq_tmd_rx ok \n";
                                      }
                                      else {
                                        iVar2 = strcmp(param_1,"le_pq_conm");
                                        if (iVar2 != 0) {
                                          iVar2 = strcmp(param_1,"le_timer");
                                          if (iVar2 == 0) {
                                            timer_tb(*param_2);
                                            return 1;
                                          }
                                          iVar2 = strcmp(param_1,"rd");
                                          if (iVar2 != 0) {
                                            iVar2 = strcmp(param_1,"wr");
                                            if (iVar2 != 0) {
                                              iVar2 = strcmp(param_1,"RdMem");
                                              if (iVar2 != 0) {
                                                return 0;
                                              }
                                              for (puVar1 = (undefined4 *)*param_2;
                                                  (int)puVar1 < *param_2 + param_2[1];
                                                  puVar1 = puVar1 + 1) {
                                                phy_printf("0x%x ",*puVar1);
                                              }
                                              pcVar3 = "\n";
                                              goto _L394;
                                            }
                                            *(int *)*param_2 = param_2[1];
                                          }
                                          pcVar3 = "0x%x\n";
                                          uVar4 = *(undefined4 *)*param_2;
                                          goto _L398;
                                        }
                                        rw_le_pq_conmst_evt(*param_2,param_2[1],param_2[2],
                                                            param_2[3]);
                                        pcVar3 = "le_pq_conm ok \n";
                                      }
                                    }
                                  }
                                }
                              }
                              goto _L394;
                            }
                            uVar4 = cmd_polling_dettach(0,wifi_pti_toggle_service_polling);
                            force_coex_timer0_wifi_pti_v2(0);
                            pcVar3 = "wifi pti toggle stop %d\n";
                          }
_L398:
                          phy_printf(pcVar3,uVar4);
                          return 1;
                        }
                        rw_le_v9_adv_polling_stop();
                        pcVar3 = "le adv stop\n";
                      }
                      goto _L394;
                    }
                    cmd_polling_start(100);
                  }
                  pcVar3 = "start polling\n";
                }
              }
            }
          }
        }
      }
_L394:
      phy_printf(pcVar3);
      return 1;
    }
    iVar2 = ble_chan_trans(*param_2);
    iVar6 = param_2[2];
    iVar5 = param_2[1];
  }
  esp_ble_rx_func(iVar2,iVar5,iVar6);
  return 1;
}

