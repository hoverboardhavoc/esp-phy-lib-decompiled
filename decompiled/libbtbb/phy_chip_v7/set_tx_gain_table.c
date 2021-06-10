/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> set_tx_gain_table
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_tx_gain_table(int param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  char cVar5;
  char cVar6;
  ushort local_28 [10];
  
  uVar2 = fpga_mem_rd(0x60006000);
  fpga_mem_wr(0x60006000,uVar2 & 0xfc03ffff | 0x1b80000);
  uVar2 = txbbgain_to_index(param_2);
  puVar4 = chip7_sleep_params + uVar2 * 8;
  iVar3 = 0;
  do {
    *(undefined2 *)((int)local_28 + iVar3) = *(undefined2 *)(puVar4 + 0xc);
    iVar3 = iVar3 + 2;
    puVar4 = puVar4 + 2;
  } while (iVar3 != 8);
  uVar1 = *(ushort *)(chip7_sleep_params + ((uVar2 < 4 ^ 1) + 0x18) * 2 + 4);
  cVar5 = 'n';
  do {
    cVar6 = cVar5 + '\x01';
    write_gain_mem((uint)local_28[0] << 0xc | (uint)local_28[1] << 3 | (uint)(local_28[2] >> 6) |
                   (uint)uVar1 << 0x15,
                   (uint)local_28[3] << 0x11 | (uint)local_28[2] << 0x1a | param_1 << 10 |
                   param_2 >> 6 & 0xff | (param_2 & 0x3f) << 3,cVar5);
    cVar5 = cVar6;
  } while (cVar6 != 'v');
  return;
}

