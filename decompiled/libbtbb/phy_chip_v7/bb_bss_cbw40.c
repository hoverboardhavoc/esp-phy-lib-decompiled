/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> bb_bss_cbw40
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bb_bss_cbw40(uint param_1)

{
  uint uVar1;
  
  mac_tx_chan_offset(param_1 & 0xff);
  if (param_1 == 0) {
    chip7_sleep_params[0x52] = 0;
    bb_bss_cbw40_dig(0);
    bb_bss_cbw40_ana(0);
    return;
  }
  chip7_sleep_params[0x52] = 1;
  bb_bss_cbw40_dig(1);
  if (param_1 == 1) {
    cbw2040_cfg_part_5();
    bb_bss_cbw40_ana(0);
  }
  else {
    cbw2040_cfg(0);
    bb_bss_cbw40_ana(1);
    if (param_1 == 3) {
      uVar1 = fpga_mem_rd(0x6001cc0c);
      uVar1 = uVar1 | 1;
      goto _L458;
    }
  }
  uVar1 = fpga_mem_rd(0x6001cc0c);
  uVar1 = uVar1 & 0xfffffffe;
_L458:
  fpga_mem_wr(0x6001cc0c,uVar1);
  return;
}

