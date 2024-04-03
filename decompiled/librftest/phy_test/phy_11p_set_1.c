/*
 * Last changed at upstream commit c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * https://github.com/espressif/esp-phy-lib/commit/c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * Upstream date: 2024-04-03 16:53:14 +0800
 * Upstream subject: fix coex test wifi affect ble s8 tx problm, and c3 s3 light sleep current opt, and c3 s3 ble rx problem
 * Source: librftest -> phy_test.o -> phy_11p_set_1
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_11p_set_1(int param_1,int param_2)

{
  DAT_0001202a = (char)param_1;
  DAT_0001202b = (char)param_2;
  if (param_1 == 0) {
    _DAT_600a9818 = _DAT_600a9818 & 0xffffffe3;
    _DAT_600a7030 = _DAT_600a7030 | 0x20;
  }
  else {
    _DAT_600a9818 = ((param_2 != 0) + 4) * 4 | _DAT_600a9818 & 0xffffffe3;
    _DAT_600a7030 = _DAT_600a7030 & 0xffffffdf;
  }
  return;
}

