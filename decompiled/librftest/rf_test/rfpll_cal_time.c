/*
 * Last changed at upstream commit 9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * https://github.com/espressif/esp-phy-lib/commit/9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * Upstream date: 2023-03-31 17:07:27 +0800
 * Upstream subject: update_for_rftest_20230331
 * Source: librftest -> rf_test.o -> rfpll_cal_time
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rfpll_cal_time(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 local_a4 [112];
  
  if (param_2 == 0) {
    iVar5 = (**(code **)(_g_phyFuns + 0x1b8))(0x62,1,1,7,0,*(code **)(_g_phyFuns + 0x1b8));
    uVar3 = iVar5 - 5U & 0xff;
    do {
      (**(code **)(_g_phyFuns + 0x1bc))(0x62,1,1,7,0,uVar3,*(code **)(_g_phyFuns + 0x1bc));
      iVar2 = _DAT_60035000;
      iVar8 = 0;
      do {
        uVar4 = (**(code **)(_g_phyFuns + 0x1b8))(0x62,1,5,7,0,*(code **)(_g_phyFuns + 0x1b8));
        iVar1 = _DAT_60035000;
        local_a4[iVar8] = uVar4;
        iVar8 = iVar8 + 1;
      } while (iVar8 != 0x32);
      uVar6 = (**(code **)(_g_phyFuns + 0x1b8))(0x62,1,1,7,0,*(code **)(_g_phyFuns + 0x1b8));
      phy_printf("ir_cap_ext=%d: ",uVar6);
      iVar8 = 0;
      do {
        puVar7 = local_a4 + iVar8;
        iVar8 = iVar8 + 1;
        phy_printf(&_LC28,*puVar7);
      } while (iVar8 != 0x32);
      uVar3 = uVar3 + 1 & 0xff;
      phy_printf(&_LC29,iVar1 - iVar2);
    } while (uVar3 != (iVar5 + 5U & 0xff));
                    /* WARNING: Could not recover jumptable at 0x0001109a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_g_phyFuns + 0x1bc))(0x62,1,1,7,0,iVar5);
    return;
  }
  _DAT_6000e0c4 = (param_1 & 0x7f) << 1 | _DAT_6000e0c4 & 0xe7ffff00 | 0x10000100;
  ets_delay_us(2);
  iVar5 = _DAT_60035000;
  do {
    if ((int)_DAT_6000e0c4 < 0) break;
  } while ((_DAT_6000e0c4 & 0x100) != 0);
  iVar2 = 0;
  _DAT_6000e0c4 = _DAT_6000e0c4 & 0xfffffeff;
  do {
    uVar4 = (**(code **)(_g_phyFuns + 0x1b8))(0x62,1,5,7,0,*(code **)(_g_phyFuns + 0x1b8));
    iVar8 = _DAT_60035000;
    local_a4[iVar2] = uVar4;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x32);
  iVar2 = 0;
  phy_printf("chan_freq=%d: ",param_1);
  do {
    puVar7 = local_a4 + iVar2;
    iVar2 = iVar2 + 1;
    phy_printf(&_LC28,*puVar7);
  } while (iVar2 != 0x32);
  phy_printf(&_LC29,iVar8 - iVar5);
  return;
}

