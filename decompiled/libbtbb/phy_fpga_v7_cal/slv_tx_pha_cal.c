/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_fpga_v7_cal.o -> slv_tx_pha_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slv_tx_pha_cal(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int local_60;
  int aiStack_54 [8];
  
  _DAT_6000d010 = _DAT_6000d010 & 0xf8018ff | 0x30000400;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,10,0xff,0xff);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,1,0xff);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,9,0xff);
  uVar2 = 0;
  iVar1 = 0;
  do {
    if (iVar1 == param_1) {
      slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0,8);
      _DAT_6000d010 = _DAT_6000d010 & 0xfffff8ff;
      slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0,7);
      return;
    }
    uVar9 = 0;
    do {
      if ((iVar1 != 0) && ((uVar2 >> (uVar9 & 0x1f) & 1) == 0)) {
        _DAT_6000d010 = _DAT_6000d010 & 0xffe0efff | uVar9 << 0x10;
        do {
        } while (-1 < (int)((_DAT_6000d010 | 0x1000) << 4));
        aiStack_54[uVar9 + 1] = _DAT_6000d030;
        if (_DAT_6000d030 == 0) {
          uVar2 = uVar2 | 1 << (uVar9 & 0x1f);
        }
      }
      if ((uVar2 >> (uVar9 & 0x1f) & 1) == 0) {
        iVar10 = (uVar9 & 3) << 1;
        iVar5 = (uVar9 >> 2) + 0xb;
        piVar8 = aiStack_54;
        uVar6 = 0;
        local_60 = 0;
        iVar7 = 0;
        do {
          piVar8 = piVar8 + 1;
          if (iVar7 == 4) {
_L43:
            iVar3 = get_num_1(*piVar8);
            iVar4 = get_num_1(piVar8[-1]);
            if (local_60 < iVar3 - iVar4) {
              uVar6 = iVar7 - 2U & 3;
              local_60 = iVar3 - iVar4;
            }
          }
          else {
            slv_i2c_wr(0x6000d000,0x6000d008,0x7d,iVar5,iVar7 << iVar10,3 << iVar10);
            do {
            } while (-1 < (int)((_DAT_6000d010 & 0xffe0efff | uVar9 << 0x10 | 0x1000) << 4));
            _DAT_6000d010 = _DAT_6000d010 & 0xffe0efff | uVar9 << 0x10;
            *piVar8 = _DAT_6000d030;
            if (iVar7 != 0) goto _L43;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 != 5);
        slv_i2c_wr(0x6000d000,0x6000d008,0x7d,iVar5,uVar6 << iVar10,3 << iVar10);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x16);
    iVar1 = iVar1 + 1;
  } while( true );
}

