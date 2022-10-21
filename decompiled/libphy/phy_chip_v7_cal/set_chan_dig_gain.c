/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_cal.o -> set_chan_dig_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

uint8 set_chan_dig_gain(uint8 chan)

{
  undefined3 unaff_00002009;
  undefined8 *puVar1;
  int unaff_s0;
  int in_a2;
  int in_a5;
  undefined8 uVar2;
  undefined8 in_fa3;
  undefined8 in_fa5;
  undefined8 unaff_fs4;
  sint8 org_gain_table [6];
  U8 target_power [6];
  sint8 chan_data [4];
  uint8 fcc_index_all_20m [3];
  uint8 fcc_index_all [3];
  
  puVar1 = (undefined8 *)CONCAT31(unaff_00002009,chan);
  while( true ) {
    puVar1[0x10] = in_fa3;
    *(undefined8 *)(in_a5 + 0x7c) = in_fa5;
    *(int *)(puVar1 + 0x18) = unaff_s0;
    uVar2 = *(undefined8 *)(unaff_s0 + 0x68);
    *puVar1 = unaff_fs4;
    *(undefined8 *)(in_a2 + 0x20) = uVar2;
    _DAT_0000000a = 0;
    if (unaff_s0 == 0) break;
    in_a2 = *(int *)(unaff_s0 + 0x40);
    in_fa5 = puVar1[0x1d];
    unaff_s0 = **(int **)(unaff_s0 + 0x40);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

