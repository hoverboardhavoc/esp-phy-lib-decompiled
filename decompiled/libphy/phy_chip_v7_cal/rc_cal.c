/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> rc_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rc_cal(void)

{
  short sVar1;
  undefined2 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_a1;
  uint uVar6;
  short *psVar7;
  short local_28 [4];
  short asStack_20 [2];
  
  if (-1 < (int)(_DAT_00013128 << 8)) {
    iVar4 = get_rc_dout(DAT_000130fb);
    DAT_0001316e = (undefined1)iVar4;
    iVar4 = (iVar4 + 0x38) * 0x52;
    uVar6 = iVar4 / 0xbe - 8;
    if (0x3f < (uVar6 & 0xffff)) {
      uVar6 = 0x3f;
    }
    DAT_0001316f = (undefined1)uVar6;
    DAT_00013170 = (char)(iVar4 / 0x19a) + -8;
    uVar5 = __floatsidf(iVar4);
    __divdf3(0,0);
    __subdf3(0,0);
    local_28[0] = __fixdfsi();
    uVar2 = (undefined2)((uint)((iVar4 / 0x138 + -8) * 0x10000) >> 0x10);
    local_28[1] = uVar2;
    __divdf3(uVar5,extraout_a1,0x33333333,0x33333333);
    __subdf3(0,0);
    local_28[2] = __fixdfsi();
    local_28[3] = uVar2;
    psVar7 = local_28;
    puVar3 = &phy_param;
    do {
      if (*psVar7 < 0x40) {
        if (*psVar7 < 2) {
          *psVar7 = 2;
        }
      }
      else {
        *psVar7 = 0x3f;
      }
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
      puVar3[0x16b] = (char)sVar1;
      puVar3 = puVar3 + 1;
    } while (psVar7 != asStack_20);
    _DAT_00013128 = _DAT_00013128 | 0x800000;
  }
  return;
}

