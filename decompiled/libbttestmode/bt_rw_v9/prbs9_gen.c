/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_v9.o -> prbs9_gen
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void prbs9_gen(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar4 = param_1 + 0x101;
  uVar5 = 0;
  uVar7 = 0xffff;
  do {
    uVar6 = 0;
    do {
      uVar3 = uVar7 << 1;
      uVar1 = uVar6 & 0x1f;
      uVar7 = (uVar7 ^ uVar7 << 4) >> 8 & 1 | uVar3;
      uVar2 = uVar6 & 0x1f;
      uVar6 = uVar6 + 1;
      uVar5 = uVar5 & ~(1 << uVar1) | ((uVar3 & 0x200) >> 9) << uVar2;
    } while (uVar6 != 0x20);
    *param_1 = uVar5;
    param_1 = param_1 + 1;
  } while (puVar4 != param_1);
  return;
}

