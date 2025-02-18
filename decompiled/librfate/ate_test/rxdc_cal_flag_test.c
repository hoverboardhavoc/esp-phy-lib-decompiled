/*
 * Last changed at upstream commit e5944fc80c813150131566dd0761709ae9fdea89
 * https://github.com/espressif/esp-phy-lib/commit/e5944fc80c813150131566dd0761709ae9fdea89
 * Upstream date: 2025-02-18 15:55:42 +0800
 * Upstream subject: update libphy for RXDC cal opt, no antenna current opt, add cca api
 * Source: librfate -> ate_test.o -> rxdc_cal_flag_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rxdc_cal_flag_test(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  undefined1 uStack_59;
  ushort local_58 [4];
  undefined2 uStack_50;
  undefined2 uStack_4e;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  uStack_50 = 0x100;
  uStack_4e = 0x100;
  uStack_4c = 0x1000100;
  local_58[0] = 0x1d2;
  local_58[1] = 0x1f2;
  local_58[2] = 0x1fe;
  puVar4 = local_58;
  iVar3 = 0;
  do {
    iVar2 = 1;
    do {
      chip_v7_set_chan_ana((int)(char)iVar2);
      (**(code **)(_g_phyFuns + 0x1d4))(*(code **)(_g_phyFuns + 0x1d4));
      (**(code **)(_g_phyFuns + 0x1e0))(*(code **)(_g_phyFuns + 0x1e0));
      (**(code **)(_g_phyFuns + 0x1e4))(0,*(code **)(_g_phyFuns + 0x1e4));
      uStack_4e = (undefined2)_DAT_00012304;
      uStack_50 = (undefined2)((uint)_DAT_00012304 >> 0x10);
      (**(code **)(_g_phyFuns + 0x1cc))(2,1,*(code **)(_g_phyFuns + 0x1cc));
      (**(code **)(_g_phyFuns + 0x1cc))(3,1,uStack_4e,*(code **)(_g_phyFuns + 0x1cc));
      (**(code **)(_g_phyFuns + 0x1cc))(2,2,uStack_4c & 0xffff,*(code **)(_g_phyFuns + 0x1cc));
      (**(code **)(_g_phyFuns + 0x1cc))(3,2,uStack_4c >> 0x10,*(code **)(_g_phyFuns + 0x1cc));
      (**(code **)(_g_phyFuns + 0x1cc))(1,2,0,*(code **)(_g_phyFuns + 0x1cc));
      uVar1 = *puVar4;
      (**(code **)(_g_phyFuns + 0x1cc))(0,1,uVar1 | 1,*(code **)(_g_phyFuns + 0x1cc));
      pbus_rx_dco_cal_1step_new(0,2,0x800,&uStack_50,&uStack_48,&uStack_59);
      (**(code **)(_g_phyFuns + 0x1cc))(1,2,0xac,*(code **)(_g_phyFuns + 0x1cc));
      ets_delay_us(10);
      rxdc_est_min_new(0x800,1,&uStack_48);
      (**(code **)(_g_phyFuns + 0x1cc))(0,1,uVar1,*(code **)(_g_phyFuns + 0x1cc));
      ets_delay_us(10);
      rxdc_est_min_new(0x800,1,&uStack_3c);
      (**(code **)(_g_phyFuns + 0x1cc))(1,2,0,*(code **)(_g_phyFuns + 0x1cc));
      pbus_rx_dco_cal_1step_new(0,2,0x800,&uStack_50,&uStack_48,&uStack_59);
      phy_printf("%d,%d, %d,%d,%d, %d,%d,%d, %d,%d, %d,%d\n",iVar2,iVar3,uStack_48,uStack_44,
                 uStack_40,uStack_3c,uStack_38);
      iVar2 = iVar2 + 1;
      (**(code **)(_g_phyFuns + 0x1e4))(0,*(code **)(_g_phyFuns + 0x1e4));
      (**(code **)(_g_phyFuns + 0x1d8))(*(code **)(_g_phyFuns + 0x1d8));
    } while (iVar2 != 0xf);
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar3 != 3);
  return;
}

