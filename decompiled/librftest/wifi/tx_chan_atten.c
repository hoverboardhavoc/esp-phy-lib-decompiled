/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> tx_chan_atten
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_chan_atten(void)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined1 uStack_31;
  byte local_30 [24];
  
  uStack_31 = 0x38;
  (**(code **)(_g_phyFuns + 0x94))(*(code **)(_g_phyFuns + 0x94));
  uVar3 = 1;
  iVar4 = 0x3c;
  pbVar2 = local_30;
  do {
    chip_v7_set_chan(uVar3 & 0xffff,0);
    rfcal_pwrctrl(0x80,&uStack_31,1,0x28,pbVar2,_DAT_00017022,iVar4,0);
    bVar1 = *pbVar2;
    uVar3 = uVar3 + 1;
    pbVar2 = pbVar2 + 1;
    iVar4 = (int)((bVar1 + 0x28) * 0x1000000) >> 0x18;
  } while (uVar3 != 0xf);
  txcal_work_mode();
  iVar4 = 0;
  do {
    pbVar2 = local_30 + iVar4;
    iVar4 = iVar4 + 1;
    phy_printf(&_LC28,(int)(char)*pbVar2);
  } while (iVar4 != 0xe);
  return;
}

