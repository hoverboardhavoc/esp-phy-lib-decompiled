/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_cal.o -> ram_txdc_cal_v70
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001127a) */
/* WARNING: Removing unreachable block (ram,0x0001127c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void ram_txdc_cal_v70(sint16 *dc_comp)

{
  int in_a0;
  int *in_a2;
  undefined4 *in_a3;
  int in_a5;
  undefined4 in_t5;
  undefined8 in_fa2;
  undefined8 in_fa6;
  
  *(undefined8 *)(in_a5 + 0x7c) = in_fa2;
  *(undefined8 *)(in_a3 + 0x30) = in_fa6;
  _DAT_0000003c = in_t5;
  *in_a2 = (int)(in_a3 + 0x32);
  *in_a3 = (int)*(undefined8 *)(in_a2 + 0xc);
  if (in_a3 + 0x32 != (undefined4 *)0x0) {
    FUN_00010a9e();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_a0 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

