/*
 * Last changed at upstream commit d39766d34edf7bf22dddc91d5f45f2b91576a407
 * https://github.com/espressif/esp-phy-lib/commit/d39766d34edf7bf22dddc91d5f45f2b91576a407
 * Upstream date: 2023-05-18 20:57:26 +0800
 * Upstream subject: esp32c6: enable wifi_apb_clk before phy_init and restore after phy_init, C6_libphy_20230517_b4b3263
 * Source: libphy -> phy_tx_cal.o -> txdc_cal_pwdet_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txdc_cal_pwdet_init(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  char cVar9;
  ushort uStack_34;
  ushort uStack_32;
  
  uVar2 = _DAT_600a081c;
  uVar1 = _DAT_600a0810;
  uVar7 = _index_to_txbbgain >> 4 & 1;
  puVar3 = &phy_param;
  if (_DAT_0001219a == 0) {
    _DAT_0001219a = _DAT_000120bc;
    _DAT_0001219c = _DAT_000120be;
    _DAT_0001219e = _DAT_000120c4;
    _DAT_000121a0 = _DAT_000120c6;
  }
  _DAT_600a081c = _DAT_600a081c & 0xffffff00 | 0xf0;
  _DAT_600a0810 = _DAT_600a0810 & 0xfffff00f | 0x780;
  (**(code **)(_g_phyFuns + 0x98))(1,0x200,0x78,0,0,0,*(code **)(_g_phyFuns + 0x98));
  set_txclk_en(1);
  iVar8 = 0;
  (**(code **)(_g_phyFuns + 0x1c))(*(code **)(_g_phyFuns + 0x1c));
  pbus_debugmode();
  (**(code **)(_g_phyFuns + 0x8c))(0x3f,0,*(code **)(_g_phyFuns + 0x8c));
  while( true ) {
    uStack_34 = *(ushort *)(puVar3 + 0x186);
    uStack_32 = *(ushort *)(puVar3 + 0x188);
    uVar5 = index_to_txbbgain(iVar8);
    (**(code **)(_g_phyFuns + 0x74))(1,2,uVar5,*(code **)(_g_phyFuns + 0x74));
    if (iVar8 == 0) {
      cVar9 = '\x04';
      uVar4 = 0;
      uVar6 = 0;
      do {
        txdc_cal_pwdet(&uStack_34,uVar7);
        cVar9 = cVar9 + -1;
        uVar6 = uVar6 + uStack_34 & 0xffff;
        uVar4 = uVar4 + uStack_32 & 0xffff;
      } while (cVar9 != '\0');
      *(short *)(puVar3 + 0x186) = (short)((int)(uVar6 + 2) >> 2);
      *(short *)(puVar3 + 0x188) = (short)((int)(uVar4 + 2) >> 2);
    }
    else {
      txdc_cal_pwdet(&uStack_34,uVar7);
      *(ushort *)(puVar3 + 0x186) = uStack_34;
      *(ushort *)(puVar3 + 0x188) = uStack_32;
    }
    puVar3 = puVar3 + 4;
    if (iVar8 != 0) break;
    iVar8 = 1;
  }
  if (param_1 == 0) {
    (**(code **)(_g_phyFuns + 0x84))(0,*(code **)(_g_phyFuns + 0x84));
    pbus_workmode();
    set_txclk_en(0);
    _DAT_600a081c = _DAT_600a081c & 0xffffff00 | uVar2 & 0xff;
    _DAT_600a0810 = uVar1 & 0xff0 | _DAT_600a0810 & 0xfffff00f;
    (**(code **)(_g_phyFuns + 0x98))(0,0x80,0x78,0,0,0,*(code **)(_g_phyFuns + 0x98));
  }
  return;
}

