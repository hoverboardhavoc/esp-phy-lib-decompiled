/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_hw_freq.o -> freq_i2c_write_set_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void freq_i2c_write_set_new(int param_1,int param_2,int param_3,uint *param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  local_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  for (iVar8 = 0; param_5 != iVar8; iVar8 = iVar8 + 1) {
    uVar9 = (uint)CONCAT11(*(undefined1 *)(param_2 + iVar8),*(undefined1 *)(param_1 + iVar8));
    uVar2 = *(byte *)(param_3 + iVar8) & 0xf;
    bVar1 = *(byte *)(param_3 + iVar8) >> 4;
    uVar3 = (*param_4 & 0xff) << 0x10 | uVar9;
    uVar5 = uVar2;
    if ((bVar1 != 0) && (uVar5 = uVar2 + 5, bVar1 == 1)) {
      uVar5 = uVar2 + 2;
    }
    *(char *)((int)&local_54 + iVar8) = (char)uVar5;
    uVar5 = get_freq_mem_param(bVar1);
    uVar6 = uVar5 & 0xff;
    if (bVar1 == 0) {
      uVar5 = uVar5 >> 8 & 0xff;
      iVar7 = uVar2 * 3 + uVar6;
      freq_i2c_mem_write_new(iVar7,uVar3,7);
      freq_i2c_mem_write_new((uVar5 + uVar2) * 3 + uVar6,(*param_4 & 0xff00) << 8 | uVar9,7);
      uVar4 = 7;
      uVar9 = *param_4 & 0xff0000 | uVar9;
      iVar7 = iVar7 + uVar5 * 6;
    }
    else {
      if (bVar1 == 1) {
        iVar7 = uVar2 * 3;
        uVar4 = 7;
        uVar9 = uVar3;
      }
      else {
        iVar7 = uVar2 << 1;
        uVar4 = 3;
      }
      iVar7 = iVar7 + uVar6;
    }
    freq_i2c_mem_write_new(iVar7,uVar9,uVar4);
    param_4 = param_4 + 1;
  }
  freq_i2c_num_addr(&local_54,param_5);
  return;
}

