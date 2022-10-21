/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_rx_cal.o -> set_rx_gain_cal_dc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_rx_gain_cal_dc(int param_1,uint param_2,uint param_3,int param_4,int param_5,uint *param_6,
                       int param_7,uint param_8)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  byte in_stack_00000000;
  undefined4 uStack_98;
  undefined4 uStack_64;
  undefined2 uStack_60;
  ushort uStack_5e;
  undefined2 uStack_5c;
  ushort uStack_5a;
  ushort auStack_58 [6];
  undefined1 auStack_4c [24];
  
  uStack_64 = 0x1000100;
  auStack_58[0] = 0;
  auStack_58[1] = 1;
  auStack_58[2] = 5;
  auStack_58[3] = 0xd;
  auStack_58[4] = 0x1d;
  uStack_98 = 0;
  (**(code **)(_g_phyFuns + 0x54))(1,*(code **)(_g_phyFuns + 0x54));
  (**(code **)(_g_phyFuns + 0x50))(1,*(code **)(_g_phyFuns + 0x50));
  chip_v7_set_chan_ana(0xe);
  uVar6 = 9;
  if (param_1 != 0) {
    uStack_98 = (**(code **)(_g_phyFuns + 0x1b8))(0x67,1,3,2,2,*(code **)(_g_phyFuns + 0x1b8));
    (**(code **)(_g_phyFuns + 0x1bc))(0x67,1,3,2,2,0,*(code **)(_g_phyFuns + 0x1bc));
    uVar6 = 0;
  }
  do {
    if (param_3 <= param_2) {
      if (param_1 != 0) {
        (**(code **)(_g_phyFuns + 0x1bc))(0x67,1,3,2,2,uStack_98,*(code **)(_g_phyFuns + 0x1bc));
      }
      (**(code **)(_g_phyFuns + 0x54))(0,*(code **)(_g_phyFuns + 0x54));
      (**(code **)(_g_phyFuns + 0x50))(0,*(code **)(_g_phyFuns + 0x50));
      return;
    }
    uVar12 = (uint)in_stack_00000000;
    if ((param_2 == 0) || (uVar12 = param_8, param_2 == 1)) {
_L223:
      pcVar7 = *(code **)(_g_phyFuns + 0x1cc);
      if (param_2 == 0) {
        (*pcVar7)(2,1,0x100);
        uVar5 = 0x100;
        uVar4 = 1;
        pcVar7 = *(code **)(_g_phyFuns + 0x1cc);
      }
      else {
        cVar13 = '\x01';
        if (param_2 != 1) goto _L200;
        if (param_1 == 0) {
          (*pcVar7)(2,2,*(undefined2 *)((int)param_6 + 2));
          uVar5 = *param_6 & 0x1ff;
          pcVar7 = *(code **)(_g_phyFuns + 0x1cc);
        }
        else {
          (*pcVar7)(2,2,0x100);
          uVar5 = 0x100;
          pcVar7 = *(code **)(_g_phyFuns + 0x1cc);
        }
        uVar4 = 2;
      }
      (*pcVar7)(3,uVar4,uVar5,pcVar7);
      cVar13 = '\x01';
      uStack_64 = 0x1000100;
    }
    else {
      if (param_2 != 2) {
        uVar12 = 1;
        goto _L223;
      }
      cVar13 = '\x0e';
      uVar12 = 1;
_L200:
      (**(code **)(_g_phyFuns + 0x1cc))
                (2,2,*(undefined2 *)((int)param_6 + 2),*(code **)(_g_phyFuns + 0x1cc));
      (**(code **)(_g_phyFuns + 0x1cc))(3,2,*param_6 & 0x1ff,*(code **)(_g_phyFuns + 0x1cc));
    }
    uVar10 = 0;
    uVar9 = 0;
    cVar8 = '\0';
    uVar5 = uVar6;
    do {
      cVar8 = cVar8 + '\x01';
      if ((param_2 == 2) && (chip_v7_set_chan_ana((int)cVar8), param_1 != 0)) {
        (**(code **)(_g_phyFuns + 0x1bc))(0x67,1,3,2,2,0,*(code **)(_g_phyFuns + 0x1bc));
      }
      for (uVar11 = 0; (uVar11 & 0xff) < uVar12; uVar11 = uVar11 + 1) {
        if (param_2 == 0) {
          uVar2 = (int)(uVar11 << 1) % 6 + (uint)auStack_58[(uVar11 & 0xff) / 3] * 8 & 0xffff;
        }
        else {
          if (param_2 == 2) {
            bVar1 = *(byte *)(param_8 + param_4 + -1);
          }
          else {
            bVar1 = *(byte *)(param_4 + uVar11);
          }
          uVar2 = (uint)bVar1 << 8;
        }
        (**(code **)(_g_phyFuns + 0x1dc))(uVar2,*(code **)(_g_phyFuns + 0x1dc));
        pcVar7 = *(code **)(_g_phyFuns + 0x1cc);
        if (param_2 == 0) {
          uVar2 = 0;
          uVar4 = 1;
          uVar3 = 0;
        }
        else {
          if (param_1 == 0) {
            (*pcVar7)(2,2,*(undefined2 *)((int)param_6 + 2));
            uVar2 = *param_6 & 0x1ff;
            pcVar7 = *(code **)(_g_phyFuns + 0x1cc);
          }
          else {
            (*pcVar7)(2,2,0x100);
            uVar2 = 0x100;
            pcVar7 = *(code **)(_g_phyFuns + 0x1cc);
          }
          uVar4 = 2;
          uVar3 = 3;
        }
        (*pcVar7)(uVar3,uVar4,uVar2,pcVar7);
        uStack_5e = (ushort)*param_6 & 0x1ff;
        uStack_60 = (undefined2)(*param_6 >> 0x10);
        uStack_5a = (ushort)param_6[3] & 0x1ff;
        uStack_5c = (undefined2)(param_6[3] >> 0x10);
        pbus_rx_dco_cal_1step(param_1,param_2,0x800,&uStack_64,auStack_4c,&uStack_60);
        if (param_2 == 0) {
          param_6[uVar9] = (int)(short)uStack_64 << 0x10 | (int)uStack_64._2_2_;
          uVar9 = uVar9 + 1 & 0xff;
        }
        else {
          uVar2 = (int)(short)uStack_64 << 0x10 | (int)uStack_64._2_2_;
          if (param_2 == 1) {
            *(uint *)(uVar5 * 4 + param_5) = uVar2;
            uVar5 = uVar5 + 1 & 0xff;
          }
          else {
            *(uint *)(uVar10 * 4 + param_7) = uVar2;
            uVar10 = uVar10 + 1 & 0xff;
          }
        }
      }
    } while (cVar13 != cVar8);
    param_2 = param_2 + 1 & 0xff;
  } while( true );
}

