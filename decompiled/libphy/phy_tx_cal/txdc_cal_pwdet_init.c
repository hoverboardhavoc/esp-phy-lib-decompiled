/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
 * Source: libphy -> phy_tx_cal.o -> txdc_cal_pwdet_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txdc_cal_pwdet_init(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  code *pcVar12;
  code *pcVar13;
  undefined *puVar14;
  char cVar15;
  
  uVar1 = _index_to_txbbgain >> 4;
  pcVar12 = (code *)&phy_param;
  do {
    pcVar13 = pcVar12 + 2;
    *(undefined2 *)(pcVar12 + 0x18e) = *(undefined2 *)(pcVar12 + 0xa8);
    uVar3 = _DAT_600a081c;
    uVar2 = _DAT_600a0810;
    pcVar12 = pcVar13;
  } while (pcVar13 != txcal_work_mode);
  _DAT_600a081c = _DAT_600a081c & 0xffffff00 | 0xf0;
  _DAT_600a0810 = _DAT_600a0810 & 0xfffff00f | 0x780;
  (**(code **)(_g_phyFuns + 0x98))(1,0xc0,0x78,0,0,0,*(code **)(_g_phyFuns + 0x98));
  _DAT_600a0414 = _DAT_600a0414 | 1;
  _DAT_600a0410 = _DAT_600a0410 & 0xffff00ff | 0x40b000;
  cVar15 = '\0';
  uVar4 = (**(code **)(_g_phyFuns + 0x50))(0x6b,1,4,*(code **)(_g_phyFuns + 0x50));
  uVar5 = (**(code **)(_g_phyFuns + 0x50))(0x6b,1,3,*(code **)(_g_phyFuns + 0x50));
  uVar6 = (**(code **)(_g_phyFuns + 0x50))(0x6b,1,7,*(code **)(_g_phyFuns + 0x50));
  uVar7 = (**(code **)(_g_phyFuns + 0x50))(0x6b,1,7,*(code **)(_g_phyFuns + 0x50));
  uVar8 = (**(code **)(_g_phyFuns + 0x50))(0x6b,1,3,*(code **)(_g_phyFuns + 0x50));
  uVar9 = (**(code **)(_g_phyFuns + 0x50))(0x6b,1,6,*(code **)(_g_phyFuns + 0x50));
  uVar10 = (**(code **)(_g_phyFuns + 0x50))(0x69,0,4,*(code **)(_g_phyFuns + 0x50));
  (**(code **)(_g_phyFuns + 0x60))(0x6b,1,4,3,0,0xf,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x6b,1,3,3,0,0xf,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x6b,1,7,7,4,0xf,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x6b,1,7,3,0,0xf,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x6b,1,3,7,4,0,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x6b,1,6,5,3,0,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x69,0,4,3,0,2,*(code **)(_g_phyFuns + 0x60));
  set_txclk_en(1);
  (**(code **)(_g_phyFuns + 0x1c))(*(code **)(_g_phyFuns + 0x1c));
  pbus_debugmode();
  (**(code **)(_g_phyFuns + 0x8c))(0x3f,0,*(code **)(_g_phyFuns + 0x8c));
  puVar14 = &phy_param;
  do {
    uVar11 = index_to_txbbgain(cVar15);
    cVar15 = cVar15 + '\x01';
    (**(code **)(_g_phyFuns + 0x74))(1,2,uVar11,*(code **)(_g_phyFuns + 0x74));
    txdc_cal_pwdet(puVar14,uVar1 & 1);
    puVar14 = puVar14 + 8;
  } while (cVar15 != '\x05');
  (**(code **)(_g_phyFuns + 0x84))(0,*(code **)(_g_phyFuns + 0x84));
  pbus_workmode();
  set_txclk_en(0);
  _DAT_600a081c = _DAT_600a081c & 0xffffff00 | uVar3 & 0xff;
  _DAT_600a0810 = uVar2 & 0xff0 | _DAT_600a0810 & 0xfffff00f;
  _DAT_600a0414 = _DAT_600a0414 & 0xfffffffe;
  _DAT_600a0410 = _DAT_600a0410 & 0xffbf00ff;
  (**(code **)(_g_phyFuns + 0x98))(0,0x80,0x78,0,0,0,*(code **)(_g_phyFuns + 0x98));
  (**(code **)(_g_phyFuns + 0x58))(0x6b,1,4,uVar4,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x6b,1,3,uVar5,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x6b,1,7,uVar6,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x6b,1,7,uVar7,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x6b,1,3,uVar8,*(code **)(_g_phyFuns + 0x58));
  (**(code **)(_g_phyFuns + 0x58))(0x6b,1,6,uVar9,*(code **)(_g_phyFuns + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x58))(0x69,0,4,uVar10);
  return;
}

