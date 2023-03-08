/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librfate -> ate_test.o -> internal_vol_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void internal_vol_test(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  char *pcVar4;
  ushort *puVar5;
  uint uVar6;
  ushort local_180 [80];
  ushort local_e0 [86];
  
  memset(local_180,0,0xa0);
  memcpy(local_e0,&_LANCHOR0,0xa0);
  (**(code **)(_g_phyFuns + 0x4c))(1,0x46,*(code **)(_g_phyFuns + 0x4c));
  get_inernal_vol(100,0,2,2,1,1,2,1);
  get_inernal_vol(100,0,3,3,1,1,2,1);
  get_inernal_vol(100,0,4,4,1,1,2,1);
  get_inernal_vol(0x65,0,7,7,1,2,1,0);
  get_inernal_vol(0x66,10,7,6,1,10,5,4);
  get_inernal_vol(0x66,10,7,6,2,10,5,4);
  get_inernal_vol(0x66,10,7,6,3,10,5,4);
  get_inernal_vol(0x66,10,3,3,1,10,5,4);
  get_inernal_vol(0x62,8,2,2,1,8,1,0);
  get_inernal_vol(0x62,8,3,3,1,8,1,0);
  get_inernal_vol(0x6a,4,1,1,1,7,3,2);
  get_inernal_vol(0x6a,2,0,0,1,7,3,2);
  get_inernal_vol(0x6a,2,1,1,1,7,3,2);
  get_inernal_vol(0x67,0,2,2,1,0,1,0);
  get_inernal_vol(0x67,0,3,3,1,0,1,0);
  get_inernal_vol(0x67,0,4,4,1,0,1,0);
  get_inernal_vol(0x67,0,5,5,1,0,1,0);
  get_inernal_vol(0x69,7,2,2,1,7,1,0);
  get_inernal_vol(0x69,7,3,3,1,7,1,0);
  uVar3 = 0;
  do {
    if (param_1 != 0) {
      puVar5 = local_180 + uVar3;
      uVar1 = local_e0[uVar3];
      uVar2 = *puVar5;
      uVar6 = (uint)_DAT_00012116;
      pcVar4 = "remain,";
      switch((uVar3 & 0xffff) >> 2) {
      case 0:
        pcVar4 = "rfrx_ent_vga,";
        break;
      case 1:
        pcVar4 = "rfrx_ent_lna,";
        break;
      case 2:
        pcVar4 = "rfrx_ent_mx ,";
        break;
      case 3:
        pcVar4 = "ckgen_ent_pk,";
        break;
      case 4:
        pcVar4 = "bpll_ent_ad1,";
        break;
      case 5:
        pcVar4 = "bpll_ent_ad2,";
        break;
      case 6:
        pcVar4 = "bpll_ent_ad3,";
        break;
      case 7:
        pcVar4 = "bpll_ent_pll,";
        break;
      case 8:
        pcVar4 = "fpll_ent_vco,";
        break;
      case 9:
        pcVar4 = "fpll_ent_bia,";
        break;
      case 10:
        pcVar4 = "bias_ent_con,";
        break;
      case 0xb:
        pcVar4 = "bias_ent_cpr,";
        break;
      case 0xc:
        pcVar4 = "bias_ent_cgm,";
        break;
      case 0xd:
        pcVar4 = "btop_ent_fi ,";
        break;
      case 0xe:
        pcVar4 = "btop_ent_fq ,";
        break;
      case 0xf:
        pcVar4 = "btop_ent_bi ,";
        break;
      case 0x10:
        pcVar4 = "btop_ent_bq ,";
        break;
      case 0x11:
        pcVar4 = "sar_ent_tsen,";
        break;
      case 0x12:
        pcVar4 = "sar_ent_rtc ,";
      }
      phy_printf(pcVar4);
      uVar6 = ((uint)uVar2 * 100) / uVar6;
      phy_printf("%02d: code=%04d, vol=%03d, targ=%03d, err=%d\n",uVar3,*puVar5,uVar6 & 0xffff,
                 (uint)uVar1,(int)((uVar6 - uVar1) * 0x10000) >> 0x10);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x50);
  (**(code **)(_g_phyFuns + 0x4c))(0,0x46,*(code **)(_g_phyFuns + 0x4c));
  return;
}

