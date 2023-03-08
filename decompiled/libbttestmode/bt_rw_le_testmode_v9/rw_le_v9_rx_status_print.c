/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_le_v9_rx_status_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_le_v9_rx_status_print(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_20 [4];
  char local_1c [4];
  undefined1 auStack_18 [4];
  char acStack_14 [8];
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  if (((int)(*param_1 << 0x10) < 0) && (-1 < (int)(uVar2 << 0xf))) {
    rw_le_v9_rx_phyinfo(auStack_20,local_1c,auStack_18,acStack_14);
    phy_printf("%3x %d %d %d\n",uVar2 >> 0x10 & 0x3ff,(int)(char)(uVar1 >> 0x10),(int)local_1c[0],
               (int)acStack_14[0]);
  }
  return;
}

