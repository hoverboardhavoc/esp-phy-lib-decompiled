/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_ana.o -> ram_pbus_force_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void ram_pbus_force_test(u8 pbus_no,u8 bus_en,u16 config_data)

{
  undefined3 unaff_00002009;
  undefined1 *puVar1;
  int iVar2;
  int in_a0;
  int in_a1;
  int in_a5;
  undefined8 in_fa4;
  
  puVar1 = *(undefined1 **)(CONCAT31(unaff_00002009,pbus_no) + 0x4c);
  iVar2 = *(int *)(in_a0 + 0x20);
  *(undefined8 *)(in_a5 + 0x7c) = in_fa4;
  *(undefined8 *)(iVar2 + 0x2c) = *(undefined8 *)(iVar2 + 0x40);
  if (in_a1 == -0xb) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)iVar2 = iVar2;
  if (puVar1 == (undefined1 *)0xfffffff8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

