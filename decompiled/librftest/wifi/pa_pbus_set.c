/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
 * Source: librftest -> wifi.o -> pa_pbus_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pa_pbus_set(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint auStack_400 [256];
  
  uVar1 = _DAT_600060e8 & 0xff;
  iVar2 = uVar1 + 1;
  auStack_400[uVar1] = param_1 << 9 | 0x4401ff;
  auStack_400[iVar2] = 0xf30000;
  uVar4 = uVar1 + 2;
  do {
    iVar3 = uVar1 * 0x100;
    uVar1 = uVar1 + 1;
    _DAT_600060c8 = iVar3 + 0x20000U & 0xfffcffff | _DAT_600060c8 & 0xfffc00ff;
  } while (uVar4 != uVar1);
  uVar1 = (_DAT_600060e8 & 0xff0000) >> 0x10;
  _DAT_600060e8 = iVar2 * 0x100 & 0xffffU | _DAT_600060e8 & 0xff00ff | (uVar1 + 1) * 0x1000000;
  auStack_400[uVar1] = param_2 << 9 | 0x4401ff;
  auStack_400[uVar1 + 1] = 0;
  uVar4 = uVar1 + 2;
  do {
    _DAT_600060cc = auStack_400[uVar1];
    iVar2 = uVar1 * 0x100;
    uVar1 = uVar1 + 1;
    _DAT_600060c8 = iVar2 + 0x20000U & 0xfffcffff | _DAT_600060c8 & 0xfffc00ff;
  } while (uVar1 != uVar4);
  return;
}

