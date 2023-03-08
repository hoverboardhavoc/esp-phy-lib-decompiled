/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_le_v9_rx_per_syncw_service_polling
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_v9_rx_per_syncw_service_polling(void)

{
  bool bVar1;
  int *piVar2;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int aiStack_38 [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int aiStack_14 [3];
  
  uStack_48 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  iStack_3c = 0;
  aiStack_38[0] = 0;
  aiStack_38[1] = 0;
  aiStack_38[2] = 0;
  aiStack_38[3] = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  aiStack_14[0] = 0;
  rw_le_v9_error_print();
  if (_DAT_3fcd02c0 << 0x10 < 0) {
    rw_le_v9_rxstat_unpack_adv
              (&DAT_3fcd02c0,&uStack_48,&iStack_3c,aiStack_38,aiStack_38 + 1,&uStack_24,&iStack_44,
               aiStack_38 + 3);
    rw_le_v9_set_rxundone(&DAT_3fcd02c0);
    rw_le_v9_rx_phyinfo(&DAT_3fcd02c0,0x3fcd0b00,&uStack_20,&uStack_1c,&uStack_18,aiStack_14);
    if (iStack_40 == 0) {
      if (aiStack_38[2] == 0) {
        if (aiStack_38[3] != 0) {
          piVar2 = &len_ep_polling;
          goto _L176;
        }
        if (iStack_44 == 0) {
          if (aiStack_38[0] == 0) {
            if (iStack_3c != 0) {
              piVar2 = &priv_ep_polling;
              goto _L176;
            }
            piVar2 = &cp_polling;
            goto _L175;
          }
          time_ep_polling = time_ep_polling + 1;
          bVar1 = false;
        }
        else {
          piVar2 = &crc_ep_polling;
_L175:
          *piVar2 = *piVar2 + 1;
          bVar1 = true;
        }
      }
      else {
        piVar2 = &type_ep_polling;
_L176:
        bVar1 = false;
        *piVar2 = *piVar2 + 1;
      }
      total_p_polling = total_p_polling + 1;
      if (bVar1) {
        total_rssi_polling = (char)uStack_28 + total_rssi_polling;
        total_inband_polling = (char)uStack_1c + total_inband_polling;
        total_fullband_polling = (char)uStack_18 + total_fullband_polling;
        total_gain_polling = total_gain_polling + aiStack_14[0];
      }
    }
  }
  if (-1 < _DAT_3fcd02e0 << 0x10) {
    return;
  }
  rw_le_v9_rxstat_unpack_adv
            (&DAT_3fcd02e0,&uStack_48,&iStack_3c,aiStack_38,aiStack_38 + 1,&uStack_24,&iStack_44,
             aiStack_38 + 3);
  rw_le_v9_set_rxundone(&DAT_3fcd02e0);
  rw_le_v9_rx_phyinfo(&DAT_3fcd02e0,0x3fcd0f00,&uStack_20,&uStack_1c,&uStack_18,aiStack_14);
  if (iStack_40 != 0) {
    return;
  }
  if (aiStack_38[2] == 0) {
    if (aiStack_38[3] == 0) {
      if (iStack_44 == 0) {
        if (aiStack_38[0] != 0) {
          time_ep_polling = time_ep_polling + 1;
          bVar1 = false;
          goto _L163;
        }
        if (iStack_3c != 0) {
          piVar2 = &priv_ep_polling;
          goto _L178;
        }
        piVar2 = &cp_polling;
      }
      else {
        piVar2 = &crc_ep_polling;
      }
      *piVar2 = *piVar2 + 1;
      bVar1 = true;
      goto _L163;
    }
    piVar2 = &len_ep_polling;
  }
  else {
    piVar2 = &type_ep_polling;
  }
_L178:
  bVar1 = false;
  *piVar2 = *piVar2 + 1;
_L163:
  if (bVar1) {
    total_rssi_polling = (char)uStack_28 + total_rssi_polling;
    total_inband_polling = (char)uStack_1c + total_inband_polling;
    total_fullband_polling = (char)uStack_18 + total_fullband_polling;
    total_gain_polling = total_gain_polling + aiStack_14[0];
  }
  total_p_polling = total_p_polling + 1;
  return;
}

