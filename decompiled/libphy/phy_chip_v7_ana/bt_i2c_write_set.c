/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_ana.o -> bt_i2c_write_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void bt_i2c_write_set(U8 *i2c_mst,U8 *i2c_block,U8 *i2c_addr,U8 *i2c_addr_tx,U8 *i2c_data_tx,
                     U8 *i2c_addr_rx,U8 *i2c_data_rx,U8 i2c_num,U8 *i2c_rd_en)

{
  int *unaff_s0;
  int unaff_s1;
  undefined8 *in_a0;
  undefined8 *extraout_a0;
  int extraout_a1;
  int iVar1;
  int in_a5;
  undefined8 uVar2;
  undefined8 unaff_fs1;
  undefined8 uVar3;
  undefined8 extraout_fa1;
  undefined8 uVar4;
  undefined8 in_fa4;
  undefined8 in_fa5;
  
  while( true ) {
    uVar2 = in_a0[6];
    uVar3 = FUN_00011de8();
    uVar4 = *(undefined8 *)(extraout_a1 + 100);
    *(undefined8 *)(in_a5 + 0x3c) = extraout_fa1;
    if (unaff_s0 == (int *)0x0) break;
    *extraout_a0 = extraout_fa1;
    *extraout_a0 = uVar4;
    extraout_a0[8] = uVar3;
    extraout_a0[8] = extraout_fa1;
    *(undefined8 *)(unaff_s1 + 4) = uVar4;
    *extraout_a0 = in_fa5;
    *(undefined8 *)(unaff_s1 + 4) = *(undefined8 *)(in_a5 + 0x103);
    extraout_a0[8] = uVar2;
    extraout_a0[8] = unaff_fs1;
    *(undefined8 *)(unaff_s1 + 4) = uVar3;
    *(undefined8 *)(unaff_s1 + 4) = extraout_fa1;
    *extraout_a0 = *(undefined8 *)(in_a5 + 0x103);
    *extraout_a0 = in_fa4;
    *(undefined8 *)((int)extraout_a0 + 0x44) = unaff_fs1;
    unaff_s1 = *unaff_s0;
    in_a0 = extraout_a0;
    in_a5 = in_a5 + 0xb;
  }
  FUN_0001186c();
  iVar1 = FUN_00011c02();
  i2c_addr = (U8 *)0x8000;
  do {
  } while (iVar1 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

