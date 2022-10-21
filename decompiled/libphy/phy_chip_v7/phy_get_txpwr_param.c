/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> phy_get_txpwr_param
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void phy_get_txpwr_param(S8 *txpwr_backoff,S8 *txpwr_diff_flash,U16 *txpwr_ana_gain,
                        sint8 *txpwr_dig_atten,S8 *txpwr_correct_pwr,S16 *txpwr_meas_error)

{
  undefined4 unaff_s0;
  undefined4 *in_a0;
  int in_a5;
  undefined8 in_ft0;
  int in_stack_0000004c;
  
  do {
    *in_a0 = unaff_s0;
  } while (in_a5 != 0);
  *(undefined8 *)(in_stack_0000004c + 0x40) = in_ft0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

