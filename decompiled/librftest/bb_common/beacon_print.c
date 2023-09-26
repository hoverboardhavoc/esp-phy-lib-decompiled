/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> beacon_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void beacon_print(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  set_mac_filter(0x66666666,0x4666,0x6666);
  iVar2 = _DAT_600ad000;
  uVar1 = _DAT_600a7018;
  _DAT_600a4800 = 0;
  _DAT_600ad004 = 0;
  uVar5 = 0;
  _DAT_600a4c4c = _DAT_600a4c4c | 0xc;
  iVar3 = get_rxctrl_addr();
  iVar6 = 0;
  do {
    if ((_DAT_600a4c48 & 4) == 0) {
      if ((_DAT_600a4c48 & 8) != 0) {
        uVar5 = _DAT_600a706c & 0xff;
        _DAT_600a4c4c = _DAT_600a4c4c | 8;
      }
    }
    else {
      if ((_DAT_600a40a8 & 0xff) == 0) {
        if (((((_DAT_600a40ac >> 0x16 & 3) == 0 && (_DAT_600a40ac >> 0x10 & 0x1f) == 0) &&
             (*(int *)(iVar3 + 0x5c) == 0x80)) && (*(int *)(iVar3 + 0x60) == -1)) &&
           ((*(uint *)(iVar3 + 100) & 0xffff) == 0xffff)) {
          uVar4 = _DAT_600a40ac >> 0x18;
          if ((int)_DAT_600a40ac < 0) {
            uVar4 = uVar4 - 0x100;
          }
          phy_printf("i= %d, time=%d, mac=0x%x-%x, rssi=%d, gain=%d, rate=%d\n",iVar6,_DAT_600ad000,
                     *(uint *)(iVar3 + 100) >> 0x10,*(undefined4 *)(iVar3 + 0x68),
                     uVar4 + (int)((uVar1 >> 5 | 0xfffffc00) * 10) / 0x28,uVar5,0);
          iVar6 = iVar6 + 1;
        }
      }
      _DAT_600a4c4c = _DAT_600a4c4c | 0xc;
    }
  } while ((uint)(_DAT_600ad000 - iVar2) <= param_1);
  _DAT_600a4c4c = _DAT_600a4c4c | 0xc;
  return;
}

