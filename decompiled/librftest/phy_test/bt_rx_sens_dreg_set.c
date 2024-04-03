/*
 * Last changed at upstream commit c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * https://github.com/espressif/esp-phy-lib/commit/c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * Upstream date: 2024-04-03 16:53:14 +0800
 * Upstream subject: fix coex test wifi affect ble s8 tx problm, and c3 s3 light sleep current opt, and c3 s3 ble rx problem
 * Source: librftest -> phy_test.o -> bt_rx_sens_dreg_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_rx_sens_dreg_set(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0xf;
  if (param_1 == 0) {
    uVar1 = dreg_1p6_org;
  }
                    /* WARNING: Could not recover jumptable at 0x000116b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x58))(0x6a,0,0,3,0,uVar1);
  return;
}

