/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7.o -> set_rx_sense
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_rx_sense(int param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  
  iVar1 = read_hw_noisefloor();
  uVar2 = param_1 * 2 - (iVar1 + 1) / 2;
  sVar3 = (short)uVar2;
  uVar4 = (uint)((param_1 + 0x100) * 0x40000) >> 0x10;
  if ((sVar3 < 0x21) || (param_1 == 0)) {
    _DAT_6001c01c = _DAT_6001c01c & 0xff00ffff | 0x200000;
    if ((0xc < sVar3) && (param_1 != 0)) goto _L280;
    _DAT_6001c010 = _DAT_6001c010 & 0x7fffff | 0x6000000;
    if ((2 < sVar3) && (param_1 != 0)) goto _L283;
    _DAT_6001c014 = _DAT_6001c014 & 0x7fffff | 0x1000000;
    if ((0x2a8 < uVar4) && (param_1 != 0)) goto _L288;
_L287:
    _DAT_6001c0cc = _DAT_6001c0cc & 0xfffffc00 | 0x2a8;
    if (0x28e < uVar4) goto _L286;
_L285:
    _DAT_6001c0cc = _DAT_6001c0cc & 0xfff003ff | 0xa3800;
    if ((uVar4 < 0x2a9) || (param_1 == 0)) goto _L289;
_L294:
    _DAT_6001c0cc = (uVar4 & 0x3ff) << 0x14 | _DAT_6001c0cc & 0xc00fffff;
    if (-2 < sVar3) goto _L297;
  }
  else {
    _DAT_6001c01c = _DAT_6001c01c & 0xff00ffff | 0x10000;
_L280:
    _DAT_6001c010 = _DAT_6001c010 & 0x7fffff | (uVar2 & 0xffff) << 0x17;
_L283:
    _DAT_6001c014 = _DAT_6001c014 & 0x7fffff | (uVar2 & 0xffff) << 0x17;
    if (uVar4 < 0x2a9) goto _L287;
_L288:
    _DAT_6001c0cc = _DAT_6001c0cc & 0xfffffc00 | uVar4 & 0x3fc;
_L286:
    if (param_1 == 0) goto _L285;
    _DAT_6001c0cc = (uVar4 & 0x3fc) << 10 | _DAT_6001c0cc & 0xfff003ff;
    if (0x2a8 < uVar4) goto _L294;
_L289:
    _DAT_6001c0cc = _DAT_6001c0cc & 0xc00fffff | 0x2a800000;
    if ((-2 < sVar3) && (param_1 != 0)) {
_L297:
      _DAT_6001c044 = _DAT_6001c044 & 0xffffff00 | uVar2 & 0xff;
      if (sVar3 < 0x21) goto _L295;
      goto _L299;
    }
  }
  _DAT_6001c044 = _DAT_6001c044 & 0xffffff00 | 0xfe;
  if ((sVar3 < 0x21) || (param_1 == 0)) {
_L295:
    _DAT_6001c124 = _DAT_6001c124 & 0xff00ffff | 0x200000;
    return;
  }
_L299:
  _DAT_6001c124 = (uVar2 & 0xff) << 0x10 | _DAT_6001c124 & 0xff00ffff;
  return;
}

