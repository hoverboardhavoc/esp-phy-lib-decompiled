/*
 * Last changed at upstream commit 7bdaf7da843d762451b59947318cd2c6cf733855
 * https://github.com/espressif/esp-phy-lib/commit/7bdaf7da843d762451b59947318cd2c6cf733855
 * Upstream date: 2023-07-27 11:33:55 +0800
 * Upstream subject: fix c3 ble tx bug
 * Source: librftest -> wifi.o -> rf_freq_debug
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x0001338c) */
/* WARNING: Removing unreachable block (ram,0x00010000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rf_freq_debug(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                  uint param_5,uint param_6,int param_7)

{
  uint uVar1;
  
  _DAT_60006000 =
       ((_DAT_60006000 >> 0x12 & 0xff) + 0x10 + param_7) * 0x400 & 0x3fc00 |
       _DAT_60006000 & 0xfffc03ff | 2;
  phy_printf("freq1=%d,freq2=%d,delay=%d,num=%d,freq_en=%x,tx_en=%x,pwr_index=%d\n",param_1,param_2,
             param_3,param_4,param_5,param_6,param_7);
  start_tx_tone_step(1,0x20,0x3c,0,0,0);
  if ((param_6 & 1) != 0) {
    txon_set_part_9();
  }
  for (uVar1 = 0; uVar1 != param_4; uVar1 = uVar1 + 1 & 0xffff) {
    if ((param_6 & 2) != 0) {
      txon_set_part_9();
    }
    if ((param_5 & 1) != 0) {
      set_chan_freq_sub(param_1);
      if ((param_6 & 4) != 0) {
        txon_set_part_9();
      }
      ets_delay_us(param_3);
    }
    if ((param_5 & 2) != 0) {
      set_chan_freq_sub(param_2);
      ets_delay_us(param_3);
    }
    if ((param_6 & 8) != 0) {
      txon_set(0);
    }
    ets_delay_us(1000);
  }
  if ((param_6 & 0x10) != 0) {
    _DAT_60006110 = _DAT_60006110 & 0xffffc0ff;
    return;
  }
  return;
}

