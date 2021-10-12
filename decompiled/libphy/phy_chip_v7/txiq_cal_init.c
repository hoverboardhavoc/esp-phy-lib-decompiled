/*
 * Last changed at upstream commit b7095b90157d98f116ba43c35b12d51192dc91c8
 * https://github.com/espressif/esp-phy-lib/commit/b7095b90157d98f116ba43c35b12d51192dc91c8
 * Upstream date: 2021-10-12 21:50:40 +0800
 * Upstream subject: Update libphy and libbb
 * Source: libphy -> phy_chip_v7.o -> txiq_cal_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txiq_cal_init(void)

{
  if (-1 < (int)(DAT_00012f54 << 0x11)) {
    txcal_debuge_mode();
    _DAT_6000607c = _DAT_6000607c & 0xffffefff | 0x800;
    start_tx_tone_step(1,0xe0,0xc,0,0,0);
    DAT_00012f7e = rfcal_txiq(0);
    pbus_force_test(1,1,0x46);
    ets_delay_us(10);
    start_tx_tone_step(1,0xe0,0,0,0,0);
    DAT_00012f6e = rfcal_txiq(1);
    start_tx_tone_step(0,0xe0,0,0,0,0);
    _DAT_6000607c = _DAT_6000607c | 0x1000;
    txcal_work_mode();
    DAT_00012f54 = DAT_00012f54 | 0x4000;
  }
  return;
}

