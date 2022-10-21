/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> set_tx_gain_table
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001025a) */
/* WARNING: Removing unreachable block (ram,0x00010260) */
/* WARNING: Removing unreachable block (ram,0x0001026e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void set_tx_gain_table(U16 pa_gain,U16 bbgain)

{
  undefined2 unaff_0000200a;
  undefined4 *puVar1;
  u32 gain_data_h;
  int in_a1;
  int in_a2;
  int in_a5;
  undefined8 in_fa2;
  undefined8 in_fa3;
  undefined8 in_fa5;
  u16 txdc [4];
  
  puVar1 = (undefined4 *)CONCAT22(unaff_0000200a,pa_gain);
  if (in_a5 != 0) {
    if (puVar1 != (undefined4 *)0xfffffff8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(in_a1 + 0xd8) = in_fa3;
  uRam0000007c = in_fa5;
  *(undefined8 *)(puVar1 + 0x31) = in_fa2;
  if (in_a2 != 0) {
    *puVar1 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

