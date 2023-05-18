/*
 * Last changed at upstream commit d39766d34edf7bf22dddc91d5f45f2b91576a407
 * https://github.com/espressif/esp-phy-lib/commit/d39766d34edf7bf22dddc91d5f45f2b91576a407
 * Upstream date: 2023-05-18 20:57:26 +0800
 * Upstream subject: esp32c6: enable wifi_apb_clk before phy_init and restore after phy_init, C6_libphy_20230517_b4b3263
 * Source: libphy -> phy_tx_cal.o -> txdc_cal_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txdc_cal_new(undefined2 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  
  (**(code **)(_g_phyFuns + 0x74))(2,2,0x100,*(code **)(_g_phyFuns + 0x74));
  iVar1 = 0;
  (**(code **)(_g_phyFuns + 0x74))(3,2,0x100,*(code **)(_g_phyFuns + 0x74));
  param_1[2] = 0x100;
  param_1[3] = 0x100;
  set_txclk_en(1);
  (**(code **)(_g_phyFuns + 0x98))(1,600,0x78,0,0,0,*(code **)(_g_phyFuns + 0x98));
  iVar6 = 0;
  iVar7 = 0x7c;
  bVar8 = 0;
  uVar3 = 0x100;
  uVar2 = 0x100;
  do {
    uVar3 = uVar3 & 0xffff;
    (**(code **)(_g_phyFuns + 0x74))(3,1,uVar3,*(code **)(_g_phyFuns + 0x74));
    uVar2 = uVar2 & 0xffff;
    (**(code **)(_g_phyFuns + 0x74))(2,1,uVar2,*(code **)(_g_phyFuns + 0x74));
    ets_delay_us(2);
    uVar5 = _DAT_600a0418 & 0xfffffffe | 3;
    do {
    } while (-1 < (int)(uVar5 << 9));
    if ((int)(uVar5 << 2) < 0) {
      sVar4 = (short)(uVar2 - iVar7);
      if ((int)((uVar2 - iVar7) * 0x10000) < 0) {
        sVar4 = 0;
      }
    }
    else {
      sVar4 = (short)(uVar2 + iVar7);
      if (0x1ff < (int)((uVar2 + iVar7) * 0x10000) >> 0x10) {
        sVar4 = 0x1ff;
      }
    }
    uVar2 = (uint)sVar4;
    if ((_DAT_600a0418 & 0x10000000) == 0) {
      sVar4 = (short)(uVar3 + iVar7);
      if (0x1ff < (int)((uVar3 + iVar7) * 0x10000) >> 0x10) {
        sVar4 = 0x1ff;
      }
    }
    else {
      sVar4 = (short)(uVar3 - iVar7);
      if ((int)((uVar3 - iVar7) * 0x10000) < 0) {
        sVar4 = 0;
      }
    }
    uVar3 = (uint)sVar4;
    if (iVar7 == 2) {
      iVar7 = 1;
    }
    else {
      iVar7 = (iVar7 >> 1) + 1;
    }
    if (7 < bVar8) {
      iVar6 = (int)((iVar6 + uVar2) * 0x10000) >> 0x10;
      iVar1 = (int)((iVar1 + uVar3) * 0x10000) >> 0x10;
    }
    bVar8 = bVar8 + 1;
    _DAT_600a0418 = uVar5;
  } while (bVar8 != 0xc);
  uVar2 = iVar1 + 2 >> 2;
  (**(code **)(_g_phyFuns + 0x74))(3,1,uVar2 & 0xffff,*(code **)(_g_phyFuns + 0x74));
  uVar3 = iVar6 + 2 >> 2;
  (**(code **)(_g_phyFuns + 0x74))(2,1,uVar3 & 0xffff,*(code **)(_g_phyFuns + 0x74));
  *param_1 = (short)uVar3;
  param_1[1] = (short)uVar2;
  _DAT_600a0418 = _DAT_600a0418 & 0xfffffffc;
                    /* WARNING: Could not recover jumptable at 0x0001074a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x98))(0,600,0x78,0,0,0);
  return;
}

