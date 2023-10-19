/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> mac_common.o -> BackOffCountGet
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint BackOffCountGet(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  
  switch(param_1) {
  default:
    uVar1 = (uint)DAT_600130ad;
    uVar2 = (uint)DAT_600130ae;
    break;
  case 0xb:
  case 0x15:
    uVar1 = (uint)DAT_6001309d;
    uVar2 = (uint)DAT_6001309e;
    break;
  case 0xc:
  case 0x16:
    uVar1 = (uint)DAT_6001308d;
    uVar2 = (uint)DAT_6001308e;
    break;
  case 0xd:
  case 0x17:
    uVar1 = (uint)DAT_6001307d;
    uVar2 = (uint)DAT_6001307e;
    break;
  case 0xe:
  case 0x18:
    uVar1 = (uint)DAT_6001306d;
    uVar2 = (uint)DAT_6001306e;
    break;
  case 0xf:
  case 0x19:
    uVar1 = (uint)DAT_6001305d;
    uVar2 = (uint)DAT_6001305e;
    break;
  case 0x10:
  case 0x1a:
    uVar1 = (uint)DAT_6001304d;
    uVar2 = (uint)DAT_6001304e;
    break;
  case 0x11:
  case 0x1b:
    uVar1 = (uint)DAT_6001303d;
    uVar2 = (uint)DAT_6001303e;
  }
  return (uVar2 & 0xf) << 8 | uVar1;
}

