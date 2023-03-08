/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librfate -> ate_test.o -> ate_rxdc_remain_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ate_rxdc_remain_check(int param_1)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int local_b8 [3];
  undefined1 auStack_ac [12];
  undefined1 auStack_a0 [12];
  int local_94 [24];
  
  (**(code **)(_g_phyFuns + 0x50))(1,*(code **)(_g_phyFuns + 0x50));
  uVar1 = _DAT_6001c02c;
  piVar8 = local_94;
  cVar2 = '\x01';
  piVar3 = piVar8;
  do {
    chip_v7_set_chan((int)cVar2,0);
    _DAT_6001c02c = _DAT_6001c02c | 0x800000;
    uVar10 = 0x42000000;
    piVar9 = piVar3;
    do {
      _DAT_6001c02c = _DAT_6001c02c & 0xffffff | uVar10;
      (**(code **)(_g_phyFuns + 0x10c))(1,4000,local_b8,*(code **)(_g_phyFuns + 0x10c));
      (**(code **)(_g_phyFuns + 0x10c))(1,4000,auStack_ac,*(code **)(_g_phyFuns + 0x10c));
      (**(code **)(_g_phyFuns + 0x10c))(1,4000,auStack_a0,*(code **)(_g_phyFuns + 0x10c));
      piVar7 = local_b8;
      cVar4 = '\x7f';
      iVar6 = 100;
      cVar5 = '\x7f';
      do {
        if (*piVar7 < 0x80) {
          if (*piVar7 < -0x7f) {
            *piVar7 = -0x7f;
          }
        }
        else {
          *piVar7 = 0x7f;
        }
        if (piVar7[1] < 0x80) {
          if (piVar7[1] < -0x7f) {
            piVar7[1] = -0x7f;
          }
        }
        else {
          piVar7[1] = 0x7f;
        }
        if (piVar7[2] < iVar6) {
          cVar4 = (char)*piVar7;
          cVar5 = (char)piVar7[1];
          iVar6 = (int)(char)piVar7[2];
        }
        piVar7 = piVar7 + 3;
      } while (piVar8 != piVar7);
      *(char *)piVar9 = cVar4;
      *(char *)((int)piVar9 + 1) = cVar5;
      *(char *)((int)piVar9 + 2) = (char)iVar6;
      uVar10 = uVar10 + 0xfa000000;
      piVar9 = (int *)((int)piVar9 + 3);
    } while (uVar10 != 0x2a000000);
    cVar2 = cVar2 + '\x02';
    piVar3 = piVar3 + 3;
  } while (cVar2 != '\x0f');
  _DAT_6001c02c = _DAT_6001c02c & 0xff7fffff;
  (**(code **)(_g_phyFuns + 0x50))(0,*(code **)(_g_phyFuns + 0x50));
  _DAT_6001c02c = _DAT_6001c02c & 0x7fffff | uVar1 & 0xff000000;
  if (param_1 != 0) {
    phy_printf("wifi_rxdc_remain:\n");
  }
  iVar6 = 1;
  do {
    if (param_1 != 0) {
      phy_printf("chan=%02d, ",iVar6);
    }
    cVar2 = '\x04';
    piVar3 = piVar8;
    do {
      if (param_1 != 0) {
        phy_printf("%d,%d,%d; ",(int)(char)*piVar3,(int)*(char *)((int)piVar3 + 1),
                   (int)*(char *)((int)piVar3 + 2));
      }
      cVar2 = cVar2 + -1;
      piVar3 = (int *)((int)piVar3 + 3);
    } while (cVar2 != '\0');
    if (param_1 != 0) {
      phy_printf(&_LC9);
    }
    iVar6 = iVar6 + 2;
    piVar8 = piVar8 + 3;
  } while (iVar6 != 0xf);
  return;
}

