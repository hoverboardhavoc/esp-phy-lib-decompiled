/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_tx_cal.o -> rfcal_txiq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint rfcal_txiq(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  byte bStack_14;
  byte bStack_13;
  
  uVar1 = _DAT_600a0420;
  cVar2 = phy_param + '\x06';
  start_tx_tone_step(1,0x80,cVar2,0,0,0);
  txiq_cover(cVar2,0x80,&bStack_14);
  bVar3 = 0xf;
  if (('\x0f' < (char)bStack_14) || (bVar3 = 0xf1, (char)bStack_14 < -0xf)) {
    bStack_14 = bVar3;
  }
  bVar3 = 0x1f;
  if (('\x1f' < (char)bStack_13) || (bVar3 = 0xe1, (char)bStack_13 < -0x1f)) {
    bStack_13 = bVar3;
  }
  if (param_1 == 0) {
    _DAT_600a0420 = uVar1;
  }
  return (bStack_14 & 0x1f) << 6 | bStack_13 & 0x3f;
}

