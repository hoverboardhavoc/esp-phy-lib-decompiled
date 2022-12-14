/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_tx_gain.o -> set_tx_gain_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_tx_gain_mem(int param_1,int param_2,int param_3,ushort *param_4,int param_5,int param_6,
                    ushort *param_7)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort local_48 [10];
  
  uVar6 = _DAT_600a0410 >> 0x18;
  for (iVar8 = 0; param_2 != iVar8; iVar8 = iVar8 + 1) {
    if (param_1 == 0) {
      uVar2 = (uint)param_4[iVar8];
      uVar3 = txbbgain_to_index(uVar2);
      uVar3 = uVar3 & 0xffff;
    }
    else {
      uVar2 = (uint)*param_4;
      uVar3 = bt_bb_to_index(uVar2);
    }
    iVar7 = 0;
    do {
      puVar4 = (undefined2 *)((int)local_48 + iVar7);
      iVar5 = uVar3 * 8 + iVar7;
      iVar7 = iVar7 + 2;
      *puVar4 = *(undefined2 *)(iVar5 + param_6);
    } while (iVar7 != 8);
    uVar1 = *(ushort *)(iVar8 * 2 + param_3);
    uVar3 = uVar1 & 7;
    write_gain_mem_new(*param_7 & 0x1fff |
                       (uint)local_48[2] << 0x16 | (uint)local_48[1] << 0x1f |
                       (uint)local_48[3] << 0xd,
                       (uint)local_48[0] << 8 | (uint)(local_48[1] >> 1) | uVar3 << 0x1f |
                       (uVar2 & 0x3f) << 0x14 | (uVar2 >> 6 & 0xff) << 0x11,
                       uVar3 >> 1 | uVar1 >> 1 & 0x1c | (int)*(char *)(param_5 + iVar8) << 7 | 0x40,
                       ((uint)(param_1 != 0) * 0x20 + uVar6 & 0xff) + iVar8 & 0xff);
  }
  return;
}

