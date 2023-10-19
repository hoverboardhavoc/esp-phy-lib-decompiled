/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> tx_chan_atten
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void tx_chan_atten(void)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined1 uStack_31;
  byte local_30 [28];
  
  uStack_31 = 0x38;
  txcal_debuge_mode();
  uVar3 = 1;
  iVar4 = 0x3c;
  pbVar2 = local_30;
  do {
    chip_v7_set_chan(uVar3 & 0xffff,0);
    rfcal_pwrctrl(0xe0,&uStack_31,1,0x28,pbVar2,0x90,iVar4,0);
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

