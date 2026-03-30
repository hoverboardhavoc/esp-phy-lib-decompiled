/*
 * Last changed at upstream commit 3dad662616b80b89abed23f218fb8ef2222ceb63
 * https://github.com/espressif/esp-phy-lib/commit/3dad662616b80b89abed23f218fb8ef2222ceb63
 * Upstream date: 2026-03-30 10:56:56 +0800
 * Upstream subject: support h4eco1 libphy
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
    phy_printf("rfrx_lna_dcap:");
    iVar2 = 0;
    do {
      puVar3 = local_30 + iVar2;
      iVar2 = iVar2 + 1;
      phy_printf(&_LC9,*puVar3);
    } while (iVar2 != 0xe);
    phy_printf(&_LC7);
    return;
  }
  return;
}

