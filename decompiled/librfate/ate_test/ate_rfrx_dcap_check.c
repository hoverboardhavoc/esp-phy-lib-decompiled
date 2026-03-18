/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
 * Source: librfate -> ate_test.o -> ate_rfrx_dcap_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ate_rfrx_dcap_check(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_30 [24];
  
  puVar3 = local_30;
  uVar1 = 1;
  do {
    chip_v7_set_chan(uVar1 & 0xffff,0);
    uVar1 = uVar1 + 1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  } while (uVar1 != 0xf);
  if (param_1 != 0) {
    ets_printf("rfrx_lna_dcap:");
    iVar2 = 0;
    do {
      puVar3 = local_30 + iVar2;
      iVar2 = iVar2 + 1;
      ets_printf(&_LC9,*puVar3);
    } while (iVar2 != 0xe);
    ets_printf(&_LC7);
    return;
  }
  return;
}

