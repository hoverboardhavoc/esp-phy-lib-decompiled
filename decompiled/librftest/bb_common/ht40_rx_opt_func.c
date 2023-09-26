/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> ht40_rx_opt_func
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ht40_rx_opt_func(undefined4 param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_2c [8];
  int iStack_24;
  
  if (((ht20_rx_opt != '\0') && (param_2 == 0)) && (param_3 < 0x20)) {
    sVar3 = chan_to_freq();
    chip_v7_set_chan(sVar3 + 10,2);
    force_rx_gain(1,0x46,0);
    cVar1 = '\n';
    iVar2 = 0;
    do {
      dc_iq_est(1,0x1000,auStack_2c);
      if (iVar2 < iStack_24) {
        iVar2 = iStack_24;
      }
      cVar1 = cVar1 + -1;
    } while (cVar1 != '\0');
    sVar4 = chan_to_freq(param_1);
    chip_v7_set_chan(sVar4 + -10,3);
    force_rx_gain(1,0x46,0);
    cVar1 = '\n';
    iVar6 = 0;
    do {
      dc_iq_est(1,0x1000,auStack_2c);
      if (iVar6 < iStack_24) {
        iVar6 = iStack_24;
      }
      cVar1 = cVar1 + -1;
    } while (cVar1 != '\0');
    uVar5 = 3;
    sVar4 = sVar4 + -10;
    if (iVar6 <= iVar2 + 3) {
      uVar5 = 2;
      sVar4 = sVar3 + 10;
    }
    force_rx_gain(0,0x46,0);
    chip_v7_set_chan(sVar4,uVar5);
    return;
  }
  return;
}

