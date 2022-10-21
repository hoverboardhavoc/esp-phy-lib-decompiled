/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_rfpll.o -> set_rfpll_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint set_rfpll_freq(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  (**(code **)(_g_phyFuns + 0x1bc))(0x62,1,0xb,6,6,0,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x62,1,2,7,7,0,*(code **)(_g_phyFuns + 0x1bc));
  rfpll_set_freq(param_2,param_1,param_3,param_4);
  write_rfpll_sdm(param_4);
  restart_cal();
  wait_rfpll_cal_end();
  uVar4 = read_pll_cap();
  (**(code **)(_g_phyFuns + 0x1bc))(0x62,1,0xb,6,6,1,*(code **)(_g_phyFuns + 0x1bc));
  uVar2 = 0;
  bVar1 = false;
  uVar6 = 0;
  do {
    iVar7 = 0;
    do {
      uVar3 = uVar4 - iVar7;
      if (bVar1) {
        uVar3 = uVar4 + 1 + iVar7;
      }
      ram_write_pll_cap(uVar3 & 0xffff);
      ets_delay_us(5);
      uVar5 = (**(code **)(_g_phyFuns + 0x1ac))(0x62,1,0xc,*(code **)(_g_phyFuns + 0x1ac));
      if ((uVar5 >> 2 & 3) == 0) {
        uVar6 = uVar6 + (uVar3 & 0xffff) & 0xffff;
        uVar2 = uVar2 + 1 & 0xff;
      }
      else if (uVar2 != 0) break;
      iVar7 = iVar7 + 1;
    } while (iVar7 != 10);
    if (bVar1) {
      uVar3 = uVar4;
      if (uVar2 != 0) {
        uVar3 = uVar6 / uVar2;
      }
      ram_write_pll_cap(uVar3);
      ets_delay_us(5);
      return uVar4 << 0x10 | uVar3;
    }
    bVar1 = true;
  } while( true );
}

