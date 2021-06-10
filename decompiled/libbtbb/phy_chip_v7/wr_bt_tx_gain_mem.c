/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> wr_bt_tx_gain_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void wr_bt_tx_gain_mem(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ushort local_28 [6];
  
  uVar5 = fpga_mem_rd(0x60006000);
  uVar5 = uVar5 >> 0x12 & 0xff;
  uVar6 = (uint)(ushort)chip7_sleep_params._144_2_;
  puVar9 = chip7_sleep_params;
  uVar2 = (ushort)chip7_sleep_params._144_2_ >> 6;
  iVar7 = bt_bb_to_index();
  uVar1 = *(ushort *)(chip7_sleep_params + (iVar7 + 0x48) * 2 + 2);
  puVar8 = chip7_sleep_params + iVar7 * 8;
  iVar7 = 0;
  do {
    *(undefined2 *)((int)local_28 + iVar7) = *(undefined2 *)(puVar8 + 0x98);
    iVar7 = iVar7 + 2;
    puVar8 = puVar8 + 2;
  } while (iVar7 != 8);
  uVar3 = uVar5 + 8 & 0xff;
  do {
    uVar4 = uVar3 + 1 & 0xff;
    write_gain_mem((uint)local_28[0] << 0xc | (uint)local_28[1] << 3 | (uint)(local_28[2] >> 6) |
                   (uint)uVar1 << 0x15,
                   (uint)(byte)puVar9[0x78] << 10 |
                   (uint)local_28[3] << 0x11 | (uint)local_28[2] << 0x1a | uVar2 & 0xff |
                   (uVar6 & 0x3f) << 3,uVar3);
    puVar9 = puVar9 + 1;
    uVar3 = uVar4;
  } while (uVar4 != (uVar5 + 0x10 & 0xff));
  return;
}

