/*
 * Last changed at upstream commit 603b69583635ffcedf2a5e1d0f70da77edf82d10
 * https://github.com/espressif/esp-phy-lib/commit/603b69583635ffcedf2a5e1d0f70da77edf82d10
 * Upstream date: 2024-03-04 14:31:40 +0800
 * Upstream subject: feat: add esp32c5 beta3 support wifi
 * Source: librftest -> rf_test.o -> filter_dcap_tia_wf
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 filter_dcap_tia_wf(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = get_data_sat((param_1 * 6) / 5 & 0xff,0x32,10);
  return uVar1;
}

