/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> get_bbgain_db
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00012f8a) */
/* WARNING: Unknown calling convention */

uint8 get_bbgain_db(uint16 bbgain)

{
  undefined2 unaff_0000200a;
  undefined1 *puVar1;
  int unaff_s0;
  int unaff_s1;
  int in_a0;
  undefined4 in_a4;
  undefined8 in_fa0;
  undefined8 in_fa2;
  undefined8 in_fa3;
  
  puVar1 = *(undefined1 **)(CONCAT22(unaff_0000200a,bbgain) + 0x4c);
  *(undefined8 *)(unaff_s1 + 0x68) = in_fa2;
  *(undefined8 *)(in_a0 + 0xd8) = in_fa3;
  *(undefined8 *)(unaff_s0 + 0x20) = in_fa0;
  custom2();
  if (unaff_s0 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(unaff_s0 + 0x44) = in_a4;
  if (puVar1 == (undefined1 *)0xfffffff8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
  } while (unaff_s1 == 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

