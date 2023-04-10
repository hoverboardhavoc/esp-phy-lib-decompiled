/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
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
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  uint uVar13;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  undefined *puVar17;
  ushort uStack_44;
  ushort uStack_42;
  
  uVar2 = _DAT_600a081c;
  uVar1 = _DAT_600a0810;
  uVar3 = _index_to_txbbgain >> 4 & 1;
  puVar17 = &phy_param;
  if (_DAT_0001219a == 0) {
    _DAT_0001219a = _DAT_000120bc;
    _DAT_0001219c = _DAT_000120be;
    _DAT_0001219e = _DAT_000120c4;
    _DAT_000121a0 = _DAT_000120c6;
  }
  _DAT_600a081c = _DAT_600a081c & 0xffffff00 | 0xf0;
  _DAT_600a0810 = _DAT_600a0810 & 0xfffff00f | 0x780;
  iVar16 = 0;
  (**(code **)(_g_phyFuns + 0x98))(1,0x200,0x78,0,0,0,*(code **)(_g_phyFuns + 0x98));
  uVar4 = (**(code **)(_g_phyFuns + 0x50))(0x6b,1,4,*(code **)(_g_phyFuns + 0x50));
  uVar5 = (**(code **)(_g_phyFuns + 0x50))(0x6b,1,3,*(code **)(_g_phyFuns + 0x50));
  uVar6 = (**(code **)(_g_phyFuns + 0x50))(0x6b,1,7,*(code **)(_g_phyFuns + 0x50));
  uVar7 = (**(code **)(_g_phyFuns + 0x50))(0x6b,1,7,*(code **)(_g_phyFuns + 0x50));
  uVar8 = (**(code **)(_g_phyFuns + 0x50))(0x6b,1,3,*(code **)(_g_phyFuns + 0x50));
  uVar9 = (**(code **)(_g_phyFuns + 0x50))(0x6b,1,6,*(code **)(_g_phyFuns + 0x50));
  uVar10 = (**(code **)(_g_phyFuns + 0x50))(0x69,0,4,*(code **)(_g_phyFuns + 0x50));
  (**(code **)(_g_phyFuns + 0x60))(0x6b,1,4,3,0,0xf,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x6b,1,7,7,4,0xf,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x6b,1,6,5,3,0,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x69,0,4,3,0,2,*(code **)(_g_phyFuns + 0x60));
  set_txclk_en(1);
  (**(code **)(_g_phyFuns + 0x1c))(*(code **)(_g_phyFuns + 0x1c));
  pbus_debugmode();
  (**(code **)(_g_phyFuns + 0x8c))(0x3f,0,*(code **)(_g_phyFuns + 0x8c));
  while( true ) {
    uStack_44 = *(ushort *)(puVar17 + 0x186);
    uStack_42 = *(ushort *)(puVar17 + 0x188);
    uVar11 = index_to_txbbgain(iVar16);
    (**(code **)(_g_phyFuns + 0x74))(1,2,uVar11,*(code **)(_g_phyFuns + 0x74));
    if (iVar16 == 0) {
      cVar12 = '\x04';
      uVar15 = 0;
      uVar13 = 0;
      do {
        txdc_cal_pwdet(&uStack_44,uVar3);
        cVar12 = cVar12 + -1;
        uVar13 = uVar13 + uStack_44 & 0xffff;
        uVar15 = uVar15 + uStack_42 & 0xffff;
      } while (cVar12 != '\0');
      *(short *)(puVar17 + 0x186) = (short)((int)(uVar13 + 2) >> 2);
      uVar14 = (ushort)((int)(uVar15 + 2) >> 2);
    }
    else {
      txdc_cal_pwdet(&uStack_44,uVar3);
      *(ushort *)(puVar17 + 0x186) = uStack_44;
      uVar14 = uStack_42;
    }
    *(ushort *)(puVar17 + 0x188) = uVar14;
    puVar17 = puVar17 + 4;
    if (iVar16 != 0) break;
    iVar16 = 1;
  }
  if (param_1 == 0) {
    (**(code **)(_g_phyFuns + 0x84))(0,*(code **)(_g_phyFuns + 0x84));
    pbus_workmode();
    set_txclk_en(0);
    _DAT_600a081c = _DAT_600a081c & 0xffffff00 | uVar2 & 0xff;
    _DAT_600a0810 = uVar1 & 0xff0 | _DAT_600a0810 & 0xfffff00f;
    _DAT_600a0414 = _DAT_600a0414 & 0xfffffffe;
    _DAT_600a0410 = _DAT_600a0410 & 0xffbf00ff;
    (**(code **)(_g_phyFuns + 0x98))(0,0x80,0x78,0,0,0,*(code **)(_g_phyFuns + 0x98));
    (**(code **)(_g_phyFuns + 0x58))(0x6b,1,4,uVar4,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x6b,1,3,uVar5,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x6b,1,7,uVar6,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x6b,1,7,uVar7,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x6b,1,3,uVar8,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x6b,1,6,uVar9,*(code **)(_g_phyFuns + 0x58));
    (**(code **)(_g_phyFuns + 0x58))(0x69,0,4,uVar10,*(code **)(_g_phyFuns + 0x58));
  }
  return;
}

