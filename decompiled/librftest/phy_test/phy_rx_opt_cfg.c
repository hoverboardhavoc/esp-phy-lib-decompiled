/*
 * Last changed at upstream commit c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * https://github.com/espressif/esp-phy-lib/commit/c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * Upstream date: 2024-04-03 16:53:14 +0800
 * Upstream subject: fix coex test wifi affect ble s8 tx problm, and c3 s3 light sleep current opt, and c3 s3 ble rx problem
 * Source: librftest -> phy_test.o -> phy_rx_opt_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_rx_opt_cfg(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  if (param_1 == 0) {
    (**(code **)(_g_phyFuns + 0x60))(0x6d,0,4,4,0,rx_rtc_reg,*(code **)(_g_phyFuns + 0x60));
    (**(code **)(_g_phyFuns + 0x60))(0x6a,1,0,7,4,rx_dreg_1p1,*(code **)(_g_phyFuns + 0x60));
    (**(code **)(_g_phyFuns + 0x60))(0x61,0,5,6,6,rx_ulp_code_en,*(code **)(_g_phyFuns + 0x60));
    (**(code **)(_g_phyFuns + 0x60))(0x61,0,6,7,0,rx_ulp_code,*(code **)(_g_phyFuns + 0x60));
    pcVar4 = *(code **)(_g_phyFuns + 0x60);
    uVar3 = 1;
  }
  else {
    rx_rtc_reg = (**(code **)(_g_phyFuns + 0x5c))(0x6d,0,4,4,0,*(code **)(_g_phyFuns + 0x5c));
    rx_ulp_code = (**(code **)(_g_phyFuns + 0x5c))(0x61,0,4,7,0,*(code **)(_g_phyFuns + 0x5c));
    rx_dreg_1p1 = (**(code **)(_g_phyFuns + 0x5c))(0x6a,1,0,7,4,*(code **)(_g_phyFuns + 0x5c));
    rx_ulp_code_en = (**(code **)(_g_phyFuns + 0x5c))(0x61,0,5,6,6,*(code **)(_g_phyFuns + 0x5c));
    (**(code **)(_g_phyFuns + 0x60))(0x6d,0,4,4,0,rx_rtc_reg + -4,*(code **)(_g_phyFuns + 0x60));
    if ((param_2 != 0x988) && (param_2 != 0x9b0)) goto _L263;
    (**(code **)(_g_phyFuns + 0x60))(0x6a,1,0,7,4,rx_dreg_1p1 + -2,*(code **)(_g_phyFuns + 0x60));
    (**(code **)(_g_phyFuns + 0x60))(0x61,0,5,6,6,1,*(code **)(_g_phyFuns + 0x60));
    (**(code **)(_g_phyFuns + 0x60))(0x61,0,6,7,0,rx_ulp_code + -0x14,*(code **)(_g_phyFuns + 0x60))
    ;
    if (param_2 != 0x9b0) goto _L263;
    pcVar4 = *(code **)(_g_phyFuns + 0x60);
    uVar3 = 0;
  }
  (*pcVar4)(0x61,0,7,5,5,uVar3,pcVar4);
_L263:
  if (DAT_0001200e == '\0') {
    return;
  }
  cVar1 = '\x14';
  do {
    ets_delay_us(0x28);
    iVar2 = rfpll_cap_correct_new(DAT_0001200d);
    if (iVar2 == 0) {
      return;
    }
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}

