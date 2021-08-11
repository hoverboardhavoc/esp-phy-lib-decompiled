/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> txiq_cal_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txiq_cal_init(void)

{
  if (-1 < (int)(DAT_00012ea0 << 0x11)) {
    txcal_debuge_mode();
    _DAT_6000607c = _DAT_6000607c & 0xffffefff | 0x800;
    start_tx_tone_step(1,0xe0,0xc,0,0,0);
    DAT_00012eca = rfcal_txiq(0);
    pbus_force_test(1,1,0x46);
    ets_delay_us(10);
    start_tx_tone_step(1,0xe0,0,0,0,0);
    DAT_00012eba = rfcal_txiq(1);
    start_tx_tone_step(0,0xe0,0,0,0,0);
    _DAT_6000607c = _DAT_6000607c | 0x1000;
    txcal_work_mode();
    DAT_00012ea0 = DAT_00012ea0 | 0x4000;
  }
  return;
}

