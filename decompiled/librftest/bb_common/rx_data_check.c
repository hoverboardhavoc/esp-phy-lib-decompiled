/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> bb_common.o -> rx_data_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

bool rx_data_check(uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0xffff;
  param_1 = param_1 & 0xffff;
  if (param_2 < 0x10) {
    uVar2 = (uint)*(ushort *)(param_1 + 2);
    uVar3 = 0xfff;
  }
  else {
    uVar2 = *(uint *)(param_1 + 4) >> 8;
  }
  puVar1 = (uint *)(param_1 + 0xc);
  uVar4 = 0;
  while( true ) {
    if (((uVar2 & uVar3) >> 2) - 1 <= uVar4) {
      uVar3 = uVar2 & uVar3 & 3;
      if (uVar3 == 0) {
        return true;
      }
      uVar4 = uVar4 * 4;
      return ((((uVar4 + 1) * 0x100 & 0xffff) +
               (uVar4 + 3) * 0x1000000 + (uVar4 & 0xff) + ((uVar4 + 2) * 0x10000 & 0xff0000) ^
              *puVar1) & (1 << (uVar3 << 3)) - 1U) == 0;
    }
    if (*puVar1 !=
        (uVar4 * 0x40000 + 0x20000 & 0xff0000) + uVar4 * 0x4000000 + 0x3000000 +
        (uVar4 * 0x400 + 0x100 & 0xffff) + (uVar4 & 0x3f) * 4) break;
    *puVar1 = 0;
    uVar4 = uVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  return false;
}

