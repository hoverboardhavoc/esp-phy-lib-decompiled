/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_rfpll.o -> rfpll_chgp_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rfpll_chgp_cal(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  (**(code **)(_g_phyFuns + 0x60))(0x62,1,0xf,6,6,0,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x62,1,0xf,5,5,0,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x62,1,0xf,5,5,1,*(code **)(_g_phyFuns + 0x60));
  cVar1 = '\0';
  do {
    ets_delay_us(0x14);
    iVar3 = (**(code **)(_g_phyFuns + 0x5c))(0x62,1,0xe,7,7,*(code **)(_g_phyFuns + 0x5c));
    if (iVar3 != 0) break;
    if (cVar1 == 'c') {
      phy_printf("error: chgp_cal no done!!!\n");
    }
    cVar1 = cVar1 + '\x01';
  } while (cVar1 != 'd');
  iVar3 = (**(code **)(_g_phyFuns + 0x5c))(0x62,1,0xe,4,0,*(code **)(_g_phyFuns + 0x5c));
  (**(code **)(_g_phyFuns + 0x60))(0x62,1,0xf,6,6,1,*(code **)(_g_phyFuns + 0x60));
  uVar2 = (iVar3 * 7) / 6 + 9U & 0xff;
  if (0x1f < uVar2) {
    uVar2 = 0x1f;
  }
  (**(code **)(_g_phyFuns + 0x60))(0x62,1,0xf,4,0,uVar2,*(code **)(_g_phyFuns + 0x60));
  phy_param = (**(code **)(_g_phyFuns + 0x50))(0x62,1,0xf,*(code **)(_g_phyFuns + 0x50));
  return;
}

