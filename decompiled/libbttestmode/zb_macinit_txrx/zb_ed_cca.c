/*
 * Last changed at upstream commit c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * https://github.com/espressif/esp-phy-lib/commit/c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * Upstream date: 2024-04-03 16:53:14 +0800
 * Upstream subject: fix coex test wifi affect ble s8 tx problm, and c3 s3 light sleep current opt, and c3 s3 ble rx problem
 * Source: libbttestmode -> zb_macinit_txrx.o -> zb_ed_cca
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_ed_cca(uint param_1,int param_2,uint param_3)

{
  if (param_1 < 0x1b) {
    _DAT_600a3048 = param_1 * 5 + -0x34;
  }
  else {
    _DAT_600a3048 = param_1 - 0x962;
  }
  if (param_2 == 0) {
    _DAT_600a3054 = _DAT_600a3054 & 0xffff3f00 | 0xab;
  }
  else {
    _DAT_600a3054 = _DAT_600a3054 & 0xffff3f00 | 0x4000 | param_3 & 0xff;
  }
  _DAT_600a3050 = _DAT_600a3050 & 0xff000000 | 8;
  _DAT_600a3000 = 0x44;
  do {
    if ((_DAT_600a3064 & 0x40) != 0) {
      phy_printf("%d %d\n",(int)(char)(_DAT_600a3054 >> 0x10),_DAT_600a3054 >> 0x18 & 1);
      _DAT_600a3064 = _DAT_600a3064 | 0x40;
      return;
    }
  } while ((_DAT_600a3064 & 0x10) == 0);
  phy_printf("E %x\n",_DAT_600a3080);
  _DAT_600a3064 = _DAT_600a3064 | 0x10;
  return;
}

