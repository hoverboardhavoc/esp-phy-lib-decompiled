/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bredr_basic_test.o -> BT_rx_prbs9_status
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int BT_rx_prbs9_status(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  
  iVar3 = capture_btlc_timer();
  uVar2 = param_1 + 4 >> 2;
  puVar7 = rx_head_buf;
  iVar9 = 0;
  for (uVar6 = 0; uVar6 != uVar2; uVar6 = uVar6 + 1) {
    uVar8 = *(uint *)(puVar7 + 0x1c) ^ (&PRBS9_bredr)[uVar6];
    if (uVar2 - 1 == uVar6) {
      uVar5 = 0xffffff;
      if ((param_1 & 3) != 3) {
        uVar5 = (uint)*(ushort *)(&_LANCHOR17 + (param_1 & 3) * 2);
      }
      uVar8 = uVar8 & uVar5;
    }
    uVar5 = 0;
    do {
      uVar1 = uVar5 & 0x1f;
      uVar5 = uVar5 + 1;
      iVar9 = iVar9 + (uVar8 >> uVar1 & 1);
    } while (uVar5 != 0x20);
    puVar7 = puVar7 + 4;
  }
  iVar4 = capture_btlc_timer();
  if ((param_2 != 0) && (iVar9 != 0)) {
    puVar7 = rx_head_buf;
    for (uVar6 = 0; uVar6 != uVar2; uVar6 = uVar6 + 1) {
      phy_printf("i=%d, 0x%x, 0x%x\n",uVar6,(&PRBS9_bredr)[uVar6],*(undefined4 *)(puVar7 + 0x1c));
      puVar7 = puVar7 + 4;
    }
    phy_printf("t0: %d, t1: %d, del_t: %d\n",iVar3,iVar4,iVar4 - iVar3);
  }
  return iVar9;
}

