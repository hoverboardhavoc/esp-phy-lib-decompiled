/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_cal.o -> ram_pbus_rx_dco_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00011ad4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void ram_pbus_rx_dco_cal(uint16 smp_num,sint16 *dc_comp,uint16 ext_delay_us,bool rxdc_print_en,
                        bool print_debug)

{
  undefined2 unaff_0000200a;
  int iVar1;
  int unaff_s0;
  int in_a0;
  int in_a4;
  int in_a5;
  undefined8 unaff_fs0;
  undefined8 uVar2;
  undefined8 in_fa4;
  undefined8 unaff_fs4;
  sint32 dc_est [3];
  
  iVar1 = CONCAT22(unaff_0000200a,smp_num) * 0x2000;
  *(undefined8 *)(unaff_s0 + 0x2c) = unaff_fs0;
  if (in_a0 == 0) {
    uRam00000028 = *(undefined8 *)(in_a4 + 0x10);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = *(undefined8 *)(unaff_s0 + 0x44);
  if (unaff_s0 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(iVar1 + -0x140) = unaff_fs4;
  if (in_a5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(in_a5 + 0x7c) = in_fa4;
  *(undefined8 *)(iVar1 + 0x28) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

