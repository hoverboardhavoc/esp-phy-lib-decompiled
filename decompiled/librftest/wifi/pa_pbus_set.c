/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
  uint uVar3;
  uint auStack_400 [256];
  
  uVar1 = _DAT_600060e8 & 0xff;
  iVar2 = uVar1 + 2;
  auStack_400[uVar1] = param_1 << 9 | 0x4401ff;
  auStack_400[uVar1 + 1] = 0xf30000;
  auStack_400[iVar2] = 0;
  uVar3 = uVar1 + 3;
  for (; uVar1 != uVar3; uVar1 = uVar1 + 1) {
    _DAT_600060c8 = uVar1 * 0x100 + 0x20000 & 0xfffcffff | _DAT_600060c8 & 0xfffc00ff;
  }
  uVar1 = (_DAT_600060e8 & 0xff0000) >> 0x10;
  _DAT_600060e8 = iVar2 * 0x100 & 0xffffU | _DAT_600060e8 & 0xff00ff | (uVar1 + 1) * 0x1000000;
  auStack_400[uVar1] = param_2 << 9 | 0x4401ff;
  auStack_400[uVar1 + 1] = 0;
  uVar3 = uVar1 + 2;
  do {
    _DAT_600060cc = auStack_400[uVar1];
    iVar2 = uVar1 * 0x100;
    uVar1 = uVar1 + 1;
    _DAT_600060c8 = iVar2 + 0x20000U & 0xfffcffff | _DAT_600060c8 & 0xfffc00ff;
  } while (uVar1 != uVar3);
  return;
}

