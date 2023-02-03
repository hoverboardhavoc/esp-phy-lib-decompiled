/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_rx_cal.o -> set_lb_txiq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_lb_txiq(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)(char)(param_1 >> 6);
  uVar1 = uVar2 & 0x1f;
  if ((uVar2 & 0x10) != 0) {
    uVar1 = uVar1 - 0x20;
  }
  uVar2 = (int)(char)param_1 & 0x3f;
  if (((int)(char)param_1 & 0x20U) != 0) {
    uVar2 = uVar2 - 0x40;
  }
  txiq_set_reg(uVar1,1);
  txiq_set_reg(uVar2,0);
  return;
}

