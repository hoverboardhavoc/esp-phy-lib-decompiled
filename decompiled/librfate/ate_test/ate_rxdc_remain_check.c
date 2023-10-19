/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librfate -> ate_test.o -> ate_rxdc_remain_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ate_rxdc_remain_check(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  char local_a8 [4];
  char cStack_a4;
  char cStack_a0;
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [12];
  int local_84 [23];
  
  set_rxclk_en(1);
  piVar8 = local_84;
  set_txclk_en(1);
  sVar2 = 1;
  piVar3 = piVar8;
  do {
    chip_v7_set_chan(sVar2,0);
    cVar1 = '@';
    piVar9 = piVar3;
    do {
      force_rx_gain(1,cVar1,1);
      dc_iq_est(1,4000,local_a8);
      dc_iq_est(1,4000,auStack_9c);
      dc_iq_est(1,4000,auStack_90);
      iVar6 = (int)cStack_a0;
      piVar7 = (int *)local_a8;
      cVar4 = local_a8[0];
      cVar5 = cStack_a4;
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
      cVar1 = cVar1 + -6;
      *(char *)piVar9 = cVar4;
      *(char *)((int)piVar9 + 1) = cVar5;
      *(char *)((int)piVar9 + 2) = (char)iVar6;
      piVar9 = (int *)((int)piVar9 + 3);
    } while (cVar1 != '(');
    sVar2 = sVar2 + 2;
    piVar3 = piVar3 + 3;
  } while (sVar2 != 0xf);
  set_rxclk_en(0);
  set_txclk_en(0);
  force_rx_gain(0,0x2e,0);
  if (param_1 != 0) {
    phy_printf("rxdc_remain:\n");
  }
  iVar6 = 1;
  do {
    if (param_1 != 0) {
      phy_printf("chan=%02d, ",iVar6);
    }
    cVar1 = '\x04';
    piVar3 = piVar8;
    do {
      if (param_1 != 0) {
        phy_printf("%d,%d,%d; ",(int)(char)*piVar3,(int)*(char *)((int)piVar3 + 1),
                   (int)*(char *)((int)piVar3 + 2));
      }
      cVar1 = cVar1 + -1;
      piVar3 = (int *)((int)piVar3 + 3);
    } while (cVar1 != '\0');
    if (param_1 != 0) {
      phy_printf(&_LC11);
    }
    iVar6 = iVar6 + 2;
    piVar8 = piVar8 + 3;
  } while (iVar6 != 0xf);
  return;
}

