/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_rx_cal.o -> set_lb_txiq_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_lb_txiq_new(undefined4 param_1)

{
  char cStack_14;
  byte bStack_13;
  
  get_iq_value(&cStack_14,param_1);
  txiq_set_reg((int)cStack_14,1);
  txiq_set_reg((int)((bStack_13 - 4) * 0x1000000) >> 0x18,0);
  return;
}

