/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
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
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  char local_94 [96];
  
  phy_set_txclk_en(1);
  uVar1 = _DAT_2010702c;
  uVar3 = _DAT_20100434 >> 0x16;
  pcVar8 = local_94;
  sVar6 = 1;
  pcVar9 = pcVar8;
  _DAT_20100434 = _DAT_20100434 & 0xff3fffff;
  do {
    phy_chip_set_chan(sVar6,0);
    uVar5 = 0x40000000;
    _DAT_2010702c = _DAT_2010702c & 0xff7fffff | 0x800000;
    pcVar4 = pcVar9;
    do {
      _DAT_2010702c = _DAT_2010702c & 0xffffff | uVar5;
      phy_rxdc_est_min(4000,0,&uStack_b8,0);
      uStack_b8 = phy_get_data_sat(uStack_b8,0x7f,0xffffff81);
      uStack_b4 = phy_get_data_sat(uStack_b4,0x7f,0xffffff81);
      uStack_b0 = phy_get_data_sat(uStack_b0,0x7f,0xffffff81);
      pcVar4[2] = (char)uStack_b0;
      *pcVar4 = (char)uStack_b8;
      pcVar4[1] = (char)uStack_b4;
      uVar5 = uVar5 + 0xfa000000;
      pcVar4 = pcVar4 + 3;
    } while (uVar5 != 0x28000000);
    sVar6 = sVar6 + 2;
    pcVar9 = pcVar9 + 0xc;
  } while (sVar6 != 0xf);
  uVar3 = (uVar3 & 3) << 0x16;
  _DAT_20100434 = _DAT_20100434 & 0xff3fffff | uVar3;
  phy_set_txclk_en(0);
  _DAT_20100434 = _DAT_20100434 & 0xff3fffff | uVar3;
  _DAT_2010702c = _DAT_2010702c & 0x7fffff | uVar1 & 0xff000000;
  if (param_1 != 0) {
    phy_printf("wifi_rxdc_remain:\n");
  }
  iVar7 = 1;
  do {
    if (param_1 != 0) {
      phy_printf("chan=%02d, ",iVar7);
    }
    cVar2 = '\x04';
    pcVar9 = pcVar8;
    do {
      if (param_1 != 0) {
        phy_printf("%d,%d,%d; ",(int)*pcVar9,(int)pcVar9[1],(int)pcVar9[2]);
      }
      cVar2 = cVar2 + -1;
      pcVar9 = pcVar9 + 3;
    } while (cVar2 != '\0');
    if (param_1 != 0) {
      phy_printf(&_LC9);
    }
    iVar7 = iVar7 + 2;
    pcVar8 = pcVar8 + 0xc;
  } while (iVar7 != 0xf);
  return;
}

