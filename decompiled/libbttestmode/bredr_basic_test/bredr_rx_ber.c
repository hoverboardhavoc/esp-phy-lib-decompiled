/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bredr_basic_test.o -> bredr_rx_ber
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int bredr_rx_ber(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  byte abStack_1c0 [404];
  
  if ((0x1d < param_1) && (param_2 == 0)) {
    prbs9_gen_bredr(&PRBS9_bredr);
    iVar11 = capture_btlc_timer();
    uVar4 = param_1 + 4 >> 2;
    puVar10 = rx_head_buf;
    iVar12 = 0;
    for (uVar13 = 0; uVar13 != uVar4; uVar13 = uVar13 + 1) {
      uVar9 = *(uint *)(puVar10 + 0x1c) ^ (&PRBS9_bredr)[uVar13];
      if (uVar4 - 1 == uVar13) {
        uVar7 = 0xffffff;
        if ((param_1 & 3) != 3) {
          uVar7 = (uint)*(ushort *)(&_LANCHOR17 + (param_1 & 3) * 2);
        }
        uVar9 = uVar9 & uVar7;
      }
      uVar7 = 0;
      do {
        uVar1 = uVar7 & 0x1f;
        uVar7 = uVar7 + 1;
        iVar12 = iVar12 + (uVar9 >> uVar1 & 1);
      } while (uVar7 != 0x20);
      puVar10 = puVar10 + 4;
    }
    iVar6 = capture_btlc_timer();
    if ((param_3 != 0) && (iVar12 != 0)) {
      puVar10 = rx_head_buf;
      for (uVar13 = 0; uVar13 != uVar4; uVar13 = uVar13 + 1) {
        phy_printf("i=%d, 0x%x, 0x%x\n",uVar13,(&PRBS9_bredr)[uVar13],
                   *(undefined4 *)(puVar10 + 0x1c));
        puVar10 = puVar10 + 4;
      }
      phy_printf("t0: %d, t1: %d, del_t: %d\n",iVar11,iVar6,iVar6 - iVar11);
    }
    return iVar12;
  }
  prbs9_gen_bredr_acl_1dh1(&PRBS9_bredr_acl_1dh1);
  puVar10 = rx_head_buf;
  if (param_3 != 0) {
    phy_printf(", rx_base is %x\n",rx_head_buf);
  }
  uVar5 = rx_head_buf._24_4_;
  uVar3 = capture_btlc_timer();
  pbVar8 = abStack_1c0;
  for (uVar4 = 0; uVar4 != param_1 + 3 >> 2; uVar4 = uVar4 + 1) {
    uVar2 = *(undefined4 *)(puVar10 + 0x1c);
    iVar11 = 0;
    do {
      if (iVar11 == 0) {
        *pbVar8 = SUB41(uVar5,3);
      }
      else if (iVar11 == 1) {
        pbVar8[1] = (byte)uVar2;
      }
      else if (iVar11 == 2) {
        pbVar8[2] = SUB41(uVar2,1);
      }
      else {
        pbVar8[3] = SUB41(uVar2,2);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != 4);
    pbVar8 = pbVar8 + 4;
    puVar10 = puVar10 + 4;
    uVar5 = uVar2;
  }
  uVar5 = capture_btlc_timer();
  if (param_3 != 0) {
    phy_printf("time0 is %d us, time1 is %d time is %d us, word -> byte time is %d us \n",uVar3,
               uVar5,0);
  }
  iVar11 = 0;
  for (uVar4 = 0; param_1 != uVar4; uVar4 = uVar4 + 1) {
    uVar13 = (uint)(abStack_1c0[uVar4] ^ (&PRBS9_bredr_acl_1dh1)[uVar4]);
    if (param_3 != 0) {
      phy_printf("i=%d, 0x%x, 0x%x, 0x%x\n",uVar4,uVar13);
    }
    uVar9 = 0;
    do {
      uVar7 = uVar9 & 0x1f;
      uVar9 = uVar9 + 1;
      iVar11 = iVar11 + ((int)uVar13 >> uVar7 & 1U);
    } while (uVar9 != 8);
  }
  uVar3 = capture_btlc_timer();
  if (param_3 != 0) {
    phy_printf("t0 is %d, t1  is %d, del_t is %d \n",uVar5,uVar3,0);
  }
  return iVar11;
}

