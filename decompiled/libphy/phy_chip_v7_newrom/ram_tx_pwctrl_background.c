/*
 * Last changed at upstream commit dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * https://github.com/espressif/esp-phy-lib/commit/dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * Upstream date: 2022-04-07 23:37:47 -0400
 * Upstream subject: C3/S3 fix "i2c critical" and iram functions
 * Source: libphy -> phy_chip_v7_newrom.o -> ram_tx_pwctrl_background
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_tx_pwctrl_background(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(_g_phyFuns + 0x184))(*(code **)(_g_phyFuns + 0x184));
  rom_tsens_temp_read();
  rom_wifi_track_tx_power(param_1,param_2);
  if (DAT_000120a0 != '\0') {
    rfpll_cap_track(DAT_0001209f);
  }
                    /* WARNING: Could not recover jumptable at 0x000117da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x188))(uVar1);
  return;
}

