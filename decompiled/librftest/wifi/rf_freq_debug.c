/*
 * Last changed at upstream commit 792ba5917ee8191e7264143e69f9e6f8c1c0eacc
 * https://github.com/espressif/esp-phy-lib/commit/792ba5917ee8191e7264143e69f9e6f8c1c0eacc
 * Upstream date: 2024-05-08 10:58:27 +0800
 * Upstream subject: update c3 s3 c6 libphy fix coex reset and bug
 * Source: librftest -> wifi.o -> rf_freq_debug
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x00011f5c) */
/* WARNING: Removing unreachable block (ram,0x00010000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rf_freq_debug(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                  uint param_5,uint param_6,int param_7)

{
  uint uVar1;
  
  _DAT_600a0410 = (param_7 + 0x20) * 0x10000 & 0x3f0000U | _DAT_600a0410 & 0xffc0ffff | 0x800000;
  phy_printf("freq1=%d,freq2=%d,delay=%d,num=%d,freq_en=%x,tx_en=%x,pwr_index=%d\n",param_1,param_2,
             param_3,param_4,param_5,param_6,param_7);
  (**(code **)(_g_phyFuns + 0x98))(1,0x20,0x3c,0,0,0,*(code **)(_g_phyFuns + 0x98));
  if ((param_6 & 1) != 0) {
    txon_set_part_4();
  }
  for (uVar1 = 0; uVar1 != param_4; uVar1 = uVar1 + 1 & 0xffff) {
    if ((param_6 & 2) != 0) {
      txon_set_part_4();
    }
    if ((param_5 & 1) != 0) {
      set_chan_freq_sub(param_1);
      if ((param_6 & 4) != 0) {
        txon_set_part_4();
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
    _DAT_600a0910 = _DAT_600a0910 & 0xffffc0ff;
    return;
  }
  return;
}

