/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_init_cmplx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_v2_init_cmplx(int param_1)

{
  _DAT_6000e0c4 = _DAT_6000e0c4 | 0x2000000;
  bt_bb_v2_tx_set(0);
  bt_bb_v2_rx_set(4);
  _DAT_600060fc = _DAT_600060fc & 0xffff00ff | 0xc800;
  _DAT_6000e0c4 = _DAT_6000e0c4 & 0xfdffffff;
  if (param_1 == 0) {
    return;
  }
  rtc_printf("libbtbb version: %s, %s, %s\n","18c8721","Oct 21 2022","08:56:27");
  return;
}

