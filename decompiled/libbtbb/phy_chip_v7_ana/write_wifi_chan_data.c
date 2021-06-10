/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_ana.o -> write_wifi_chan_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void write_wifi_chan_data(char param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  uint *puVar5;
  uint local_2c [3];
  
  puVar5 = local_2c;
  cVar1 = '\0';
  do {
    uVar2 = fpga_mem_rd(0x6000e0c4);
    fpga_mem_wr(0x6000e0c4,uVar2 & 0xffffff00 | (uint)(byte)(param_1 * '\x03' + cVar1));
    uVar2 = fpga_mem_rd(0x6000e0c0);
    cVar1 = cVar1 + '\x01';
    *puVar5 = uVar2;
    puVar5 = puVar5 + 1;
  } while (cVar1 != '\x03');
  iVar3 = 0;
  do {
    uVar2 = (uint)(byte)freq_i2c_addr[iVar3];
    if (0xf < uVar2) {
      if (uVar2 < 0x14) {
        uVar4 = (undefined1)(local_2c[0] >> ((uVar2 + 0x10) * 8 & 0x1f));
      }
      else if (uVar2 < 0x18) {
        uVar4 = (undefined1)(local_2c[1] >> ((uVar2 + 0xc) * 8 & 0x1f));
      }
      else {
        uVar4 = (undefined1)(local_2c[2] >> ((uVar2 + 8) * 8 & 0x1f));
      }
      bt_wifi_chan_data[iVar3] = uVar4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 10);
  return;
}

