/*
 * Last changed at upstream commit c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * https://github.com/espressif/esp-phy-lib/commit/c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * Upstream date: 2024-04-03 16:53:14 +0800
 * Upstream subject: fix coex test wifi affect ble s8 tx problm, and c3 s3 light sleep current opt, and c3 s3 ble rx problem
 * Source: librftest -> phy_test.o -> wifi_rx_opt
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wifi_rx_opt(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = chan_to_freq(_phy_param);
  iVar2 = abs_temp(uVar1 - 0x988);
  if (iVar2 < 10) {
    uVar1 = 0x988;
  }
  else {
    iVar2 = abs_temp(uVar1 - 0x9b0);
    if (iVar2 < 10) {
      uVar1 = 0x9b0;
    }
  }
  if ((wifi_rx_opt_en != '\0') && ((uVar1 == 0x988 || (uVar1 == 0x9b0)))) {
    phy_rx_opt_cfg(param_1,uVar1 & 0xffff);
    return;
  }
  return;
}

