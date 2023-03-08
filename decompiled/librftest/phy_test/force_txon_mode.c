/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> phy_test.o -> force_txon_mode
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void force_txon_mode(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 0x3000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  _DAT_60006110 = _DAT_60006110 & 0xffffcfff | uVar1;
  if (param_2 != 0) {
    param_3 = param_3 + 0x10;
  }
  _DAT_60006000 =
       ((_DAT_60006000 >> 0x12 & 0xff) + param_3) * 0x400 & 0x3fc00 |
       _DAT_60006000 & 0xfffc03fd | (uint)(param_1 != 0) << 1;
                    /* WARNING: Could not recover jumptable at 0x00010458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 200))();
  return;
}

