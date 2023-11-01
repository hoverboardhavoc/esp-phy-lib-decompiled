/*
 * Last changed at upstream commit a8e8b9532e2874ac167d4ade7808fda70fe05820
 * https://github.com/espressif/esp-phy-lib/commit/a8e8b9532e2874ac167d4ade7808fda70fe05820
 * Upstream date: 2023-11-01 14:13:34 +0800
 * Upstream subject: h2 libphy fix ble track
 * Source: librfate -> ate_test.o -> ate_rxiq_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ate_rxiq_cal(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_24 [4];
  undefined1 uStack_20;
  char cStack_1f;
  char cStack_1e;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined2 uStack_18;
  char cStack_16;
  
  uStack_20 = 1;
  esp_phy_rxiq_cal(auStack_24,param_1,param_2);
  phy_version_print();
  phy_printf("version=%d,rxiq:%d,%d,vga=%d,sig=%d,iqpwr=%d,dc=%d,%d,rxiq_remain=%d,offset=%d\n",
             uStack_20,(int)cStack_1f,(int)cStack_1e,uStack_1b,uStack_1a,uStack_18,(int)cStack_16);
  phy_printf("start_addr=0x%x,len_byte=%d\n",auStack_24,0x14);
  spi_dma_cfg(auStack_24,0x14);
  return;
}

