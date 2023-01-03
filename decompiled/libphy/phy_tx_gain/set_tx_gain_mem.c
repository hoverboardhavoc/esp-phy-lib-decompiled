/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
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
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort local_48 [10];
  
  uVar4 = _DAT_600a0410 >> 0x18;
  for (iVar5 = 0; param_2 != iVar5; iVar5 = iVar5 + 1) {
    if (param_1 == 0) {
      uVar6 = (uint)param_4[iVar5];
      uVar2 = txbbgain_to_index(uVar6);
      uVar2 = uVar2 & 0xffff;
    }
    else {
      uVar6 = (uint)*param_4;
      uVar2 = bt_bb_to_index(uVar6);
    }
    iVar3 = 0;
    do {
      *(undefined2 *)((int)local_48 + iVar3) = *(undefined2 *)(uVar2 * 8 + iVar3 + param_6);
      iVar3 = iVar3 + 2;
    } while (iVar3 != 8);
    uVar1 = *(ushort *)(iVar5 * 2 + param_3);
    uVar2 = uVar1 & 7;
    write_gain_mem_new(*param_7 & 0x1fff |
                       (uint)local_48[2] << 0x16 | (uint)local_48[1] << 0x1f |
                       (uint)local_48[3] << 0xd,
                       (uint)local_48[0] << 8 | (uint)(local_48[1] >> 1) |
                       (uVar6 >> 6 & 0xff) << 0x11 | uVar2 << 0x1f | (uVar6 & 0x3f) << 0x14 |
                       0x48000000,
                       uVar2 >> 1 | uVar1 >> 1 & 0x1c | (int)*(char *)(param_5 + iVar5) << 7 | 0x20,
                       ((uint)(param_1 != 0) * 0x20 + uVar4 & 0xff) + iVar5 & 0xff);
  }
  return;
}

