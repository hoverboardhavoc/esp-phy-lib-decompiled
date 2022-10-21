/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tx_cal.o -> tx_cap_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_cap_init(void)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (DAT_000120aa == '\x10') {
    uVar4 = 0x14;
    uVar3 = 0x78;
  }
  else {
    uVar4 = 0x28;
    uVar3 = 0x50;
  }
  if ((-1 < (int)(_DAT_00012128 << 0xd)) && (DAT_0001220c != '\x01')) {
    txcal_debuge_mode();
    puVar2 = &phy_param;
    iVar1 = 0;
    do {
      set_channel_rfpll_freq((int)(char)(&CSWTCH_168)[iVar1],DAT_000120fb,0);
      (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,1,3,0,10,*(code **)(_g_phyFuns + 0x1bc));
      (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,2,3,0,0xd,*(code **)(_g_phyFuns + 0x1bc));
      (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,2,7,4,4,*(code **)(_g_phyFuns + 0x1bc));
      if (iVar1 == 0) {
        DAT_000120e0 = get_power_atten(0x80,uVar3,uVar4,0xf4,0);
        uVar3 = (uint)DAT_000120e0;
      }
      rfcal_txcap(0x80,uVar3 & 0xff,0,puVar2);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 3;
    } while (iVar1 != 3);
    txcal_work_mode();
    _DAT_00012128 = _DAT_00012128 | 0x40000;
  }
  return;
}

