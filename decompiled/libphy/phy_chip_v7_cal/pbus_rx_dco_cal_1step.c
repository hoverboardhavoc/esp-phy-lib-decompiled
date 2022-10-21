/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_cal.o -> pbus_rx_dco_cal_1step
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00011ad4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void pbus_rx_dco_cal_1step(bool bt_mode,uint8 mode,uint16 smp_num,sint16 *dc_comp,int32 *dc_est)

{
  undefined3 unaff_00002009;
  int unaff_s0;
  int iVar1;
  int in_a5;
  undefined8 uVar2;
  undefined8 in_fa4;
  undefined8 unaff_fs4;
  int32 dc_est_1 [3];
  int32 dc_est_0 [3];
  uint8 est_num2;
  uint8 est_num1;
  uint8 i_num;
  uint8 stage;
  sint16 dco_i_init;
  
  iVar1 = FUN_00011852();
  uVar2 = *(undefined8 *)(unaff_s0 + 0x44);
  if (unaff_s0 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(CONCAT31(unaff_00002009,bt_mode) + 0xc0) = unaff_fs4;
  if (in_a5 != 0) {
    *(undefined8 *)(in_a5 + 0x7c) = in_fa4;
    *(undefined8 *)(iVar1 + 0xf8) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

