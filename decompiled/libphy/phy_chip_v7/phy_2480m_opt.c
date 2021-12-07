/*
 * Last changed at upstream commit 2d89c532ccba0bb9988d1d1c6d719bbe1d8b65b8
 * https://github.com/espressif/esp-phy-lib/commit/2d89c532ccba0bb9988d1d1c6d719bbe1d8b65b8
 * Upstream date: 2021-12-07 14:34:50 +0800
 * Upstream subject: Update esp32c3 and esp32s3 phy lib and bb lib Fix the ble task watchdog timeout issue caused by phy enable when exit modem sleep.
 * Source: libphy -> phy_chip_v7.o -> phy_2480m_opt
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_2480m_opt(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_s4;
  uint uVar6;
  
  phy_set_freq(0x9b5,0);
  _DAT_6001c02c = _DAT_6001c02c & 0xffffff | 0x3c800000;
  uVar6 = 0;
  uVar5 = 0;
  (**(code **)(g_phyFuns + 0x50))(1,*(code **)(g_phyFuns + 0x50));
  (**(code **)(g_phyFuns + 0x54))(1,*(code **)(g_phyFuns + 0x54));
  uVar2 = (**(code **)(g_phyFuns + 0x1b8))(0x6d,0,6,4,0,*(code **)(g_phyFuns + 0x1b8));
  do {
    uVar4 = uVar5 & 0xff;
    uVar1 = uVar2 - 4 & 0xff;
    if (uVar4 != 2) {
      if (uVar4 < 3) {
        uVar3 = 1;
        uVar1 = uVar2 - 2;
      }
      else {
        uVar1 = uVar2 + 2 & 0xff;
        if (uVar4 == 3) goto _L663;
        uVar3 = 4;
        uVar1 = uVar2 + 4;
      }
      uVar1 = uVar1 & 0xff;
      if (uVar4 != uVar3) {
        uVar1 = uVar2;
      }
    }
_L663:
    (**(code **)(g_phyFuns + 0x1bc))(0x6d,0,6,4,0,uVar1,*(code **)(g_phyFuns + 0x1bc));
    ets_delay_us(0x14);
    uVar4 = phy_corr_pwr_sum(0x80);
    if ((uVar5 == 0) || (uVar4 < unaff_s4)) {
      unaff_s4 = uVar4;
      uVar6 = uVar1;
      if (param_1 != 0) goto _L671;
_L668:
      if (unaff_s4 < 2000) break;
    }
    else if (param_1 != 0) {
_L671:
      ets_printf("%d, dreg=%d, sig_pwr=%d, %d\n",uVar5,uVar1,uVar6);
      goto _L668;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != 5);
  (**(code **)(g_phyFuns + 0x1bc))(0x6d,0,6,4,0,uVar2,*(code **)(g_phyFuns + 0x1bc));
  _DAT_6001c02c = _DAT_6001c02c & 0x7fffff | 0x32000000;
  (**(code **)(g_phyFuns + 0x50))(0,*(code **)(g_phyFuns + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00014420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(g_phyFuns + 0x54))(0);
  return;
}

