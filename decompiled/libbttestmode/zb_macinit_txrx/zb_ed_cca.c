/*
 * Last changed at upstream commit 3dad662616b80b89abed23f218fb8ef2222ceb63
 * https://github.com/espressif/esp-phy-lib/commit/3dad662616b80b89abed23f218fb8ef2222ceb63
 * Upstream date: 2026-03-30 10:56:56 +0800
 * Upstream subject: support h4eco1 libphy
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
    _DAT_600c3048 = param_1 * 5 + -0x34;
  }
  else {
    _DAT_600c3048 = param_1 - 0x962;
  }
  if (param_2 == 0) {
    _DAT_600c3054 = _DAT_600c3054 & 0xffff3f00 | 0xab;
  }
  else {
    _DAT_600c3054 = _DAT_600c3054 & 0xffff3f00 | 0x4000 | param_3 & 0xff;
  }
  _DAT_600c3050 = _DAT_600c3050 & 0xff000000 | 8;
  _DAT_600c3000 = 0x44;
  do {
    if ((_DAT_600c3064 & 0x40) != 0) {
      phy_printf("%d %d\n",(int)(char)(_DAT_600c3054 >> 0x10),_DAT_600c3054 >> 0x18 & 1);
      _DAT_600c3064 = _DAT_600c3064 | 0x40;
      return;
    }
  } while ((_DAT_600c3064 & 0x10) == 0);
  phy_printf("E %x\n",_DAT_600c3080);
  _DAT_600c3064 = _DAT_600c3064 | 0x10;
  return;
}

