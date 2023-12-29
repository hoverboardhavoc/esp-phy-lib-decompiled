/*
 * Last changed at upstream commit 98617ae683c7456706c7de6e27b7f0355c77dc9b
 * https://github.com/espressif/esp-phy-lib/commit/98617ae683c7456706c7de6e27b7f0355c77dc9b
 * Upstream date: 2023-12-29 17:32:23 +0800
 * Upstream subject: fix h2 crash at pos rssi bug
 * Source: librfate -> ate_test.o -> ate_rxiq_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ate_rxiq_cal(undefined4 param_1,undefined4 param_2)

{
  ate_rxiq_data[4] = 1;
  esp_phy_rxiq_cal(ate_rxiq_data,param_1,param_2);
  phy_version_print();
  phy_printf("version=%d,rxiq:%d,%d,vga=%d,sig=%d,iqpwr=%d,dc=%d,%d,rxiq_remain=%d,offset=%d\n",
             ate_rxiq_data[4],(int)ate_rxiq_data[5],(int)ate_rxiq_data[6],ate_rxiq_data[9],
             ate_rxiq_data[10],(ate_rxiq_data._12_4_ & 0xff) << 8 | (uint)ate_rxiq_data[0xb],
             (int)ate_rxiq_data[0xd]);
  phy_printf("start_addr=0x%x,len_byte=%d\n",ate_rxiq_data,0x13);
  spi_dma_cfg(ate_rxiq_data,0x13);
  return;
}

