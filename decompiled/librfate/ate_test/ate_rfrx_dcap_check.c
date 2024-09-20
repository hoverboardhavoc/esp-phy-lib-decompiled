/*
 * Last changed at upstream commit 6bd4ea98abf865ee8ee3598f58d7260bf06ff03e
 * https://github.com/espressif/esp-phy-lib/commit/6bd4ea98abf865ee8ee3598f58d7260bf06ff03e
 * Upstream date: 2024-09-20 20:33:24 +0800
 * Upstream subject: update c61 libphy support sleep
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
  undefined1 uVar4;
  undefined1 local_30 [24];
  
  puVar3 = local_30;
  uVar1 = 1;
  do {
    chip_v7_set_chan(uVar1 & 0xffff,0);
    uVar4 = rfrx_dcap_cal();
    *puVar3 = uVar4;
    uVar1 = uVar1 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar1 != 0xf);
  if (param_1 != 0) {
    phy_printf("rfrx_lna_dcap:");
    iVar2 = 0;
    do {
      puVar3 = local_30 + iVar2;
      iVar2 = iVar2 + 1;
      phy_printf(&_LC11,*puVar3);
    } while (iVar2 != 0xe);
    phy_printf(&_LC9);
    return;
  }
  return;
}

