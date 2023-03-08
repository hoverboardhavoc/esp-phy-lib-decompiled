/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
    uVar2 = _DAT_60033d04;
    break;
  case 0xb:
  case 0x15:
    uVar2 = _DAT_60033cfc;
    break;
  case 0xc:
  case 0x16:
    uVar2 = _DAT_60033cf4;
    break;
  case 0xd:
  case 0x17:
    uVar2 = _DAT_60033cec;
    break;
  case 0xe:
  case 0x18:
    uVar2 = _DAT_60033ce4;
    break;
  case 0xf:
  case 0x19:
    uVar2 = _DAT_60033cdc;
    break;
  case 0x10:
  case 0x1a:
    uVar2 = _DAT_60033cd4;
    break;
  case 0x11:
  case 0x1b:
    uVar2 = _DAT_60033ccc;
    break;
  default:
    uVar1 = _DAT_60033d04;
    uVar2 = 0xfff;
  }
  return uVar1 & uVar2;
}

