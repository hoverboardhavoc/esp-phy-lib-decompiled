/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_fpga_v7_cal.o -> host_rxtxg_cnt_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x000100f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void host_rxtxg_cnt_cfg(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar4 = 0;
  if (param_1 == 1) {
    uVar4 = _DAT_6000d01c >> 0x14 & 0x3ff;
  }
  uVar5 = 0x3fffffff;
  puVar3 = (uint *)&DAT_6000d034;
  iVar9 = 0;
  uVar6 = uVar5;
  while( true ) {
    uVar8 = *puVar3 & uVar6;
    uVar6 = ~uVar6;
    if (param_1 == 1) break;
    iVar9 = iVar9 + 1;
    puVar3[-5] = uVar6 & puVar3[-5] | uVar8;
    if (iVar9 == 3) {
      return;
    }
    uVar6 = 0xfffff;
    if (iVar9 != 2) {
      uVar6 = uVar5;
    }
    puVar3 = puVar3 + 1;
  }
  do {
    iVar1 = 0;
    do {
      if ((iVar9 == 2) && (iVar1 == 2)) break;
      uVar2 = iVar1 * 10;
      uVar7 = uVar8 >> (uVar2 & 0x1f) & 0x3ff;
      if (uVar7 <= uVar4) {
        uVar7 = uVar7 + param_2;
        if ((int)uVar4 < (int)uVar7) {
          uVar7 = (uVar7 - uVar4) - 1;
        }
        else if ((int)uVar7 < 0) {
          uVar7 = uVar7 + uVar4 + 1;
        }
      }
      iVar1 = iVar1 + 1;
      uVar8 = (uVar7 & 0x3ff) << (uVar2 & 0x1f) | ~(0x3ff << (uVar2 & 0x1f)) & uVar8;
    } while (iVar1 != 3);
    puVar3[-8] = uVar6 & puVar3[-8] | uVar8;
    iVar9 = iVar9 + 1;
    if (iVar9 == 3) {
      return;
    }
    uVar6 = 0xfffff;
    if (iVar9 != 2) {
      uVar6 = uVar5;
    }
    puVar3 = puVar3 + 1;
    uVar8 = *puVar3 & uVar6;
    uVar6 = ~uVar6;
  } while( true );
}

