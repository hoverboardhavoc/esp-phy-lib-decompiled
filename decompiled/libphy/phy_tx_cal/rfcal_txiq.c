/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_tx_cal.o -> rfcal_txiq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint rfcal_txiq(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bStack_14;
  byte bStack_13;
  
  uVar2 = _DAT_600a0420;
  uVar1 = phy_param;
  start_tx_tone_step(1,0x80,phy_param,0,0,0);
  txiq_cover(uVar1,0x80,&bStack_14);
  bVar3 = 0xf;
  if (('\x0f' < (char)bStack_14) || (bVar3 = 0xf1, (char)bStack_14 < -0xf)) {
    bStack_14 = bVar3;
  }
  bVar3 = 0x1f;
  if (('\x1f' < (char)bStack_13) || (bVar3 = 0xe1, (char)bStack_13 < -0x1f)) {
    bStack_13 = bVar3;
  }
  if (param_1 == 0) {
    _DAT_600a0420 = uVar2;
  }
  return (bStack_14 & 0x1f) << 6 | bStack_13 & 0x3f;
}

