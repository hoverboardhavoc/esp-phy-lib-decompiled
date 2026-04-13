/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bredr_basic_test.o -> bredr_rx_one_pkt
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bredr_rx_one_pkt(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = capture_btlc_timer();
  *(int *)(tlTable + 0xc) = iVar1 + 1000;
  *(uint *)(devTable + 0x10) = *(uint *)(devTable + 0x10) | 0x800000;
  *(byte *)(rxLink0 + 0xf) = *(byte *)(rxLink0 + 0xf) & 0x3f;
  _DAT_20101000 = _DAT_20101000 | 1;
  wait_rxend_int();
  wait_link_end_int();
  uVar2 = check_rxend_suc_int();
  *param_1 = uVar2;
  uVar2 = check_rx_pkt_stat(rxHeadBuf);
  *param_2 = uVar2;
  return;
}

