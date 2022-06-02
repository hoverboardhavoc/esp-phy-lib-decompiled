/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
 * Source: libphy -> phy_chip_v7.o -> set_rx_gain_cal_iq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_rx_gain_cal_iq(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  short sVar2;
  code *pcVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iStack_70;
  undefined4 local_58;
  undefined1 uStack_54;
  byte local_50 [8];
  undefined4 auStack_48 [5];
  
  local_58 = 0x40c0d;
  local_50[0] = 0;
  local_50[1] = 0x20;
  local_50[2] = 0x28;
  local_50[3] = 0x2c;
  uStack_54 = 0;
  local_50[4] = 0x2e;
  uVar13 = 0;
  if (param_1 != 0) {
    uVar13 = (**(code **)(g_phyFuns + 0x1b8))(0x67,1,3,2,2,*(code **)(g_phyFuns + 0x1b8));
    (**(code **)(g_phyFuns + 0x1bc))(0x67,1,3,2,2,0,*(code **)(g_phyFuns + 0x1bc));
  }
  (**(code **)(g_phyFuns + 0x24))(1,*(code **)(g_phyFuns + 0x24));
  (**(code **)(g_phyFuns + 0x54))(1,*(code **)(g_phyFuns + 0x54));
  (**(code **)(g_phyFuns + 0x50))(1,*(code **)(g_phyFuns + 0x50));
  _DAT_6000607c = _DAT_6000607c & 0xefffefff | 0x8000000;
  uVar9 = (uint)(char)(_phy_param >> 6);
  uVar6 = uVar9 & 0x1f;
  if ((uVar9 & 0x10) != 0) {
    uVar6 = uVar6 - 0x20;
  }
  uVar9 = (int)(char)_phy_param & 0x3f;
  if (((int)(char)_phy_param & 0x20U) != 0) {
    uVar9 = uVar9 - 0x40;
  }
  txiq_set_reg(uVar6,1);
  txiq_set_reg(uVar9,0);
  auStack_48[0] = 0x1000100;
  iVar10 = 0;
_L208:
  uVar1 = *(undefined1 *)((int)&local_58 + iVar10);
  iVar11 = local_50[iVar10] + 0x80;
  (**(code **)(g_phyFuns + 0x1c))(uVar1,0x104,iVar11,*(code **)(g_phyFuns + 0x1c));
  if (param_1 != 0) {
    pcVar3 = *(code **)(g_phyFuns + 0x1cc);
    uVar4 = (**(code **)(g_phyFuns + 0x1d0))(1,1,*(code **)(g_phyFuns + 0x1d0));
    (*pcVar3)(1,1,uVar4 | 2);
  }
  pbus_rx_dco_cal(4000,auStack_48,10,0,0);
  iStack_70 = 2;
  uVar6 = 0x20;
  do {
    (**(code **)(g_phyFuns + 0x1cc))(1,1,0x1f1,*(code **)(g_phyFuns + 0x1cc));
    (**(code **)(g_phyFuns + 0x1cc))(1,1,0x1f9,*(code **)(g_phyFuns + 0x1cc));
    start_tx_tone_step(1,param_2,uVar6 & 0xff,0,0,0);
    (**(code **)(g_phyFuns + 0x104))(1,0x3ff,*(code **)(g_phyFuns + 0x104));
    iVar12 = _DAT_60006164 >> 7;
    if (param_4 != 0) {
      uVar7 = (**(code **)(g_phyFuns + 0x1d0))(5,1,*(code **)(g_phyFuns + 0x1d0));
      uVar8 = (**(code **)(g_phyFuns + 0x1d0))(1,2,*(code **)(g_phyFuns + 0x1d0));
      phy_printf("total_pwr=%ld, min=%ld, max=%ld, rftx=0x%x, bb=0x%x, att=%d, dc_i=%d, dc_q=%d\n",
                 iVar12,0x1000,0x20000,uVar7,uVar8,uVar6,_DAT_6000615c >> 0x10);
    }
    (**(code **)(g_phyFuns + 0x108))(*(code **)(g_phyFuns + 0x108));
    stop_tx_tone(1);
    if (iVar12 < 0x20001) {
      if (0xfff < iVar12) break;
      sVar2 = (short)uVar6 + -0x14;
    }
    else {
      sVar2 = (short)uVar6 + 0x14;
    }
    (**(code **)(g_phyFuns + 0x1c))(uVar1,0x104,iVar11,*(code **)(g_phyFuns + 0x1c));
    iVar12 = (int)sVar2;
    if (0x78 < iVar12) {
      iVar12 = 0x78;
    }
    sVar2 = (short)iVar12;
    if (iVar12 << 0x10 < 0) {
      sVar2 = 0;
    }
    uVar6 = (uint)sVar2;
    if (iStack_70 == 1) break;
    iStack_70 = 1;
  } while( true );
  if (param_4 != 0) {
    phy_printf("rxiq: rftx=0x%x, rfrx=x%x, att=%d, bb=0x%x, %d, %d\n",uVar1,0x104,uVar6,iVar11,
               iVar10,2);
  }
  uVar5 = get_rfcal_rxiq_data(param_2,uVar6 & 0xff,param_4);
  *(undefined2 *)(iVar10 * 2 + param_3) = uVar5;
  if (iVar10 != 0) {
    if (param_1 != 0) {
      (**(code **)(g_phyFuns + 0x1bc))(0x67,1,3,2,2,uVar13,*(code **)(g_phyFuns + 0x1bc));
    }
    (**(code **)(g_phyFuns + 0x24))(0,*(code **)(g_phyFuns + 0x24));
    _DAT_6000607c = _DAT_6000607c | 0x10001000;
    return;
  }
  iVar10 = 1;
  goto _L208;
}

