/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
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
  short sVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int local_a8 [3];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [12];
  int local_84 [21];
  
  set_txclk_en(1);
  uVar1 = _DAT_600c702c;
  piVar4 = local_84;
  sVar3 = 1;
  piVar8 = piVar4;
  do {
    chip_v7_set_chan(sVar3,0);
    _DAT_600c702c = _DAT_600c702c | 0x800000;
    uVar10 = 0x48000000;
    piVar9 = piVar8;
    do {
      _DAT_600c702c = _DAT_600c702c & 0xffffff | uVar10;
      dc_iq_est(1,4000,local_a8);
      dc_iq_est(1,4000,auStack_9c);
      dc_iq_est(1,4000,auStack_90);
      piVar7 = local_a8;
      cVar2 = '\x7f';
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
          cVar2 = (char)*piVar7;
          cVar5 = (char)piVar7[1];
          iVar6 = (int)(char)piVar7[2];
        }
        piVar7 = piVar7 + 3;
      } while (piVar4 != piVar7);
      *(char *)piVar9 = cVar2;
      *(char *)((int)piVar9 + 1) = cVar5;
      *(char *)((int)piVar9 + 2) = (char)iVar6;
      uVar10 = uVar10 + 0xfa000000;
      piVar9 = (int *)((int)piVar9 + 3);
    } while (uVar10 != 0x30000000);
    sVar3 = sVar3 + 2;
    piVar8 = piVar8 + 3;
  } while (sVar3 != 0xf);
  _DAT_600c702c = _DAT_600c702c & 0xff7fffff;
  set_txclk_en(0);
  _DAT_600c702c = _DAT_600c702c & 0x7fffff | uVar1 & 0xff000000;
  if (param_1 != 0) {
    ets_printf("wifi_rxdc_remain:\n");
  }
  iVar6 = 1;
  do {
    if (param_1 != 0) {
      ets_printf("chan=%02d, ",iVar6);
    }
    cVar2 = '\x04';
    piVar8 = piVar4;
    do {
      if (param_1 != 0) {
        ets_printf("%d,%d,%d; ",(int)(char)*piVar8,(int)*(char *)((int)piVar8 + 1),
                   (int)*(char *)((int)piVar8 + 2));
      }
      cVar2 = cVar2 + -1;
      piVar8 = (int *)((int)piVar8 + 3);
    } while (cVar2 != '\0');
    if (param_1 != 0) {
      ets_printf(&_LC7);
    }
    iVar6 = iVar6 + 2;
    piVar4 = piVar4 + 3;
  } while (iVar6 != 0xf);
  return;
}

