/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> rxdc_est_min
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rxdc_est_min(undefined4 param_1,int param_2,uint *param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  
  *param_3 = 1000;
  param_3[1] = 1000;
  iVar4 = 100;
  if (param_2 != 0) {
    iVar4 = 0x35;
  }
  bVar3 = 0;
  cVar1 = '\0';
  do {
    dc_iq_est(1,param_1,&uStack_2c);
    if (iStack_24 < iVar4) {
      uVar2 = (int)*param_3 >> 0x1f;
      if ((int)(((int)uStack_2c >> 0x1f ^ uStack_2c) - ((int)uStack_2c >> 0x1f)) <
          (int)((*param_3 ^ uVar2) - uVar2)) {
        *param_3 = uStack_2c;
      }
      uVar2 = (int)param_3[1] >> 0x1f;
      if ((int)(((int)uStack_28 >> 0x1f ^ uStack_28) - ((int)uStack_28 >> 0x1f)) <
          (int)((param_3[1] ^ uVar2) - uVar2)) {
        param_3[1] = uStack_28;
      }
      bVar3 = bVar3 + 1;
      if ((iStack_24 < 0x24) || (3 < bVar3)) break;
    }
    cVar1 = cVar1 + '\x01';
  } while (cVar1 != '\x03');
  *param_4 = cVar1;
  if (*param_3 == 1000) {
    *param_3 = uStack_2c;
  }
  if (param_3[1] == 1000) {
    param_3[1] = uStack_28;
  }
  return;
}

