/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_le_v9_rx_phyinfo
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_le_v9_rx_phyinfo(int param_1,int param_2,uint *param_3,uint *param_4,uint *param_5,
                        uint *param_6)

{
  uint uStack_18;
  uint local_14 [2];
  
  uStack_18 = *(uint *)(param_1 + 4) >> 10 & 0x3f;
  local_14[0] = *(uint *)(param_1 + 4) >> 8 & 3;
  *param_3 = (0xff << (local_14[0] << 3) & *(uint *)(uStack_18 * 4 + param_2)) >> (local_14[0] << 3)
  ;
  rw_byte_addr_inc(&uStack_18,local_14);
  *param_4 = (0xff << (local_14[0] << 3 & 0x1f) & *(uint *)(uStack_18 * 4 + param_2)) >>
             (local_14[0] << 3 & 0x1f);
  rw_byte_addr_inc(&uStack_18,local_14);
  *param_5 = (0xff << (local_14[0] << 3 & 0x1f) & *(uint *)(uStack_18 * 4 + param_2)) >>
             (local_14[0] << 3 & 0x1f);
  rw_byte_addr_inc(&uStack_18,local_14);
  *param_6 = (0xff << (local_14[0] << 3 & 0x1f) & *(uint *)(uStack_18 * 4 + param_2)) >>
             (local_14[0] << 3 & 0x1f);
  return;
}

