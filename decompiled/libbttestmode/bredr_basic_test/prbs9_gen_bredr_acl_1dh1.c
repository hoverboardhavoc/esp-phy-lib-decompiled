/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bredr_basic_test.o -> prbs9_gen_bredr_acl_1dh1
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void prbs9_gen_bredr_acl_1dh1(undefined1 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar4 = param_1 + 0x28;
  uVar7 = 0;
  uVar6 = 0xffff;
  do {
    uVar5 = 0;
    do {
      uVar3 = uVar6 << 1;
      uVar1 = uVar5 & 0x1f;
      uVar6 = (uVar6 ^ uVar6 << 4) >> 8 & 1 | uVar3;
      uVar2 = uVar5 & 0x1f;
      uVar5 = uVar5 + 1;
      uVar7 = uVar7 & ~(1 << uVar1) | ((uVar3 & 0x200) >> 9) << uVar2;
    } while (uVar5 != 0x20);
    param_1[1] = (char)(uVar7 >> 8);
    param_1[2] = (char)(uVar7 >> 0x10);
    *param_1 = (char)uVar7;
    param_1[3] = (char)(uVar7 >> 0x18);
    param_1 = param_1 + 4;
  } while (puVar4 != param_1);
  return;
}

