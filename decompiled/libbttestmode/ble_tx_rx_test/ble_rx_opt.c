/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_rx_opt
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_rx_opt(int param_1,uint param_2,int param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    param_2 = (uint)(byte)ch_map2[param_2];
    iVar1 = 0x962;
_L116:
    param_2 = param_2 + iVar1;
  }
  else if (param_2 < 0x1b) {
    iVar1 = param_2 * 5;
    param_2 = 0x92e;
    goto _L116;
  }
  if ((ble_rx_opt_en != '\0') &&
     ((((param_2 == 0x974 || (param_2 == 0x988)) || (param_2 == 0x99c)) || (param_2 == 0x9b0)))) {
    if (param_1 == 0) {
      (**(code **)(_g_phyFuns + 0x60))(0x6d,0,4,4,0,ble_rtc_reg,*(code **)(_g_phyFuns + 0x60));
      (**(code **)(_g_phyFuns + 0x60))(0x6a,1,0,7,4,ble_dreg_1p1,*(code **)(_g_phyFuns + 0x60));
      (**(code **)(_g_phyFuns + 0x60))(0x61,0,5,6,6,ble_ulp_code_en,*(code **)(_g_phyFuns + 0x60));
      (**(code **)(_g_phyFuns + 0x60))(0x61,0,6,7,0,ble_ulp_code,*(code **)(_g_phyFuns + 0x60));
      UNRECOVERED_JUMPTABLE = *(code **)(_g_phyFuns + 0x60);
      uVar2 = 1;
_L117:
                    /* WARNING: Could not recover jumptable at 0x00010a62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(0x61,0,7,5,5,uVar2);
      return;
    }
    ble_rtc_reg = (**(code **)(_g_phyFuns + 0x5c))(0x6d,0,4,4,0,*(code **)(_g_phyFuns + 0x5c));
    ble_ulp_code = (**(code **)(_g_phyFuns + 0x5c))(0x61,0,4,7,0,*(code **)(_g_phyFuns + 0x5c));
    ble_dreg_1p1 = (**(code **)(_g_phyFuns + 0x5c))(0x6a,1,0,7,4,*(code **)(_g_phyFuns + 0x5c));
    ble_ulp_code_en = (**(code **)(_g_phyFuns + 0x5c))(0x61,0,5,6,6,*(code **)(_g_phyFuns + 0x5c));
    (**(code **)(_g_phyFuns + 0x60))(0x6d,0,4,4,0,ble_rtc_reg + -4,*(code **)(_g_phyFuns + 0x60));
    if ((param_2 == 0x988) || (param_2 == 0x9b0)) {
      (**(code **)(_g_phyFuns + 0x60))(0x6a,1,0,7,4,ble_dreg_1p1 + -2,*(code **)(_g_phyFuns + 0x60))
      ;
      (**(code **)(_g_phyFuns + 0x60))(0x61,0,5,6,6,1,*(code **)(_g_phyFuns + 0x60));
      (**(code **)(_g_phyFuns + 0x60))
                (0x61,0,6,7,0,ble_ulp_code + -0x14,*(code **)(_g_phyFuns + 0x60));
      if (param_2 == 0x9b0) {
        UNRECOVERED_JUMPTABLE = *(code **)(_g_phyFuns + 0x60);
        uVar2 = 0;
        goto _L117;
      }
    }
  }
  return;
}

