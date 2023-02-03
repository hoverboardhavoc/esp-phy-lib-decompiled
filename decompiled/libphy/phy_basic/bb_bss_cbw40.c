/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_basic.o -> bb_bss_cbw40
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint bb_bss_cbw40(uint param_1)

{
  byte bVar1;
  uint uVar2;
  
  mac_tx_chan_offset(param_1 & 0xff);
  if (param_1 == 0) {
    bb_bss_cbw40_dig(0);
    uVar2 = bb_bss_cbw40_ana(0);
    return uVar2;
  }
  bb_bss_cbw40_dig(1);
  if (param_1 == 1) {
    cbw2040_cfg(1);
    bb_bss_cbw40_ana(0);
  }
  else {
    cbw2040_cfg(0);
    bb_bss_cbw40_ana(1);
    if (param_1 == 3) {
      bVar1 = DAT_60012351;
      DAT_60012351 = DAT_60012351 | 1;
      goto _L21;
    }
  }
  uVar2 = CONCAT13(DAT_60012354,CONCAT12(DAT_60012353,CONCAT11(DAT_60012352,DAT_60012351))) &
          0xfffffffe;
  DAT_60012352 = (undefined1)(uVar2 >> 8);
  DAT_60012353 = (undefined1)(uVar2 >> 0x10);
  DAT_60012354 = (undefined1)(uVar2 >> 0x18);
  bVar1 = DAT_60012351;
  DAT_60012351 = DAT_60012351 & 0xfe;
_L21:
  return (uint)bVar1;
}

