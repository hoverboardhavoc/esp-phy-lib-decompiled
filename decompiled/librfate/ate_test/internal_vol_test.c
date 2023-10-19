/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librfate -> ate_test.o -> internal_vol_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void internal_vol_test(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  ushort *puVar7;
  ushort local_180 [80];
  ushort local_e0 [86];
  
  memset(local_180,0,0xa0);
  memcpy(local_e0,&_LANCHOR0,0xa0);
  rx_gain_force(1,0x46);
  iVar4 = get_bias_ref_code();
  get_inernal_vol(0x66,10,2,2,1,10,1,0);
  get_inernal_vol(0x62,8,2,2,1,8,1,0);
  get_inernal_vol(0x62,8,3,3,1,8,1,0);
  get_inernal_vol(0x6a,4,1,1,1,7,3,2);
  get_inernal_vol(0x6a,2,0,0,1,7,3,2);
  get_inernal_vol(0x6a,2,1,1,1,7,3,2);
  get_inernal_vol(0x69,7,4,4,1,7,1,0);
  uVar3 = 0;
  do {
    if (param_1 != 0) {
      puVar7 = local_180 + uVar3;
      uVar1 = local_e0[uVar3];
      uVar2 = *puVar7;
      pcVar5 = "remain,";
      switch((uVar3 & 0xffff) >> 2) {
      case 0:
        pcVar5 = "rfrx_ent_vga,";
        break;
      case 1:
        pcVar5 = "rfrx_ent_lna,";
        break;
      case 2:
        pcVar5 = "rfrx_ent_mx ,";
        break;
      case 3:
        pcVar5 = "ckgen_ent_pk,";
        break;
      case 4:
        pcVar5 = "bpll_ent_ad1,";
        break;
      case 5:
        pcVar5 = "bpll_ent_ad2,";
        break;
      case 6:
        pcVar5 = "bpll_ent_ad3,";
        break;
      case 7:
        pcVar5 = "bpll_ent_pll,";
        break;
      case 8:
        pcVar5 = "fpll_ent_vco,";
        break;
      case 9:
        pcVar5 = "fpll_ent_bia,";
        break;
      case 10:
        pcVar5 = "bias_ent_con,";
        break;
      case 0xb:
        pcVar5 = "bias_ent_cpr,";
        break;
      case 0xc:
        pcVar5 = "bias_ent_cgm,";
        break;
      case 0xd:
        pcVar5 = "btop_ent_fi ,";
        break;
      case 0xe:
        pcVar5 = "btop_ent_fq ,";
        break;
      case 0xf:
        pcVar5 = "btop_ent_bi ,";
        break;
      case 0x10:
        pcVar5 = "btop_ent_bq ,";
        break;
      case 0x11:
        pcVar5 = "sar_ent_tsen,";
        break;
      case 0x12:
        pcVar5 = "sar_ent_rtc ,";
      }
      phy_printf(pcVar5);
      uVar6 = (int)((uint)uVar2 * 100) / iVar4;
      phy_printf("%02d: code=%04d, vol=%03d, targ=%03d, err=%d\n",uVar3,*puVar7,uVar6 & 0xffff,
                 (uint)uVar1,(int)((uVar6 - uVar1) * 0x10000) >> 0x10);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x50);
  rx_gain_force(0,0x46);
  return;
}

