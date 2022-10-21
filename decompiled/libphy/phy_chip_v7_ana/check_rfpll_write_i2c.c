/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_ana.o -> check_rfpll_write_i2c
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void check_rfpll_write_i2c(void)

{
  int iVar1;
  int iVar2;
  int in_a2;
  undefined4 in_a6;
  undefined4 unaff_s4;
  undefined4 unaff_s8;
  undefined8 uVar3;
  undefined8 in_fa5;
  undefined4 unaff_fs4;
  U8 i2c_rd_en [11];
  U8 i2c_data_rx [11];
  U8 i2c_data_tx [11];
  U8 i2c_addr_rx [11];
  U8 i2c_addr [11];
  U8 i2c_block [11];
  U8 i2c_mst [11];
  
  iVar1 = (int)&stack0x00000000 * 0x2000;
  thunk_FUN_00013316();
  uVar3 = FUN_000131e8();
  *(undefined8 *)(in_a2 + 0x20) = uVar3;
  *(undefined4 *)(iVar1 + 0x80) = unaff_s4;
  *(undefined4 *)(iVar1 + 0x24) = unaff_fs4;
  FUN_00012aa6();
  *(undefined4 *)(iVar1 + 0xc0) = unaff_s8;
  iVar2 = FUN_00012ef0();
  *(undefined4 *)(iVar1 + 0xc0) = in_a6;
  *(undefined8 *)(in_a2 + 0x60) = in_fa5;
  if (iVar2 == -0xb) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_0001267c(0x10);
  return;
}

