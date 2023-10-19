/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librfate -> ate_test.o -> ate_rxiq_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ate_rxiq_cal(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [4];
  undefined1 uStack_1c;
  char cStack_1b;
  char cStack_1a;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined2 uStack_14;
  char cStack_12;
  
  uStack_1c = 1;
  esp_phy_rxiq_cal(auStack_20,param_1,param_2);
  phy_printf("%d,rxiq:%d,%d,vga=%d,sig=%d,iqpwr=%d,dc=%d,%d\n",uStack_1c,(int)cStack_1b,
             (int)cStack_1a,uStack_17,uStack_16,uStack_14,(int)cStack_12);
  phy_printf("start_addr=0x%x,len_byte=%d\n",auStack_20,0x10);
  spi_dma_cfg(auStack_20,0x10);
  return;
}

