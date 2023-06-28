/*
 * Last changed at upstream commit 97a141a563a4b752f5943d0049aa691038d08613
 * https://github.com/espressif/esp-phy-lib/commit/97a141a563a4b752f5943d0049aa691038d08613
 * Upstream date: 2023-06-28 11:18:04 +0800
 * Upstream subject: h2: optimize track pll when temperature changes. fix ramp up and ramp down timing.
 * Source: libphy -> phy_hw_freq.o -> phy_get_rf_freq_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_get_rf_freq_init(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uStack_3c;
  uint uStack_38;
  
  uVar2 = (uint)_DAT_0001107c;
  uVar7 = (uint)_DAT_0001107a;
  uVar1 = _DAT_0001107c >> 8;
  uVar8 = _DAT_0001107a >> 8 & 0xf;
  uVar10 = 0;
  uVar9 = 0;
  for (uVar3 = 0; uVar3 < param_1; uVar3 = uVar3 + 1) {
    uVar6 = uVar3 * 0x800 + 0x2b0000;
    iVar4 = 0x20;
    if ((0x1d < uVar3) && (iVar4 = 0x1e, uVar3 < 0x33)) {
      iVar4 = 0x1f;
    }
    uVar5 = (uVar9 >> 6) + (uVar7 & 0xff);
    uStack_3c = (((uVar10 >> 6) + uVar8 | ((uVar5 & 0xffff) >> 8) << 4 | 0xffffff80) & 0xff) << 8 |
                uVar5 & 0xff;
    uStack_38 = (uVar6 >> 0x10) << 8 | uVar6 >> 8 & 0xff | iVar4 << 0x10;
    wr_rf_freq_mem_new(uVar3 & 0xff,&uStack_3c);
    uVar9 = uVar9 + ((uVar2 & 0xff) - (uVar7 & 0xff));
    uVar10 = uVar10 + ((uVar1 & 0xf) - uVar8);
  }
  return;
}

