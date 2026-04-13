/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_cca_fifo_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_cca_fifo_print(int param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  
  uVar1 = _DAT_201020d8;
  _DAT_201020d4 = _DAT_201020d4 & 0xfe1fffff;
  if (-1 < _DAT_20102088 << 0xc) {
    return;
  }
  _DAT_20102090 = _DAT_20102090 | 0x80000;
  cVar3 = (char)(_DAT_201020d8 >> 0xe);
  uVar2 = _DAT_201020d8 >> 0x1e;
  iVar4 = (int)cVar3;
  if (uVar2 == 0) {
    piVar5 = &n_cca_ind0;
  }
  else if (uVar2 == 1) {
    piVar5 = &n_cca_ind1;
  }
  else {
    if (uVar2 != 2) goto _L188;
    piVar5 = &n_cca_ind2;
  }
  *piVar5 = *piVar5 + 1;
_L188:
  cca_rssi_sum = cca_rssi_sum + iVar4;
  if ((cca_rssi_max == 0) || (cca_rssi_max < iVar4)) {
    cca_rssi_max = cVar3;
  }
  if ((cca_rssi_min == 0) || (iVar4 < cca_rssi_min)) {
    cca_rssi_min = cVar3;
  }
  if (param_1 == 0) {
    return;
  }
  phy_printf("%d %d %d\n",uVar1 >> 0x16 & 0xff);
  return;
}

