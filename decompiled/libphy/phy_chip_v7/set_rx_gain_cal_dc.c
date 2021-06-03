/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> set_rx_gain_cal_dc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_rx_gain_cal_dc(int param_1,uint param_2,uint param_3,int param_4,int param_5,uint *param_6,
                       int param_7,uint param_8)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  byte in_stack_00000000;
  undefined4 uStack_5c;
  ushort auStack_58 [6];
  undefined1 auStack_4c [24];
  
  uStack_5c = 0x1000100;
  auStack_58[0] = 0;
  auStack_58[1] = 1;
  auStack_58[2] = 5;
  auStack_58[3] = 0xd;
  auStack_58[4] = 0x1d;
  (**(code **)(g_phyFuns + 0x54))(1,*(code **)(g_phyFuns + 0x54));
  (**(code **)(g_phyFuns + 0x50))(1,*(code **)(g_phyFuns + 0x50));
  chip_v7_set_chan_ana(0xe);
  uVar5 = 0;
  if (param_1 == 0) {
    uVar5 = 9;
  }
  do {
    if (param_3 <= param_2) {
      (**(code **)(g_phyFuns + 0x54))(0,*(code **)(g_phyFuns + 0x54));
      (**(code **)(g_phyFuns + 0x50))(0,*(code **)(g_phyFuns + 0x50));
      return;
    }
    uVar11 = (uint)in_stack_00000000;
    if ((param_2 == 0) || (uVar11 = param_8, param_2 == 1)) {
_L53:
      pcVar6 = *(code **)(g_phyFuns + 0x1cc);
      if (param_2 == 0) {
        (*pcVar6)(2,1,0x100);
        uVar4 = 0x100;
        uVar3 = 1;
        pcVar6 = *(code **)(g_phyFuns + 0x1cc);
      }
      else {
        cVar13 = '\x01';
        if (param_2 != 1) goto _L33;
        if (param_1 == 0) {
          (*pcVar6)(2,2,*(undefined2 *)((int)param_6 + 2));
          uVar4 = *param_6 & 0x1ff;
          pcVar6 = *(code **)(g_phyFuns + 0x1cc);
        }
        else {
          (*pcVar6)(2,2,0x100);
          uVar4 = 0x100;
          pcVar6 = *(code **)(g_phyFuns + 0x1cc);
        }
        uVar3 = 2;
      }
      (*pcVar6)(3,uVar3,uVar4,pcVar6);
      cVar13 = '\x01';
      uStack_5c = 0x1000100;
    }
    else {
      if (param_2 != 2) {
        uVar11 = 1;
        goto _L53;
      }
      cVar13 = '\x0e';
      uVar11 = 1;
_L33:
      (**(code **)(g_phyFuns + 0x1cc))
                (2,2,*(undefined2 *)((int)param_6 + 2),*(code **)(g_phyFuns + 0x1cc));
      (**(code **)(g_phyFuns + 0x1cc))(3,2,*param_6 & 0x1ff,*(code **)(g_phyFuns + 0x1cc));
    }
    uVar10 = 0;
    uVar9 = 0;
    cVar8 = '\0';
    uVar4 = uVar5;
    do {
      cVar8 = cVar8 + '\x01';
      if (param_2 == 2) {
        chip_v7_set_chan_ana((int)cVar8);
      }
      for (uVar12 = 0; uVar7 = uVar12 & 0xff, uVar7 < uVar11; uVar12 = uVar12 + 1) {
        if (param_2 == 0) {
          uVar7 = (uint)auStack_58[uVar7 / 6] * 8 + uVar7 % 6 & 0xffff;
        }
        else {
          if (param_2 == 2) {
            bVar1 = *(byte *)(param_8 + param_4 + -1);
          }
          else {
            bVar1 = *(byte *)(param_4 + uVar12);
          }
          uVar7 = (uint)bVar1 << 8;
        }
        (**(code **)(g_phyFuns + 0x1dc))(uVar7,*(code **)(g_phyFuns + 0x1dc));
        pcVar6 = *(code **)(g_phyFuns + 0x1cc);
        if (param_2 == 0) {
          uVar7 = 0;
          uVar3 = 1;
          uVar2 = 0;
        }
        else {
          if (param_1 == 0) {
            (*pcVar6)(2,2,*(undefined2 *)((int)param_6 + 2));
            uVar7 = *param_6 & 0x1ff;
            pcVar6 = *(code **)(g_phyFuns + 0x1cc);
          }
          else {
            (*pcVar6)(2,2,0x100);
            uVar7 = 0x100;
            pcVar6 = *(code **)(g_phyFuns + 0x1cc);
          }
          uVar3 = 2;
          uVar2 = 3;
        }
        (*pcVar6)(uVar2,uVar3,uVar7,pcVar6);
        pbus_rx_dco_cal_1step(param_1,param_2,4000,&uStack_5c,auStack_4c);
        if (param_2 == 0) {
          param_6[uVar9] = (int)(short)uStack_5c << 0x10 | (int)uStack_5c._2_2_;
          uVar9 = uVar9 + 1 & 0xff;
        }
        else {
          uVar7 = (int)(short)uStack_5c << 0x10 | (int)uStack_5c._2_2_;
          if (param_2 == 1) {
            *(uint *)(uVar4 * 4 + param_5) = uVar7;
            uVar4 = uVar4 + 1 & 0xff;
          }
          else {
            *(uint *)(uVar10 * 4 + param_7) = uVar7;
            uVar10 = uVar10 + 1 & 0xff;
          }
        }
      }
    } while (cVar8 != cVar13);
    param_2 = param_2 + 1 & 0xff;
  } while( true );
}

