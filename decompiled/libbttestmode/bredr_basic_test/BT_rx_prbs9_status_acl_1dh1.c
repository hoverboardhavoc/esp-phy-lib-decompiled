/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bredr_basic_test.o -> BT_rx_prbs9_status_acl_1dh1
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int BT_rx_prbs9_status_acl_1dh1(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  byte local_1c0 [404];
  
  puVar9 = rx_head_buf;
  if (param_2 != 0) {
    phy_printf(", rx_base is %x\n",rx_head_buf);
  }
  uVar6 = rx_head_buf._24_4_;
  uVar4 = capture_btlc_timer();
  pbVar7 = local_1c0;
  for (uVar5 = 0; uVar5 != param_1 + 3U >> 2; uVar5 = uVar5 + 1) {
    uVar2 = *(undefined4 *)(puVar9 + 0x1c);
    iVar3 = 0;
    do {
      if (iVar3 == 0) {
        *pbVar7 = SUB41(uVar6,3);
      }
      else if (iVar3 == 1) {
        pbVar7[1] = (byte)uVar2;
      }
      else if (iVar3 == 2) {
        pbVar7[2] = SUB41(uVar2,1);
      }
      else {
        pbVar7[3] = SUB41(uVar2,2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    pbVar7 = pbVar7 + 4;
    puVar9 = puVar9 + 4;
    uVar6 = uVar2;
  }
  uVar6 = capture_btlc_timer();
  if (param_2 != 0) {
    phy_printf("time0 is %d us, time1 is %d time is %d us, word -> byte time is %d us \n",uVar4,
               uVar6,0);
  }
  iVar10 = 0;
  for (iVar3 = 0; param_1 != iVar3; iVar3 = iVar3 + 1) {
    uVar5 = (uint)(local_1c0[iVar3] ^ (&PRBS9_bredr_acl_1dh1)[iVar3]);
    if (param_2 != 0) {
      phy_printf("i=%d, 0x%x, 0x%x, 0x%x\n",iVar3,uVar5);
    }
    uVar8 = 0;
    do {
      uVar1 = uVar8 & 0x1f;
      uVar8 = uVar8 + 1;
      iVar10 = iVar10 + ((int)uVar5 >> uVar1 & 1U);
    } while (uVar8 != 8);
  }
  uVar4 = capture_btlc_timer();
  if (param_2 != 0) {
    phy_printf("t0 is %d, t1  is %d, del_t is %d \n",uVar6,uVar4,0);
  }
  return iVar10;
}

