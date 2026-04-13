/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> run_bt_testmode_case
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 run_bt_testmode_case(char *param_1,uint *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  byte abStack_21 [9];
  
  iVar3 = strcmp(param_1,"bredr_tx");
  if (iVar3 == 0) {
    phy_printf("BREDR TX start\n");
    bredr_tx(*param_2,(char)param_2[1],(char)param_2[2],param_2[3],param_2[4],param_2[5],
             (char)param_2[6],(char)param_2[7]);
    return 1;
  }
  iVar3 = strcmp(param_1,"fcc_bt_tx");
  if (iVar3 == 0) {
    phy_printf("fcc_bt_tx: txpwr=%d, hoppe=%d, chan=%d, rate=%d, DH_type=%d,date_type=%d,continue_en=%d,length=%d\n"
               ,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_2[6]);
    fcc_bt_tx((char)*param_2,(char)param_2[1],(char)param_2[2],(char)param_2[3],(char)param_2[4],
              param_2[5],param_2[6],(short)param_2[7]);
    return 1;
  }
  iVar3 = strcmp(param_1,"bredr_rx");
  if (iVar3 == 0) {
    phy_printf("BREDR RX start\n");
    bredr_rx((char)*param_2,(char)param_2[1],param_2[2],(char)param_2[3],param_2[4],(char)param_2[5]
             ,param_2[6],(char)param_2[7]);
    return 1;
  }
  iVar3 = strcmp(param_1,"rw_rx_per");
  if (iVar3 == 0) {
    phy_printf("BREDR RX start\n");
    rw_rx_per_func(*param_2,param_2[1],param_2[2],param_2[3]);
    return 1;
  }
  iVar3 = strcmp(param_1,"ble_rx");
  if (iVar3 == 0) {
    phy_printf("BLE RX start\n");
    uVar6 = (uint)(byte)param_2[1];
_L380:
    uVar2 = (undefined1)*param_2;
_L382:
    ble_rx(uVar2,uVar6);
  }
  else {
    iVar3 = strcmp(param_1,"ble_tx");
    if (iVar3 == 0) {
      phy_printf("BLE TX start:n=%d,channel=%d,len=%d,type=%d,mode=%d,power=%d,contin_en=%d,delay=%d,hopp_en=%d\n"
                 ,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_2[6]);
      uVar11 = param_2[7];
      uVar2 = (undefined1)param_2[6];
      uVar9 = (uint)(byte)param_2[4];
      uVar8 = param_2[3];
      uVar7 = param_2[2];
      uVar10 = (undefined1)param_2[5];
      uVar1 = (undefined1)param_2[1];
      uVar6 = *param_2;
    }
    else {
      iVar3 = strcmp(param_1,"fcc_le_tx");
      if (iVar3 == 0) {
        phy_printf("%s: txpwr=%d,chan=%d,len=%d,data_type=%d,rate=%d,tx_num=%d,contin_en=%d,delay=%d,hopp_en=%d\n"
                   ,param_1,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5]);
        uVar1 = ble_chan_trans(param_2[1]);
        uVar11 = param_2[7];
        uVar2 = (undefined1)param_2[6];
        uVar10 = (undefined1)*param_2;
        uVar9 = param_2[4] + 1 & 0xff;
        uVar8 = param_2[3];
        uVar7 = param_2[2];
        uVar6 = param_2[5];
      }
      else {
        iVar3 = strcmp(param_1,"fcc_le_tx_syncw");
        if (iVar3 != 0) {
          iVar3 = strcmp(param_1,"ble_tx_continue");
          if (iVar3 == 0) {
            phy_printf("%s: chan=%d,mode=%d,pwr=%d\n",param_1,*param_2,param_2[1],param_2[2]);
            uVar2 = ble_chan_trans(*param_2);
            ble_tx_continue(uVar2,(char)param_2[1],(char)param_2[2]);
            return 1;
          }
          iVar3 = strcmp(param_1,"ble_tx_continue_stop");
          if (iVar3 == 0) {
            phy_printf(&_LC43,param_1);
            ble_tx_continue_stop();
            return 1;
          }
          iVar3 = strcmp(param_1,"rw_le_rx_per");
          if (iVar3 == 0) {
            phy_printf("RW LE V9 RX PER\n");
            uVar6 = param_2[2] + 1 & 0xff;
            goto _L380;
          }
          iVar3 = strcmp(param_1,"rw_le_rx_per_chan");
          if (iVar3 != 0) {
            iVar3 = strcmp(param_1,"zb_tx");
            if (iVar3 == 0) {
              phy_printf("ZB TX start: len=%d, chan=%d, pwr=%d, tx_num=%d, contin_en=%d\n",*param_2,
                         param_2[1],param_2[2],param_2[3],param_2[4]);
              zb_tx(*param_2,param_2[1],param_2[2],param_2[3],(char)param_2[4]);
              return 1;
            }
            iVar3 = strcmp(param_1,"zb_rx");
            if (iVar3 == 0) {
              phy_printf("ZB RX start: chan=%d\n",*param_2);
              zb_rx(*param_2);
              return 1;
            }
            iVar3 = strcmp(param_1,"le_tx_on_delay");
            if (iVar3 == 0) {
              le_tx_on_delay(*param_2);
              uVar6 = *param_2;
              pcVar4 = "%s: %dus\n";
_L383:
              phy_printf(pcVar4,param_1,uVar6);
              return 1;
            }
            iVar3 = strcmp(param_1,"zb_rx_check");
            if (iVar3 == 0) {
              phy_printf("ZB RX start check\n");
              ieee802154_receive_payloadcheck(*param_2,param_2[1]);
              return 1;
            }
            iVar3 = strcmp(param_1,"zb_ed");
            if (iVar3 == 0) {
              ieee802154_ed_scan(*param_2,param_2[1],param_2[2]);
              return 1;
            }
            iVar3 = strcmp(param_1,"ble_tx_config_check");
            if (iVar3 == 0) {
              ble_tx_config_check((char)*param_2);
              return 1;
            }
            iVar3 = strcmp(param_1,"bt_tx_cca_set");
            if (iVar3 == 0) {
              bt_bb_tx_cca_en((char)*param_2);
              bt_lc_tx_on_delay(*param_2 * 0x14 + 0x3c);
              bt_bb_tx_cca_set(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],
                               param_2[6],param_2[7]);
            }
            else {
              iVar3 = strcmp(param_1,"bt_bb_set_rx_sense");
              if (iVar3 == 0) {
                bt_bb_set_rx_sense((char)*param_2,(char)param_2[1],(char)param_2[2]);
                phy_printf("%s %d %d %d\n",param_1,*param_2,param_2[1],param_2[2]);
                return 1;
              }
              iVar3 = strcmp(param_1,"bt_bb_set_max_gain");
              if (iVar3 == 0) {
                bt_bb_set_max_gain((char)*param_2,(char)param_2[1]);
                phy_printf("%s %d %d\n",param_1,*param_2,param_2[1]);
                return 1;
              }
              iVar3 = strcmp(param_1,"bt_bb_get_tx_pwr_table");
              if (iVar3 == 0) {
                abStack_21[0] = 0;
                iVar5 = bt_bb_get_tx_pwr_table(abStack_21);
                for (iVar3 = 0; iVar3 < (int)*param_2; iVar3 = iVar3 + 1) {
                  phy_printf(&_LC62,(int)*(char *)(iVar5 + iVar3));
                }
                uVar6 = (uint)abStack_21[0];
                pcVar4 = "\n%s %d\n";
                goto _L383;
              }
              iVar3 = strcmp(param_1,"bt_bb_init");
              if (iVar3 != 0) {
                return 0;
              }
              bt_bb_v2_init_cmplx(1);
            }
            phy_printf(&_LC43,param_1);
            return 1;
          }
          phy_printf("RW LE V9 RX PER\n");
          uVar2 = ble_chan_trans(*param_2);
          uVar6 = param_2[2] + 1 & 0xff;
          goto _L382;
        }
        phy_printf("%s: txpwr=%d,chan=%d,len=%d,data_type=%d,syncw=0x71764129,rate=%d,tx_num=%d,contin_en=%d,delay=%d,hopp_en=%d\n"
                   ,param_1,*param_2,param_2[1],param_2[2],param_2[3],param_2[5],param_2[6]);
        uVar1 = ble_chan_trans(param_2[1]);
        uVar11 = param_2[8];
        uVar2 = (undefined1)param_2[7];
        uVar10 = (undefined1)*param_2;
        uVar9 = param_2[5] + 1 & 0xff;
        uVar8 = param_2[3];
        uVar7 = param_2[2];
        uVar6 = param_2[6];
      }
    }
    ble_tx(uVar6,uVar1,uVar7,uVar8,uVar9,uVar10,uVar2,uVar11);
  }
  return 1;
}

