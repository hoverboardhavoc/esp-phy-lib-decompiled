/*
 * Last changed at upstream commit c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * https://github.com/espressif/esp-phy-lib/commit/c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * Upstream date: 2024-04-03 16:53:14 +0800
 * Upstream subject: fix coex test wifi affect ble s8 tx problm, and c3 s3 light sleep current opt, and c3 s3 ble rx problem
 * Source: librftest -> phy_test.o -> rfpll_cal_track_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rfpll_cal_track_set(void)

{
  char cVar1;
  int iVar2;
  
  if (DAT_0001200e == '\0') {
    return;
  }
  cVar1 = '\x14';
  do {
    ets_delay_us(0x28);
    iVar2 = rfpll_cap_correct_new(DAT_0001200d);
    if (iVar2 == 0) {
      return;
    }
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}

