/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> FillTxPacket
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void FillTxPacket(uint param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0 || param_3 != 0) {
    iVar1 = (param_1 & 0xffff) - ((param_2 & 0xffff) + (param_2 >> 0x10) + (param_3 & 0xffff));
  }
  fill_tx_frame(param_1 >> 0x10,param_4,param_1 & 0xffff,param_3 & 0xffff,iVar1,param_5);
  return;
}

