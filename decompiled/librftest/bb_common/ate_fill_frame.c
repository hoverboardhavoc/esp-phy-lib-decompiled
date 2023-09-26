/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> ate_fill_frame
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ate_fill_frame(void)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint local_34 [6];
  undefined4 uStack_1c;
  undefined4 uStack_14;
  
  memset(local_34,0,0x24);
  local_34[0] = 0xfa0008;
  local_34[1] = 0x60504030;
  local_34[3] = _DAT_600a4060 << 0x10 | _DAT_600a405c >> 0x10;
  uStack_1c = 0xa0431;
  uStack_14 = 0x74657373;
  local_34[2] = _DAT_600a405c << 0x10 | 0x2010;
  puVar5 = local_34;
  puVar4 = (uint *)(_PSDU0_OFFSET + 0x2c);
  puVar2 = (uint *)(_PSDU0_OFFSET + 8);
  do {
    uVar1 = *puVar5;
    puVar3 = puVar2 + 1;
    puVar5 = puVar5 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar3;
  } while (puVar3 != puVar4);
  return;
}

