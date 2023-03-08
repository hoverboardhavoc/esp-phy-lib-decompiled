/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> bb_common.o -> get_rx_freq_local
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_rx_freq_local(void)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)get_rxctrl_addr();
  uVar2 = *puVar1;
  if ((uVar2 & 0xc000) == 0) {
    uVar2 = uVar2 >> 8 & 0x1f;
  }
  else {
    uVar2 = (uVar2 >> 10 & 0x30) + (puVar1[1] & 0x7f);
  }
                    /* WARNING: Could not recover jumptable at 0x000104ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0xdc))(uVar2,puVar1[4]);
  return;
}

