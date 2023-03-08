/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> remove_11b_4p8G_spur
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void remove_11b_4p8G_spur(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_3 & 0x7f) << 8;
  uVar1 = (param_2 & 0xf) << 0xf;
  _DAT_6001c458 = _DAT_6001c458 & 0xfff800ff | uVar2 | uVar1 | 0x80000;
  _DAT_6001c454 = _DAT_6001c454 & 0xfff800fe | uVar2 | uVar1 | 0x80000 | param_1 & 1;
  return;
}

