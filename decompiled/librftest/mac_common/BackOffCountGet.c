/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> mac_common.o -> BackOffCountGet
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint BackOffCountGet(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0xfff;
  switch(param_1) {
  case 10:
  case 0x14:
    uVar2 = _DAT_600a4d68;
    break;
  case 0xb:
  case 0x15:
    uVar2 = _DAT_600a4d58;
    break;
  case 0xc:
  case 0x16:
    uVar2 = _DAT_600a4d48;
    break;
  case 0xd:
  case 0x17:
    uVar2 = _DAT_600a4d38;
    break;
  case 0xe:
  case 0x18:
    uVar2 = _DAT_600a4d28;
    break;
  case 0xf:
  case 0x19:
    uVar2 = _DAT_600a4d18;
    break;
  case 0x10:
  case 0x1a:
    uVar2 = _DAT_600a4d08;
    break;
  case 0x11:
  case 0x1b:
    uVar2 = _DAT_600a4cf8;
    break;
  default:
    uVar1 = _DAT_600a4d68;
    uVar2 = 0xfff;
  }
  return uVar1 & uVar2;
}

