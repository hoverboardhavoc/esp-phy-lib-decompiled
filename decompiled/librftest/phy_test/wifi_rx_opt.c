/*
 * Last changed at upstream commit ab9b9d0880221ad8423d78ba36e73ff2cb450358
 * https://github.com/espressif/esp-phy-lib/commit/ab9b9d0880221ad8423d78ba36e73ff2cb450358
 * Upstream date: 2024-01-24 19:07:43 +0800
 * Upstream subject: fix wifi boot bug at low temp
 * Source: librftest -> phy_test.o -> wifi_rx_opt
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wifi_rx_opt(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = chan_to_freq(_phy_param);
  iVar2 = abs_temp(uVar1 - 0x988);
  if (iVar2 < 10) {
    uVar1 = 0x988;
  }
  else {
    iVar2 = abs_temp(uVar1 - 0x9b0);
    if (iVar2 < 10) {
      uVar1 = 0x9b0;
    }
  }
  if ((wifi_rx_opt_en == '\0') || ((uVar1 != 0x988 && (uVar1 != 0x9b0)))) {
    return;
  }
  uVar1 = uVar1 & 0xffff;
  if (param_1 == 0) {
    (**(code **)(_g_phyFuns + 0x60))(0x6d,0,4,4,0,rx_rtc_reg,*(code **)(_g_phyFuns + 0x60));
    (**(code **)(_g_phyFuns + 0x60))(0x6a,1,0,7,4,rx_dreg_1p1,*(code **)(_g_phyFuns + 0x60));
    (**(code **)(_g_phyFuns + 0x60))(0x61,0,5,6,6,rx_ulp_code_en,*(code **)(_g_phyFuns + 0x60));
    (**(code **)(_g_phyFuns + 0x60))(0x61,0,6,7,0,rx_ulp_code,*(code **)(_g_phyFuns + 0x60));
    UNRECOVERED_JUMPTABLE = *(code **)(_g_phyFuns + 0x60);
    uVar3 = 1;
_L205:
                    /* WARNING: Could not recover jumptable at 0x00011482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0x61,0,7,5,5,uVar3);
    return;
  }
  rx_rtc_reg = (**(code **)(_g_phyFuns + 0x5c))(0x6d,0,4,4,0,*(code **)(_g_phyFuns + 0x5c));
  rx_ulp_code = (**(code **)(_g_phyFuns + 0x5c))(0x61,0,4,7,0,*(code **)(_g_phyFuns + 0x5c));
  rx_dreg_1p1 = (**(code **)(_g_phyFuns + 0x5c))(0x6a,1,0,7,4,*(code **)(_g_phyFuns + 0x5c));
  rx_ulp_code_en = (**(code **)(_g_phyFuns + 0x5c))(0x61,0,5,6,6,*(code **)(_g_phyFuns + 0x5c));
  (**(code **)(_g_phyFuns + 0x60))(0x6d,0,4,4,0,rx_rtc_reg + -4,*(code **)(_g_phyFuns + 0x60));
  if ((uVar1 == 0x988) || (uVar1 == 0x9b0)) {
    (**(code **)(_g_phyFuns + 0x60))(0x6a,1,0,7,4,rx_dreg_1p1 + -2,*(code **)(_g_phyFuns + 0x60));
    (**(code **)(_g_phyFuns + 0x60))(0x61,0,5,6,6,1,*(code **)(_g_phyFuns + 0x60));
    (**(code **)(_g_phyFuns + 0x60))(0x61,0,6,7,0,rx_ulp_code + -0x14,*(code **)(_g_phyFuns + 0x60))
    ;
    if (uVar1 == 0x9b0) {
      UNRECOVERED_JUMPTABLE = *(code **)(_g_phyFuns + 0x60);
      uVar3 = 0;
      goto _L205;
    }
  }
  return;
}

